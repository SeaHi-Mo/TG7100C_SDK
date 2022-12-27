/**
 ******************************************************************************
 * @file    tg7100c_pwm.c
 * @version V1.0
 * @date
 * @brief   This file is the standard driver c file
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; COPYRIGHT(c) 2020 Bouffalo Lab</center></h2>
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *   1. Redistributions of source code must retain the above copyright notice,
 *      this list of conditions and the following disclaimer.
 *   2. Redistributions in binary form must reproduce the above copyright notice,
 *      this list of conditions and the following disclaimer in the documentation
 *      and/or other materials provided with the distribution.
 *   3. Neither the name of Bouffalo Lab nor the names of its contributors
 *      may be used to endorse or promote products derived from this software
 *      without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 ******************************************************************************
 */

#include "tg7100c_pwm.h"

/** @addtogroup  TG7100C_Peripheral_Driver
 *  @{
 */

/** @addtogroup  PWM
 *  @{
 */

/** @defgroup  PWM_Private_Macros
 *  @{
 */
#define PWM_Get_Channel_Reg(ch) (PWM_BASE + PWM_CHANNEL_OFFSET + (ch)*0x20)
#define PWM_INT_TIMEOUT_COUNT (160 * 1000)
#define PWM_STOP_TIMEOUT_COUNT (160 * 1000)

/*@} end of group PWM_Private_Macros */

/** @defgroup  PWM_Private_Types
 *  @{
 */

/*@} end of group PWM_Private_Types */

/** @defgroup  PWM_Private_Variables
 *  @{
 */

/**
 *  @brief PWM interrupt callback function address array
 */
static intCallback_Type *PWMIntCbfArra[PWM_CH_MAX][PWM_INT_ALL] = {
    {NULL}};

/*@} end of group PWM_Private_Variables */

/** @defgroup  PWM_Global_Variables
 *  @{
 */

/*@} end of group PWM_Global_Variables */

/** @defgroup  PWM_Private_Fun_Declaration
 *  @{
 */
#ifndef BFLB_USE_HAL_DRIVER
static BL_Err_Type PWM_IntHandler(IRQn_Type intPeriph);
#endif
static void PWM_Calculate_Period_Threshold(uint32_t frequency, float dutyCycle, uint32_t *clkDiv, uint32_t *period, uint32_t *threshold);

/*@} end of group PWM_Private_Fun_Declaration */

/** @defgroup  PWM_Private_Functions
 *  @{
 */

/****************************************************************************/ /**
                                                                                * @brief  PWM interrupt handle
                                                                                *
                                                                                * @param  intPeriph: Select the peripheral, such as PWM0_IRQn
                                                                                *
                                                                                * @return SUCCESS
                                                                                *
                                                                                *******************************************************************************/
#ifndef BFLB_USE_HAL_DRIVER
static BL_Err_Type PWM_IntHandler(IRQn_Type intPeriph)
{
    uint32_t i;
    uint32_t tmpVal;
    uint32_t timeoutCnt = PWM_INT_TIMEOUT_COUNT;
    /* Get channel register */
    uint32_t PWMx = PWM_BASE;

    for (i = 0; i < PWM_CH_MAX; i++)
    {
        tmpVal = BL_RD_REG(PWMx, PWM_INT_CONFIG);
        if ((BL_GET_REG_BITS_VAL(tmpVal, PWM_INTERRUPT_STS) & (1 << i)) != 0)
        {
            /* Clear interrupt */
            tmpVal |= (1 << (i + PWM_INT_CLEAR_POS));
            BL_WR_REG(PWMx, PWM_INT_CONFIG, tmpVal);
            /* FIXME: we need set pwm_int_clear to 0 by software and
               before this,we must make sure pwm_interrupt_sts is 0*/
            do
            {
                tmpVal = BL_RD_REG(PWMx, PWM_INT_CONFIG);
                timeoutCnt--;
                if (timeoutCnt == 0)
                {
                    break;
                }
            } while (BL_GET_REG_BITS_VAL(tmpVal, PWM_INTERRUPT_STS) & (1 << i));

            tmpVal &= (~(1 << (i + PWM_INT_CLEAR_POS)));
            BL_WR_REG(PWMx, PWM_INT_CONFIG, tmpVal);
            if (PWMIntCbfArra[i][PWM_INT_PULSE_CNT] != NULL)
            {
                /* Call the callback function */
                PWMIntCbfArra[i][PWM_INT_PULSE_CNT]();
            }
        }
    }
    return SUCCESS;
}
#endif

/****************************************************************************/ /**
                                                                                * @brief  PWM calculate period and threshold for smart configuration
                                                                                *
                                                                                * @param  frequency: PWM frequency
                                                                                * @param  dutyCycle: PWM duty cycle
                                                                                * @param  clkDiv: PWM clock div
                                                                                * @param  period: PWM period
                                                                                * @param  threshold: PWM threshold for duty cycle
                                                                                *
                                                                                * @return SUCCESS
                                                                                *
                                                                                *******************************************************************************/
static void PWM_Calculate_Period_Threshold(uint32_t frequency, float dutyCycle, uint32_t *clkDiv, uint32_t *period, uint32_t *threshold)
{
    if (frequency <= 40)
    {
        *clkDiv = 625;
        *period = 64000 / frequency;
        *threshold = 640 * dutyCycle / frequency;
    }
    else if (frequency <= 78)
    {
        *clkDiv = 16;
        *period = 2500000 / frequency;
        *threshold = 25000 * dutyCycle / frequency;
    }
    else if (frequency <= 155)
    {
        *clkDiv = 8;
        *period = 5000000 / frequency;
        *threshold = 50000 * dutyCycle / frequency;
    }
    else if (frequency <= 310)
    {
        *clkDiv = 4;
        *period = 10000000 / frequency;
        *threshold = 100000 * dutyCycle / frequency;
    }
    else if (frequency <= 620)
    {
        *clkDiv = 2;
        *period = 20000000 / frequency;
        *threshold = 200000 * dutyCycle / frequency;
    }
    else
    {
        *clkDiv = 1;
        *period = 40000000 / frequency;
        *threshold = 400000 * dutyCycle / frequency;
    }
}

/*@} end of group PWM_Private_Functions */

/** @defgroup  PWM_Public_Functions
 *  @{
 */

/****************************************************************************/ /**
                                                                                * @brief  PWM channel init
                                                                                *
                                                                                * @param  chCfg: PWM configuration
                                                                                *
                                                                                * @return SUCCESS
                                                                                *
                                                                                *******************************************************************************/
BL_Err_Type PWM_Channel_Init(PWM_CH_CFG_Type *chCfg)
{
    uint32_t tmpVal;
    uint32_t timeoutCnt = PWM_STOP_TIMEOUT_COUNT;
    /* Get channel register */
    uint32_t PWMx = PWM_Get_Channel_Reg(chCfg->ch);

    /* Check the parameters */
    CHECK_PARAM(IS_PWM_CH_ID_TYPE(chCfg->ch));
    CHECK_PARAM(IS_PWM_CLK_TYPE(chCfg->clk));
    CHECK_PARAM(IS_PWM_POLARITY_TYPE(chCfg->pol));
    CHECK_PARAM(IS_PWM_STOP_MODE_TYPE(chCfg->stopMode));

    /* Config pwm clock and polarity */
    tmpVal = BL_RD_REG(PWMx, PWM_CONFIG);
    BL_WR_REG(PWMx, PWM_CONFIG, BL_SET_REG_BIT(tmpVal, PWM_STOP_EN));
    while (!BL_IS_REG_BIT_SET(BL_RD_REG(PWMx, PWM_CONFIG), PWM_STS_TOP))
    {
        timeoutCnt--;
        if (timeoutCnt == 0)
        {
            return TIMEOUT;
        }
    }
    tmpVal = BL_RD_REG(PWMx, PWM_CONFIG);
    tmpVal = BL_SET_REG_BITS_VAL(tmpVal, PWM_REG_CLK_SEL, chCfg->clk);
    tmpVal = BL_SET_REG_BITS_VAL(tmpVal, PWM_OUT_INV, chCfg->pol);
    tmpVal = BL_SET_REG_BITS_VAL(tmpVal, PWM_STOP_MODE, chCfg->stopMode);
    BL_WR_REG(PWMx, PWM_CONFIG, tmpVal);

    /* Config pwm division */
    BL_WR_REG(PWMx, PWM_CLKDIV, chCfg->clkDiv);

    /* Config pwm period and duty */
    BL_WR_REG(PWMx, PWM_THRE1, chCfg->threshold1);
    BL_WR_REG(PWMx, PWM_THRE2, chCfg->threshold2);
    BL_WR_REG(PWMx, PWM_PERIOD, chCfg->period);

    /* Config interrupt pulse count */
    tmpVal = BL_RD_REG(PWMx, PWM_INTERRUPT);
    BL_WR_REG(PWMx, PWM_INTERRUPT, BL_SET_REG_BITS_VAL(tmpVal, PWM_INT_PERIOD_CNT, chCfg->intPulseCnt));
    PWM_IntMask(chCfg->ch, PWM_INT_PULSE_CNT, chCfg->intPulseCnt != 0 ? UNMASK : MASK);

#ifndef BFLB_USE_HAL_DRIVER
    Interrupt_Handler_Register(PWM_IRQn, PWM_IRQHandler);
#endif

    return SUCCESS;
}

/****************************************************************************/ /**
                                                                                * @brief  PWM channel update source memory address and len
                                                                                *
                                                                                * @param  ch: PWM channel
                                                                                * @param  period: period
                                                                                * @param  threshold1: threshold1
                                                                                * @param  threshold2: threshold2
                                                                                *
                                                                                * @return None
                                                                                *
                                                                                *******************************************************************************/
void PWM_Channel_Update(PWM_CH_ID_Type ch, uint16_t period, uint16_t threshold1, uint16_t threshold2)
{
    /* Get channel register */
    uint32_t PWMx = PWM_Get_Channel_Reg(ch);

    /* Check the parameters */
    CHECK_PARAM(IS_PWM_CH_ID_TYPE(ch));

    /* Config pwm period and duty */
    BL_WR_REG(PWMx, PWM_THRE1, threshold1);
    BL_WR_REG(PWMx, PWM_THRE2, threshold2);
    BL_WR_REG(PWMx, PWM_PERIOD, period);
}

/****************************************************************************/ /**
                                                                                * @brief  PWM channel update clock divider
                                                                                *
                                                                                * @param  ch: PWM channel
                                                                                * @param  div: Clock divider
                                                                                *
                                                                                * @return None
                                                                                *
                                                                                *******************************************************************************/
void PWM_Channel_Set_Div(PWM_CH_ID_Type ch, uint16_t div)
{
    /* Get channel register */
    uint32_t PWMx = PWM_Get_Channel_Reg(ch);

    /* Check the parameters */
    CHECK_PARAM(IS_PWM_CH_ID_TYPE(ch));

    BL_WR_REG(PWMx, PWM_CLKDIV, div);
}

/****************************************************************************/ /**
                                                                                * @brief  PWM channel update threshold1
                                                                                *
                                                                                * @param  ch: PWM channel
                                                                                * @param  threshold1: threshold1
                                                                                *
                                                                                * @return None
                                                                                *
                                                                                *******************************************************************************/
void PWM_Channel_Set_Threshold1(PWM_CH_ID_Type ch, uint16_t threshold1)
{
    /* Get channel register */
    uint32_t PWMx = PWM_Get_Channel_Reg(ch);

    /* Check the parameters */
    CHECK_PARAM(IS_PWM_CH_ID_TYPE(ch));

    /* Config pwm period and duty */
    BL_WR_REG(PWMx, PWM_THRE1, threshold1);
}

/****************************************************************************/ /**
                                                                                * @brief  PWM channel update threshold2
                                                                                *
                                                                                * @param  ch: PWM channel
                                                                                * @param  threshold2: threshold2
                                                                                *
                                                                                * @return None
                                                                                *
                                                                                *******************************************************************************/
void PWM_Channel_Set_Threshold2(PWM_CH_ID_Type ch, uint16_t threshold2)
{
    /* Get channel register */
    uint32_t PWMx = PWM_Get_Channel_Reg(ch);

    /* Check the parameters */
    CHECK_PARAM(IS_PWM_CH_ID_TYPE(ch));

    /* Config pwm period and duty */
    BL_WR_REG(PWMx, PWM_THRE2, threshold2);
}

/****************************************************************************/ /**
                                                                                * @brief  PWM channel update period
                                                                                *
                                                                                * @param  ch: PWM channel
                                                                                * @param  period: period
                                                                                *
                                                                                * @return None
                                                                                *
                                                                                *******************************************************************************/
void PWM_Channel_Set_Period(PWM_CH_ID_Type ch, uint16_t period)
{
    /* Get channel register */
    uint32_t PWMx = PWM_Get_Channel_Reg(ch);

    /* Check the parameters */
    CHECK_PARAM(IS_PWM_CH_ID_TYPE(ch));

    /* Config pwm period and duty */
    BL_WR_REG(PWMx, PWM_PERIOD, period);
}

/****************************************************************************/ /**
                                                                                * @brief  PWM get configuration
                                                                                *
                                                                                * @param  ch: PWM channel
                                                                                * @param  period: period pointer
                                                                                * @param  threshold1: threshold1 pointer
                                                                                * @param  threshold2: threshold2 pointer
                                                                                *
                                                                                * @return None
                                                                                *
                                                                                *******************************************************************************/
void PWM_Channel_Get(PWM_CH_ID_Type ch, uint16_t *period, uint16_t *threshold1, uint16_t *threshold2)
{
    uint32_t tmpVal;
    /* Get channel register */
    uint32_t PWMx = PWM_Get_Channel_Reg(ch);

    /* Check the parameters */
    CHECK_PARAM(IS_PWM_CH_ID_TYPE(ch));

    /* get pwm period and duty */
    tmpVal = BL_RD_REG(PWMx, PWM_THRE1);
    *threshold1 = BL_GET_REG_BITS_VAL(tmpVal, PWM_THRE1);
    tmpVal = BL_RD_REG(PWMx, PWM_THRE2);
    *threshold2 = BL_GET_REG_BITS_VAL(tmpVal, PWM_THRE2);
    tmpVal = BL_RD_REG(PWMx, PWM_PERIOD);
    *period = BL_GET_REG_BITS_VAL(tmpVal, PWM_PERIOD);
}

/****************************************************************************/ /**
                                                                                * @brief  PWM enable
                                                                                *
                                                                                * @param  ch: PWM channel number
                                                                                *
                                                                                * @return None
                                                                                *
                                                                                *******************************************************************************/
void ATTR_TCM_SECTION PWM_Channel_Enable(PWM_CH_ID_Type ch)
{
    uint32_t tmpVal;
    /* Get channel register */
    uint32_t PWMx = PWM_Get_Channel_Reg(ch);

    /* Check the parameters */
    CHECK_PARAM(IS_PWM_CH_ID_TYPE(ch));

    /* Config pwm clock to enable pwm */
    tmpVal = BL_RD_REG(PWMx, PWM_CONFIG);
    BL_WR_REG(PWMx, PWM_CONFIG, BL_CLR_REG_BIT(tmpVal, PWM_STOP_EN));
}

/****************************************************************************/ /**
                                                                                * @brief  PWM disable
                                                                                *
                                                                                * @param  ch: PWM channel number
                                                                                *
                                                                                * @return None
                                                                                *
                                                                                *******************************************************************************/
void PWM_Channel_Disable(PWM_CH_ID_Type ch)
{
    uint32_t tmpVal;
    /* Get channel register */
    uint32_t PWMx = PWM_Get_Channel_Reg(ch);

    /* Check the parameters */
    CHECK_PARAM(IS_PWM_CH_ID_TYPE(ch));

    /* Config pwm clock to disable pwm */
    tmpVal = BL_RD_REG(PWMx, PWM_CONFIG);
    BL_WR_REG(PWMx, PWM_CONFIG, BL_SET_REG_BIT(tmpVal, PWM_STOP_EN));
    PWM_IntMask(ch, PWM_INT_PULSE_CNT, MASK);
}

/****************************************************************************/ /**
                                                                                * @brief  PWM channel software mode enable or disable
                                                                                *
                                                                                * @param  ch: PWM channel number
                                                                                * @param  enable: Enable or disable
                                                                                *
                                                                                * @return None
                                                                                *
                                                                                *******************************************************************************/
void PWM_SW_Mode(PWM_CH_ID_Type ch, BL_Fun_Type enable)
{
    uint32_t tmpVal;
    /* Get channel register */
    uint32_t PWMx = PWM_Get_Channel_Reg(ch);

    /* Check the parameters */
    CHECK_PARAM(IS_PWM_CH_ID_TYPE(ch));

    tmpVal = BL_RD_REG(PWMx, PWM_CONFIG);
    BL_WR_REG(PWMx, PWM_CONFIG, BL_SET_REG_BITS_VAL(tmpVal, PWM_SW_MODE, enable));
}

/****************************************************************************/ /**
                                                                                * @brief  PWM channel force output high or low
                                                                                *
                                                                                * @param  ch: PWM channel number
                                                                                * @param  value: Output value
                                                                                *
                                                                                * @return None
                                                                                *
                                                                                *******************************************************************************/
void PWM_SW_Force_Value(PWM_CH_ID_Type ch, uint8_t value)
{
    uint32_t tmpVal;
    /* Get channel register */
    uint32_t PWMx = PWM_Get_Channel_Reg(ch);

    /* Check the parameters */
    CHECK_PARAM(IS_PWM_CH_ID_TYPE(ch));

    tmpVal = BL_RD_REG(PWMx, PWM_CONFIG);
    BL_WR_REG(PWMx, PWM_CONFIG, BL_SET_REG_BITS_VAL(tmpVal, PWM_SW_FORCE_VAL, value));
}

/****************************************************************************/ /**
                                                                                * @brief  PWM channel force output high
                                                                                *
                                                                                * @param  ch: PWM channel number
                                                                                *
                                                                                * @return None
                                                                                *
                                                                                *******************************************************************************/
void PWM_Channel_Fource_Output(PWM_CH_ID_Type ch)
{
    uint32_t tmpVal;
    /* Get channel register */
    uint32_t PWMx = PWM_Get_Channel_Reg(ch);

    /* Check the parameters */
    CHECK_PARAM(IS_PWM_CH_ID_TYPE(ch));

    tmpVal = BL_RD_REG(PWMx, PWM_CONFIG);
    BL_WR_REG(PWMx, PWM_CONFIG, BL_SET_REG_BIT(tmpVal, PWM_SW_MODE));
}

/****************************************************************************/ /**
                                                                                * @brief  Mask/Unmask the PWM interrupt
                                                                                *
                                                                                * @param  ch: PWM channel number
                                                                                * @param  intType: Specifies the interrupt type
                                                                                * @param  intMask: Enable/Disable Specified interrupt type
                                                                                *
                                                                                * @return None
                                                                                *
                                                                                *******************************************************************************/
void PWM_IntMask(PWM_CH_ID_Type ch, PWM_INT_Type intType, BL_Mask_Type intMask)
{
    uint32_t tmpVal;
    /* Get channel register */
    uint32_t PWMx = PWM_Get_Channel_Reg(ch);

    /* Check the parameters */
    CHECK_PARAM(IS_PWM_CH_ID_TYPE(ch));
    CHECK_PARAM(IS_PWM_INT_TYPE(intType));

    tmpVal = BL_RD_REG(PWMx, PWM_INTERRUPT);

    switch (intType)
    {
    case PWM_INT_PULSE_CNT:
        if (intMask == UNMASK)
        {
            /* UNMASK(Enable) this interrupt */
            BL_WR_REG(PWMx, PWM_INTERRUPT, BL_SET_REG_BIT(tmpVal, PWM_INT_ENABLE));
        }
        else
        {
            /* MASK(Disable) this interrupt */
            BL_WR_REG(PWMx, PWM_INTERRUPT, BL_CLR_REG_BIT(tmpVal, PWM_INT_ENABLE));
        }
        break;
    case PWM_INT_ALL:
        if (intMask == UNMASK)
        {
            /* UNMASK(Enable) this interrupt */
            BL_WR_REG(PWMx, PWM_INTERRUPT, BL_SET_REG_BIT(tmpVal, PWM_INT_ENABLE));
        }
        else
        {
            /* MASK(Disable) this interrupt */
            BL_WR_REG(PWMx, PWM_INTERRUPT, BL_CLR_REG_BIT(tmpVal, PWM_INT_ENABLE));
        }
        break;

    default:
        break;
    }
}

/****************************************************************************/ /**
                                                                                * @brief  Install PWM interrupt callback function
                                                                                *
                                                                                * @param  ch: PWM channel number
                                                                                * @param  intType: PWM interrupt type
                                                                                * @param  cbFun: Pointer to interrupt callback function. The type should be void (*fn)(void)
                                                                                *
                                                                                * @return None
                                                                                *
                                                                                *******************************************************************************/
void PWM_Int_Callback_Install(PWM_CH_ID_Type ch, uint32_t intType, intCallback_Type *cbFun)
{
    PWMIntCbfArra[ch][intType] = cbFun;
}

/****************************************************************************/ /**
                                                                                * @brief  PWM smart configure according to frequency and duty cycle function
                                                                                *
                                                                                * @param  ch: PWM channel number
                                                                                * @param  frequency: PWM frequency
                                                                                * @param  dutyCycle: PWM duty cycle
                                                                                *
                                                                                * @return SUCCESS or TIMEOUT
                                                                                *
                                                                                *******************************************************************************/
BL_Err_Type PWM_Smart_Configure(PWM_CH_ID_Type ch, uint32_t frequency, uint8_t dutyCycle)
{
    uint32_t tmpVal;
    uint16_t clkDiv, period, threshold2;
    uint32_t timeoutCnt = PWM_STOP_TIMEOUT_COUNT;
    /* Get channel register */
    uint32_t PWMx = PWM_Get_Channel_Reg(ch);

    if (frequency <= 78)
    {
        clkDiv = 1250;
        period = 64000 / frequency;
        threshold2 = 640 * dutyCycle / frequency;
    }
    else if (frequency <= 155)
    {
        clkDiv = 16;
        period = 5000000 / frequency;
        threshold2 = 50000 * dutyCycle / frequency;
    }
    else if (frequency <= 310)
    {
        clkDiv = 8;
        period = 10000000 / frequency;
        threshold2 = 100000 * dutyCycle / frequency;
    }
    else if (frequency <= 620)
    {
        clkDiv = 4;
        period = 20000000 / frequency;
        threshold2 = 200000 * dutyCycle / frequency;
    }
    else if (frequency <= 1230)
    {
        clkDiv = 2;
        period = 40000000 / frequency;
        threshold2 = 400000 * dutyCycle / frequency;
    }
    else
    {
        clkDiv = 1;
        period = 80000000 / frequency;
        threshold2 = 800000 * dutyCycle / frequency;
    }

    tmpVal = BL_RD_REG(PWMx, PWM_CONFIG);
    if (BL_GET_REG_BITS_VAL(tmpVal, PWM_REG_CLK_SEL) != 1)
    {
        BL_WR_REG(PWMx, PWM_CONFIG, BL_SET_REG_BIT(tmpVal, PWM_STOP_EN));
        while (!BL_IS_REG_BIT_SET(BL_RD_REG(PWMx, PWM_CONFIG), PWM_STS_TOP))
        {
            timeoutCnt--;
            if (timeoutCnt == 0)
            {
                return TIMEOUT;
            }
        }
        tmpVal = BL_SET_REG_BITS_VAL(tmpVal, PWM_REG_CLK_SEL, PWM_CLK_BCLK);
    }
    tmpVal = BL_SET_REG_BITS_VAL(tmpVal, PWM_OUT_INV, PWM_POL_NORMAL);
    tmpVal = BL_SET_REG_BITS_VAL(tmpVal, PWM_STOP_MODE, PWM_STOP_GRACEFUL);
    BL_WR_REG(PWMx, PWM_CONFIG, tmpVal);

    /* Config pwm division */
    BL_WR_REG(PWMx, PWM_CLKDIV, clkDiv);

    /* Config pwm period and duty */
    BL_WR_REG(PWMx, PWM_PERIOD, period);
    BL_WR_REG(PWMx, PWM_THRE1, 0);
    BL_WR_REG(PWMx, PWM_THRE2, threshold2);

    return SUCCESS;
}

/****************************************************************************/ /**
                                                                                * @brief  PWM smart configure according to frequency and duty cycle(float type) function
                                                                                *
                                                                                * @param  ch: PWM channel number
                                                                                * @param  frequency: PWM frequency
                                                                                * @param  dutyCycle: PWM duty cycle(float type)
                                                                                *
                                                                                * @return SUCCESS or TIMEOUT
                                                                                *
                                                                                *******************************************************************************/
BL_Err_Type ATTR_TCM_SECTION PWM_Smart_Configure_Float(PWM_CH_ID_Type ch, uint32_t frequency, float dutyCycle)
{
    uint32_t tmpVal;
    uint16_t clkDiv, period, threshold2;
    uint32_t timeoutCnt = PWM_STOP_TIMEOUT_COUNT;
    /* Get channel register */
    uint32_t PWMx = PWM_Get_Channel_Reg(ch);

    if (frequency <= 40)
    {
        clkDiv = 625;
        period = 64000 / frequency;
        threshold2 = 640 * dutyCycle / frequency;
    }
    else if (frequency <= 78)
    {
        clkDiv = 16;
        period = 2500000 / frequency;
        threshold2 = 25000 * dutyCycle / frequency;
    }
    else if (frequency <= 155)
    {
        clkDiv = 8;
        period = 5000000 / frequency;
        threshold2 = 50000 * dutyCycle / frequency;
    }
    else if (frequency <= 310)
    {
        clkDiv = 4;
        period = 10000000 / frequency;
        threshold2 = 100000 * dutyCycle / frequency;
    }
    else if (frequency <= 620)
    {
        clkDiv = 2;
        period = 20000000 / frequency;
        threshold2 = 200000 * dutyCycle / frequency;
    }
    else
    {
        clkDiv = 1;
        period = 40000000 / frequency;
        threshold2 = 400000 * dutyCycle / frequency;
    }

    tmpVal = BL_RD_REG(PWMx, PWM_CONFIG);
    if (BL_GET_REG_BITS_VAL(tmpVal, PWM_REG_CLK_SEL) != PWM_CLK_XCLK)
    {
        BL_WR_REG(PWMx, PWM_CONFIG, BL_SET_REG_BIT(tmpVal, PWM_STOP_EN));
        while (!BL_IS_REG_BIT_SET(BL_RD_REG(PWMx, PWM_CONFIG), PWM_STS_TOP))
        {
            timeoutCnt--;
            if (timeoutCnt == 0)
            {
                return TIMEOUT;
            }
        }
        tmpVal = BL_SET_REG_BITS_VAL(tmpVal, PWM_REG_CLK_SEL, PWM_CLK_XCLK);
    }
    tmpVal = BL_SET_REG_BITS_VAL(tmpVal, PWM_OUT_INV, PWM_POL_NORMAL);
    tmpVal = BL_SET_REG_BITS_VAL(tmpVal, PWM_STOP_MODE, PWM_STOP_GRACEFUL);
    BL_WR_REG(PWMx, PWM_CONFIG, tmpVal);

    /* Config pwm division */
    BL_WR_REG(PWMx, PWM_CLKDIV, clkDiv);

    /* Config pwm period and duty */
    BL_WR_REG(PWMx, PWM_PERIOD, period);
    BL_WR_REG(PWMx, PWM_THRE1, 0);
    BL_WR_REG(PWMx, PWM_THRE2, threshold2);

    return SUCCESS;
}
#include <tg7100c_gpio.h>
/****************************************************************************/ /**
                                                                                * @brief  PWM 2 multichannel smart configure according to frequency and duty cycle(float type) function
                                                                                *
                                                                                * @param  ch0: First channel id
                                                                                * @param  pin0: GPIO pin of first channel
                                                                                * @param  frequency0: Frequency of first channel
                                                                                * @param  dutyCycle0: Duty cycle of first channel
                                                                                * @param  ch1: Second channel id
                                                                                * @param  pin1: GPIO pin of Second channel
                                                                                * @param  frequency1: Frequency of Second channel
                                                                                * @param  dutyCycle1: Duty cycle of Second channel
                                                                                *
                                                                                * @return SUCCESS or TIMEOUT
                                                                                *
                                                                                *******************************************************************************/
BL_Err_Type ATTR_TCM_SECTION PWM_Smart_Configure_Float_2channels_fix(PWM_CH_ID_Type ch0, uint32_t pin0, uint32_t frequency0, float dutyCycle0,
                                                                     PWM_CH_ID_Type ch1, uint32_t pin1, uint32_t frequency1, float dutyCycle1)
{

    uint32_t i, PWMx[2], pwmCfg[2][4];
    uint32_t volatile *pointer0, *pointer1;
    static uint32_t firstFlag = 0;
    GLB_GPIO_Type pins[2] = {pin0, pin1};

    PWM_Calculate_Period_Threshold(frequency0, dutyCycle0, &pwmCfg[0][0], &pwmCfg[0][3], &pwmCfg[0][2]);
    PWM_Calculate_Period_Threshold(frequency1, dutyCycle1, &pwmCfg[1][0], &pwmCfg[1][3], &pwmCfg[1][2]);
    PWMx[0] = PWM_Get_Channel_Reg(ch0);
    PWMx[1] = PWM_Get_Channel_Reg(ch1);

    pwmCfg[0][1] = 0;
    pwmCfg[1][1] = 0;

    if (firstFlag == 0)
    {

        GLB_GPIO_Func_Init(GPIO_FUN_PWM, pins, 2);
        GLB_AHB_Slave1_Reset(BL_AHB_SLAVE1_PWM);
    }

    firstFlag = 1;

    pointer0 = (uint32_t *)(PWMx[0]);
    pointer1 = (uint32_t *)(PWMx[1]);

    for (i = 0; i < 4; i++)
    {
        *pointer0++ = pwmCfg[0][i];
        *pointer1++ = pwmCfg[1][i];
    }

    return SUCCESS;
}

/****************************************************************************/ /**
                                                                                * @brief  PWM interrupt function
                                                                                *
                                                                                * @param  None
                                                                                *
                                                                                * @return None
                                                                                *
                                                                                *******************************************************************************/
#ifndef BFLB_USE_HAL_DRIVER
void PWM_IRQHandler(void)
{
    PWM_IntHandler(PWM_IRQn);
}
#endif

BL_Err_Type ATTR_TCM_SECTION PWM_Smart_Configure_Float_2channels(float dutyCycle0, float dutyCycle1)
{
    PWM_Smart_Configure_Float_2channels_fix(2, 12, 16000, dutyCycle0, 3, 3, 16000, dutyCycle1);
    //PWM_Smart_Configure_Float_2channels_fix(2, 12, 16000, dutyCycle0, 1, 11, 16000, dutyCycle1);
}
/*@} end of group PWM_Public_Functions */

/*@} end of group PWM */

/*@} end of group TG7100C_Peripheral_Driver */
