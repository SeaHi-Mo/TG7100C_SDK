/**
  ******************************************************************************
  * @file    pds_reg.h
  * @version V1.2
  * @date    2020-04-30
  * @brief   This file is the description of.IP register
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
#ifndef  __PDS_REG_H__
#define  __PDS_REG_H__

#include "tg7100c.h"

/* 0x0 : PDS_CTL */
#define PDS_CTL_OFFSET                                          (0x0)
#define PDS_START_PS                                            PDS_START_PS
#define PDS_START_PS_POS                                        (0U)
#define PDS_START_PS_LEN                                        (1U)
#define PDS_START_PS_MSK                                        (((1U<<PDS_START_PS_LEN)-1)<<PDS_START_PS_POS)
#define PDS_START_PS_UMSK                                       (~(((1U<<PDS_START_PS_LEN)-1)<<PDS_START_PS_POS))
#define PDS_CR_SLEEP_FOREVER                                    PDS_CR_SLEEP_FOREVER
#define PDS_CR_SLEEP_FOREVER_POS                                (1U)
#define PDS_CR_SLEEP_FOREVER_LEN                                (1U)
#define PDS_CR_SLEEP_FOREVER_MSK                                (((1U<<PDS_CR_SLEEP_FOREVER_LEN)-1)<<PDS_CR_SLEEP_FOREVER_POS)
#define PDS_CR_SLEEP_FOREVER_UMSK                               (~(((1U<<PDS_CR_SLEEP_FOREVER_LEN)-1)<<PDS_CR_SLEEP_FOREVER_POS))
#define PDS_CR_XTAL_FORCE_OFF                                   PDS_CR_XTAL_FORCE_OFF
#define PDS_CR_XTAL_FORCE_OFF_POS                               (2U)
#define PDS_CR_XTAL_FORCE_OFF_LEN                               (1U)
#define PDS_CR_XTAL_FORCE_OFF_MSK                               (((1U<<PDS_CR_XTAL_FORCE_OFF_LEN)-1)<<PDS_CR_XTAL_FORCE_OFF_POS)
#define PDS_CR_XTAL_FORCE_OFF_UMSK                              (~(((1U<<PDS_CR_XTAL_FORCE_OFF_LEN)-1)<<PDS_CR_XTAL_FORCE_OFF_POS))
#define PDS_CR_WIFI_PDS_SAVE_STATE                              PDS_CR_WIFI_PDS_SAVE_STATE
#define PDS_CR_WIFI_PDS_SAVE_STATE_POS                          (3U)
#define PDS_CR_WIFI_PDS_SAVE_STATE_LEN                          (1U)
#define PDS_CR_WIFI_PDS_SAVE_STATE_MSK                          (((1U<<PDS_CR_WIFI_PDS_SAVE_STATE_LEN)-1)<<PDS_CR_WIFI_PDS_SAVE_STATE_POS)
#define PDS_CR_WIFI_PDS_SAVE_STATE_UMSK                         (~(((1U<<PDS_CR_WIFI_PDS_SAVE_STATE_LEN)-1)<<PDS_CR_WIFI_PDS_SAVE_STATE_POS))
#define PDS_CR_PDS_PD_DCDC18                                    PDS_CR_PDS_PD_DCDC18
#define PDS_CR_PDS_PD_DCDC18_POS                                (4U)
#define PDS_CR_PDS_PD_DCDC18_LEN                                (1U)
#define PDS_CR_PDS_PD_DCDC18_MSK                                (((1U<<PDS_CR_PDS_PD_DCDC18_LEN)-1)<<PDS_CR_PDS_PD_DCDC18_POS)
#define PDS_CR_PDS_PD_DCDC18_UMSK                               (~(((1U<<PDS_CR_PDS_PD_DCDC18_LEN)-1)<<PDS_CR_PDS_PD_DCDC18_POS))
#define PDS_CR_PDS_PD_BG_SYS                                    PDS_CR_PDS_PD_BG_SYS
#define PDS_CR_PDS_PD_BG_SYS_POS                                (5U)
#define PDS_CR_PDS_PD_BG_SYS_LEN                                (1U)
#define PDS_CR_PDS_PD_BG_SYS_MSK                                (((1U<<PDS_CR_PDS_PD_BG_SYS_LEN)-1)<<PDS_CR_PDS_PD_BG_SYS_POS)
#define PDS_CR_PDS_PD_BG_SYS_UMSK                               (~(((1U<<PDS_CR_PDS_PD_BG_SYS_LEN)-1)<<PDS_CR_PDS_PD_BG_SYS_POS))
#define PDS_CR_PDS_GATE_CLK                                     PDS_CR_PDS_GATE_CLK
#define PDS_CR_PDS_GATE_CLK_POS                                 (8U)
#define PDS_CR_PDS_GATE_CLK_LEN                                 (1U)
#define PDS_CR_PDS_GATE_CLK_MSK                                 (((1U<<PDS_CR_PDS_GATE_CLK_LEN)-1)<<PDS_CR_PDS_GATE_CLK_POS)
#define PDS_CR_PDS_GATE_CLK_UMSK                                (~(((1U<<PDS_CR_PDS_GATE_CLK_LEN)-1)<<PDS_CR_PDS_GATE_CLK_POS))
#define PDS_CR_PDS_MEM_STBY                                     PDS_CR_PDS_MEM_STBY
#define PDS_CR_PDS_MEM_STBY_POS                                 (9U)
#define PDS_CR_PDS_MEM_STBY_LEN                                 (1U)
#define PDS_CR_PDS_MEM_STBY_MSK                                 (((1U<<PDS_CR_PDS_MEM_STBY_LEN)-1)<<PDS_CR_PDS_MEM_STBY_POS)
#define PDS_CR_PDS_MEM_STBY_UMSK                                (~(((1U<<PDS_CR_PDS_MEM_STBY_LEN)-1)<<PDS_CR_PDS_MEM_STBY_POS))
#define PDS_CR_PDS_ISO_EN                                       PDS_CR_PDS_ISO_EN
#define PDS_CR_PDS_ISO_EN_POS                                   (11U)
#define PDS_CR_PDS_ISO_EN_LEN                                   (1U)
#define PDS_CR_PDS_ISO_EN_MSK                                   (((1U<<PDS_CR_PDS_ISO_EN_LEN)-1)<<PDS_CR_PDS_ISO_EN_POS)
#define PDS_CR_PDS_ISO_EN_UMSK                                  (~(((1U<<PDS_CR_PDS_ISO_EN_LEN)-1)<<PDS_CR_PDS_ISO_EN_POS))
#define PDS_CR_PDS_WAIT_XTAL_RDY                                PDS_CR_PDS_WAIT_XTAL_RDY
#define PDS_CR_PDS_WAIT_XTAL_RDY_POS                            (12U)
#define PDS_CR_PDS_WAIT_XTAL_RDY_LEN                            (1U)
#define PDS_CR_PDS_WAIT_XTAL_RDY_MSK                            (((1U<<PDS_CR_PDS_WAIT_XTAL_RDY_LEN)-1)<<PDS_CR_PDS_WAIT_XTAL_RDY_POS)
#define PDS_CR_PDS_WAIT_XTAL_RDY_UMSK                           (~(((1U<<PDS_CR_PDS_WAIT_XTAL_RDY_LEN)-1)<<PDS_CR_PDS_WAIT_XTAL_RDY_POS))
#define PDS_CR_PDS_PWR_OFF                                      PDS_CR_PDS_PWR_OFF
#define PDS_CR_PDS_PWR_OFF_POS                                  (13U)
#define PDS_CR_PDS_PWR_OFF_LEN                                  (1U)
#define PDS_CR_PDS_PWR_OFF_MSK                                  (((1U<<PDS_CR_PDS_PWR_OFF_LEN)-1)<<PDS_CR_PDS_PWR_OFF_POS)
#define PDS_CR_PDS_PWR_OFF_UMSK                                 (~(((1U<<PDS_CR_PDS_PWR_OFF_LEN)-1)<<PDS_CR_PDS_PWR_OFF_POS))
#define PDS_CR_PDS_PD_XTAL                                      PDS_CR_PDS_PD_XTAL
#define PDS_CR_PDS_PD_XTAL_POS                                  (14U)
#define PDS_CR_PDS_PD_XTAL_LEN                                  (1U)
#define PDS_CR_PDS_PD_XTAL_MSK                                  (((1U<<PDS_CR_PDS_PD_XTAL_LEN)-1)<<PDS_CR_PDS_PD_XTAL_POS)
#define PDS_CR_PDS_PD_XTAL_UMSK                                 (~(((1U<<PDS_CR_PDS_PD_XTAL_LEN)-1)<<PDS_CR_PDS_PD_XTAL_POS))
#define PDS_CR_PDS_SOC_ENB_FORCE_ON                             PDS_CR_PDS_SOC_ENB_FORCE_ON
#define PDS_CR_PDS_SOC_ENB_FORCE_ON_POS                         (15U)
#define PDS_CR_PDS_SOC_ENB_FORCE_ON_LEN                         (1U)
#define PDS_CR_PDS_SOC_ENB_FORCE_ON_MSK                         (((1U<<PDS_CR_PDS_SOC_ENB_FORCE_ON_LEN)-1)<<PDS_CR_PDS_SOC_ENB_FORCE_ON_POS)
#define PDS_CR_PDS_SOC_ENB_FORCE_ON_UMSK                        (~(((1U<<PDS_CR_PDS_SOC_ENB_FORCE_ON_LEN)-1)<<PDS_CR_PDS_SOC_ENB_FORCE_ON_POS))
#define PDS_CR_PDS_RST_SOC_EN                                   PDS_CR_PDS_RST_SOC_EN
#define PDS_CR_PDS_RST_SOC_EN_POS                               (16U)
#define PDS_CR_PDS_RST_SOC_EN_LEN                               (1U)
#define PDS_CR_PDS_RST_SOC_EN_MSK                               (((1U<<PDS_CR_PDS_RST_SOC_EN_LEN)-1)<<PDS_CR_PDS_RST_SOC_EN_POS)
#define PDS_CR_PDS_RST_SOC_EN_UMSK                              (~(((1U<<PDS_CR_PDS_RST_SOC_EN_LEN)-1)<<PDS_CR_PDS_RST_SOC_EN_POS))
#define PDS_CR_PDS_RC32M_OFF_DIS                                PDS_CR_PDS_RC32M_OFF_DIS
#define PDS_CR_PDS_RC32M_OFF_DIS_POS                            (17U)
#define PDS_CR_PDS_RC32M_OFF_DIS_LEN                            (1U)
#define PDS_CR_PDS_RC32M_OFF_DIS_MSK                            (((1U<<PDS_CR_PDS_RC32M_OFF_DIS_LEN)-1)<<PDS_CR_PDS_RC32M_OFF_DIS_POS)
#define PDS_CR_PDS_RC32M_OFF_DIS_UMSK                           (~(((1U<<PDS_CR_PDS_RC32M_OFF_DIS_LEN)-1)<<PDS_CR_PDS_RC32M_OFF_DIS_POS))
#define PDS_CR_PDS_LDO_VSEL_EN                                  PDS_CR_PDS_LDO_VSEL_EN
#define PDS_CR_PDS_LDO_VSEL_EN_POS                              (18U)
#define PDS_CR_PDS_LDO_VSEL_EN_LEN                              (1U)
#define PDS_CR_PDS_LDO_VSEL_EN_MSK                              (((1U<<PDS_CR_PDS_LDO_VSEL_EN_LEN)-1)<<PDS_CR_PDS_LDO_VSEL_EN_POS)
#define PDS_CR_PDS_LDO_VSEL_EN_UMSK                             (~(((1U<<PDS_CR_PDS_LDO_VSEL_EN_LEN)-1)<<PDS_CR_PDS_LDO_VSEL_EN_POS))
#define PDS_CR_NP_WFI_MASK                                      PDS_CR_NP_WFI_MASK
#define PDS_CR_NP_WFI_MASK_POS                                  (21U)
#define PDS_CR_NP_WFI_MASK_LEN                                  (1U)
#define PDS_CR_NP_WFI_MASK_MSK                                  (((1U<<PDS_CR_NP_WFI_MASK_LEN)-1)<<PDS_CR_NP_WFI_MASK_POS)
#define PDS_CR_NP_WFI_MASK_UMSK                                 (~(((1U<<PDS_CR_NP_WFI_MASK_LEN)-1)<<PDS_CR_NP_WFI_MASK_POS))
#define PDS_CR_PDS_PD_LDO11                                     PDS_CR_PDS_PD_LDO11
#define PDS_CR_PDS_PD_LDO11_POS                                 (22U)
#define PDS_CR_PDS_PD_LDO11_LEN                                 (1U)
#define PDS_CR_PDS_PD_LDO11_MSK                                 (((1U<<PDS_CR_PDS_PD_LDO11_LEN)-1)<<PDS_CR_PDS_PD_LDO11_POS)
#define PDS_CR_PDS_PD_LDO11_UMSK                                (~(((1U<<PDS_CR_PDS_PD_LDO11_LEN)-1)<<PDS_CR_PDS_PD_LDO11_POS))
#define PDS_CR_PDS_LDO_VOL                                      PDS_CR_PDS_LDO_VOL
#define PDS_CR_PDS_LDO_VOL_POS                                  (24U)
#define PDS_CR_PDS_LDO_VOL_LEN                                  (4U)
#define PDS_CR_PDS_LDO_VOL_MSK                                  (((1U<<PDS_CR_PDS_LDO_VOL_LEN)-1)<<PDS_CR_PDS_LDO_VOL_POS)
#define PDS_CR_PDS_LDO_VOL_UMSK                                 (~(((1U<<PDS_CR_PDS_LDO_VOL_LEN)-1)<<PDS_CR_PDS_LDO_VOL_POS))
#define PDS_CR_PDS_CTRL_RF                                      PDS_CR_PDS_CTRL_RF
#define PDS_CR_PDS_CTRL_RF_POS                                  (28U)
#define PDS_CR_PDS_CTRL_RF_LEN                                  (2U)
#define PDS_CR_PDS_CTRL_RF_MSK                                  (((1U<<PDS_CR_PDS_CTRL_RF_LEN)-1)<<PDS_CR_PDS_CTRL_RF_POS)
#define PDS_CR_PDS_CTRL_RF_UMSK                                 (~(((1U<<PDS_CR_PDS_CTRL_RF_LEN)-1)<<PDS_CR_PDS_CTRL_RF_POS))
#define PDS_CR_PDS_CTRL_PLL                                     PDS_CR_PDS_CTRL_PLL
#define PDS_CR_PDS_CTRL_PLL_POS                                 (30U)
#define PDS_CR_PDS_CTRL_PLL_LEN                                 (2U)
#define PDS_CR_PDS_CTRL_PLL_MSK                                 (((1U<<PDS_CR_PDS_CTRL_PLL_LEN)-1)<<PDS_CR_PDS_CTRL_PLL_POS)
#define PDS_CR_PDS_CTRL_PLL_UMSK                                (~(((1U<<PDS_CR_PDS_CTRL_PLL_LEN)-1)<<PDS_CR_PDS_CTRL_PLL_POS))

/* 0x4 : PDS_TIME1 */
#define PDS_TIME1_OFFSET                                        (0x4)
#define PDS_CR_SLEEP_DURATION                                   PDS_CR_SLEEP_DURATION
#define PDS_CR_SLEEP_DURATION_POS                               (0U)
#define PDS_CR_SLEEP_DURATION_LEN                               (32U)
#define PDS_CR_SLEEP_DURATION_MSK                               (((1U<<PDS_CR_SLEEP_DURATION_LEN)-1)<<PDS_CR_SLEEP_DURATION_POS)
#define PDS_CR_SLEEP_DURATION_UMSK                              (~(((1U<<PDS_CR_SLEEP_DURATION_LEN)-1)<<PDS_CR_SLEEP_DURATION_POS))

/* 0xC : PDS_INT */
#define PDS_INT_OFFSET                                          (0xC)
#define PDS_RO_PDS_WAKE_INT                                     PDS_RO_PDS_WAKE_INT
#define PDS_RO_PDS_WAKE_INT_POS                                 (0U)
#define PDS_RO_PDS_WAKE_INT_LEN                                 (1U)
#define PDS_RO_PDS_WAKE_INT_MSK                                 (((1U<<PDS_RO_PDS_WAKE_INT_LEN)-1)<<PDS_RO_PDS_WAKE_INT_POS)
#define PDS_RO_PDS_WAKE_INT_UMSK                                (~(((1U<<PDS_RO_PDS_WAKE_INT_LEN)-1)<<PDS_RO_PDS_WAKE_INT_POS))
#define PDS_RO_PDS_IRQ_IN                                       PDS_RO_PDS_IRQ_IN
#define PDS_RO_PDS_IRQ_IN_POS                                   (1U)
#define PDS_RO_PDS_IRQ_IN_LEN                                   (1U)
#define PDS_RO_PDS_IRQ_IN_MSK                                   (((1U<<PDS_RO_PDS_IRQ_IN_LEN)-1)<<PDS_RO_PDS_IRQ_IN_POS)
#define PDS_RO_PDS_IRQ_IN_UMSK                                  (~(((1U<<PDS_RO_PDS_IRQ_IN_LEN)-1)<<PDS_RO_PDS_IRQ_IN_POS))
#define PDS_RO_PDS_RF_DONE_INT                                  PDS_RO_PDS_RF_DONE_INT
#define PDS_RO_PDS_RF_DONE_INT_POS                              (2U)
#define PDS_RO_PDS_RF_DONE_INT_LEN                              (1U)
#define PDS_RO_PDS_RF_DONE_INT_MSK                              (((1U<<PDS_RO_PDS_RF_DONE_INT_LEN)-1)<<PDS_RO_PDS_RF_DONE_INT_POS)
#define PDS_RO_PDS_RF_DONE_INT_UMSK                             (~(((1U<<PDS_RO_PDS_RF_DONE_INT_LEN)-1)<<PDS_RO_PDS_RF_DONE_INT_POS))
#define PDS_RO_PDS_PLL_DONE_INT                                 PDS_RO_PDS_PLL_DONE_INT
#define PDS_RO_PDS_PLL_DONE_INT_POS                             (3U)
#define PDS_RO_PDS_PLL_DONE_INT_LEN                             (1U)
#define PDS_RO_PDS_PLL_DONE_INT_MSK                             (((1U<<PDS_RO_PDS_PLL_DONE_INT_LEN)-1)<<PDS_RO_PDS_PLL_DONE_INT_POS)
#define PDS_RO_PDS_PLL_DONE_INT_UMSK                            (~(((1U<<PDS_RO_PDS_PLL_DONE_INT_LEN)-1)<<PDS_RO_PDS_PLL_DONE_INT_POS))
#define PDS_CR_PDS_WAKE_INT_MASK                                PDS_CR_PDS_WAKE_INT_MASK
#define PDS_CR_PDS_WAKE_INT_MASK_POS                            (8U)
#define PDS_CR_PDS_WAKE_INT_MASK_LEN                            (1U)
#define PDS_CR_PDS_WAKE_INT_MASK_MSK                            (((1U<<PDS_CR_PDS_WAKE_INT_MASK_LEN)-1)<<PDS_CR_PDS_WAKE_INT_MASK_POS)
#define PDS_CR_PDS_WAKE_INT_MASK_UMSK                           (~(((1U<<PDS_CR_PDS_WAKE_INT_MASK_LEN)-1)<<PDS_CR_PDS_WAKE_INT_MASK_POS))
#define PDS_CR_PDS_IRQ_IN_DIS                                   PDS_CR_PDS_IRQ_IN_DIS
#define PDS_CR_PDS_IRQ_IN_DIS_POS                               (9U)
#define PDS_CR_PDS_IRQ_IN_DIS_LEN                               (1U)
#define PDS_CR_PDS_IRQ_IN_DIS_MSK                               (((1U<<PDS_CR_PDS_IRQ_IN_DIS_LEN)-1)<<PDS_CR_PDS_IRQ_IN_DIS_POS)
#define PDS_CR_PDS_IRQ_IN_DIS_UMSK                              (~(((1U<<PDS_CR_PDS_IRQ_IN_DIS_LEN)-1)<<PDS_CR_PDS_IRQ_IN_DIS_POS))
#define PDS_CR_PDS_RF_DONE_INT_MASK                             PDS_CR_PDS_RF_DONE_INT_MASK
#define PDS_CR_PDS_RF_DONE_INT_MASK_POS                         (10U)
#define PDS_CR_PDS_RF_DONE_INT_MASK_LEN                         (1U)
#define PDS_CR_PDS_RF_DONE_INT_MASK_MSK                         (((1U<<PDS_CR_PDS_RF_DONE_INT_MASK_LEN)-1)<<PDS_CR_PDS_RF_DONE_INT_MASK_POS)
#define PDS_CR_PDS_RF_DONE_INT_MASK_UMSK                        (~(((1U<<PDS_CR_PDS_RF_DONE_INT_MASK_LEN)-1)<<PDS_CR_PDS_RF_DONE_INT_MASK_POS))
#define PDS_CR_PDS_PLL_DONE_INT_MASK                            PDS_CR_PDS_PLL_DONE_INT_MASK
#define PDS_CR_PDS_PLL_DONE_INT_MASK_POS                        (11U)
#define PDS_CR_PDS_PLL_DONE_INT_MASK_LEN                        (1U)
#define PDS_CR_PDS_PLL_DONE_INT_MASK_MSK                        (((1U<<PDS_CR_PDS_PLL_DONE_INT_MASK_LEN)-1)<<PDS_CR_PDS_PLL_DONE_INT_MASK_POS)
#define PDS_CR_PDS_PLL_DONE_INT_MASK_UMSK                       (~(((1U<<PDS_CR_PDS_PLL_DONE_INT_MASK_LEN)-1)<<PDS_CR_PDS_PLL_DONE_INT_MASK_POS))
#define PDS_CR_PDS_INT_CLR                                      PDS_CR_PDS_INT_CLR
#define PDS_CR_PDS_INT_CLR_POS                                  (16U)
#define PDS_CR_PDS_INT_CLR_LEN                                  (1U)
#define PDS_CR_PDS_INT_CLR_MSK                                  (((1U<<PDS_CR_PDS_INT_CLR_LEN)-1)<<PDS_CR_PDS_INT_CLR_POS)
#define PDS_CR_PDS_INT_CLR_UMSK                                 (~(((1U<<PDS_CR_PDS_INT_CLR_LEN)-1)<<PDS_CR_PDS_INT_CLR_POS))

/* 0x10 : PDS_CTL2 */
#define PDS_CTL2_OFFSET                                         (0x10)
#define PDS_CR_PDS_FORCE_NP_PWR_OFF                             PDS_CR_PDS_FORCE_NP_PWR_OFF
#define PDS_CR_PDS_FORCE_NP_PWR_OFF_POS                         (0U)
#define PDS_CR_PDS_FORCE_NP_PWR_OFF_LEN                         (1U)
#define PDS_CR_PDS_FORCE_NP_PWR_OFF_MSK                         (((1U<<PDS_CR_PDS_FORCE_NP_PWR_OFF_LEN)-1)<<PDS_CR_PDS_FORCE_NP_PWR_OFF_POS)
#define PDS_CR_PDS_FORCE_NP_PWR_OFF_UMSK                        (~(((1U<<PDS_CR_PDS_FORCE_NP_PWR_OFF_LEN)-1)<<PDS_CR_PDS_FORCE_NP_PWR_OFF_POS))
#define PDS_CR_PDS_FORCE_WB_PWR_OFF                             PDS_CR_PDS_FORCE_WB_PWR_OFF
#define PDS_CR_PDS_FORCE_WB_PWR_OFF_POS                         (2U)
#define PDS_CR_PDS_FORCE_WB_PWR_OFF_LEN                         (1U)
#define PDS_CR_PDS_FORCE_WB_PWR_OFF_MSK                         (((1U<<PDS_CR_PDS_FORCE_WB_PWR_OFF_LEN)-1)<<PDS_CR_PDS_FORCE_WB_PWR_OFF_POS)
#define PDS_CR_PDS_FORCE_WB_PWR_OFF_UMSK                        (~(((1U<<PDS_CR_PDS_FORCE_WB_PWR_OFF_LEN)-1)<<PDS_CR_PDS_FORCE_WB_PWR_OFF_POS))
#define PDS_CR_PDS_FORCE_NP_ISO_EN                              PDS_CR_PDS_FORCE_NP_ISO_EN
#define PDS_CR_PDS_FORCE_NP_ISO_EN_POS                          (4U)
#define PDS_CR_PDS_FORCE_NP_ISO_EN_LEN                          (1U)
#define PDS_CR_PDS_FORCE_NP_ISO_EN_MSK                          (((1U<<PDS_CR_PDS_FORCE_NP_ISO_EN_LEN)-1)<<PDS_CR_PDS_FORCE_NP_ISO_EN_POS)
#define PDS_CR_PDS_FORCE_NP_ISO_EN_UMSK                         (~(((1U<<PDS_CR_PDS_FORCE_NP_ISO_EN_LEN)-1)<<PDS_CR_PDS_FORCE_NP_ISO_EN_POS))
#define PDS_CR_PDS_FORCE_WB_ISO_EN                              PDS_CR_PDS_FORCE_WB_ISO_EN
#define PDS_CR_PDS_FORCE_WB_ISO_EN_POS                          (6U)
#define PDS_CR_PDS_FORCE_WB_ISO_EN_LEN                          (1U)
#define PDS_CR_PDS_FORCE_WB_ISO_EN_MSK                          (((1U<<PDS_CR_PDS_FORCE_WB_ISO_EN_LEN)-1)<<PDS_CR_PDS_FORCE_WB_ISO_EN_POS)
#define PDS_CR_PDS_FORCE_WB_ISO_EN_UMSK                         (~(((1U<<PDS_CR_PDS_FORCE_WB_ISO_EN_LEN)-1)<<PDS_CR_PDS_FORCE_WB_ISO_EN_POS))
#define PDS_CR_PDS_FORCE_NP_PDS_RST                             PDS_CR_PDS_FORCE_NP_PDS_RST
#define PDS_CR_PDS_FORCE_NP_PDS_RST_POS                         (8U)
#define PDS_CR_PDS_FORCE_NP_PDS_RST_LEN                         (1U)
#define PDS_CR_PDS_FORCE_NP_PDS_RST_MSK                         (((1U<<PDS_CR_PDS_FORCE_NP_PDS_RST_LEN)-1)<<PDS_CR_PDS_FORCE_NP_PDS_RST_POS)
#define PDS_CR_PDS_FORCE_NP_PDS_RST_UMSK                        (~(((1U<<PDS_CR_PDS_FORCE_NP_PDS_RST_LEN)-1)<<PDS_CR_PDS_FORCE_NP_PDS_RST_POS))
#define PDS_CR_PDS_FORCE_WB_PDS_RST                             PDS_CR_PDS_FORCE_WB_PDS_RST
#define PDS_CR_PDS_FORCE_WB_PDS_RST_POS                         (10U)
#define PDS_CR_PDS_FORCE_WB_PDS_RST_LEN                         (1U)
#define PDS_CR_PDS_FORCE_WB_PDS_RST_MSK                         (((1U<<PDS_CR_PDS_FORCE_WB_PDS_RST_LEN)-1)<<PDS_CR_PDS_FORCE_WB_PDS_RST_POS)
#define PDS_CR_PDS_FORCE_WB_PDS_RST_UMSK                        (~(((1U<<PDS_CR_PDS_FORCE_WB_PDS_RST_LEN)-1)<<PDS_CR_PDS_FORCE_WB_PDS_RST_POS))
#define PDS_CR_PDS_FORCE_NP_MEM_STBY                            PDS_CR_PDS_FORCE_NP_MEM_STBY
#define PDS_CR_PDS_FORCE_NP_MEM_STBY_POS                        (12U)
#define PDS_CR_PDS_FORCE_NP_MEM_STBY_LEN                        (1U)
#define PDS_CR_PDS_FORCE_NP_MEM_STBY_MSK                        (((1U<<PDS_CR_PDS_FORCE_NP_MEM_STBY_LEN)-1)<<PDS_CR_PDS_FORCE_NP_MEM_STBY_POS)
#define PDS_CR_PDS_FORCE_NP_MEM_STBY_UMSK                       (~(((1U<<PDS_CR_PDS_FORCE_NP_MEM_STBY_LEN)-1)<<PDS_CR_PDS_FORCE_NP_MEM_STBY_POS))
#define PDS_CR_PDS_FORCE_WB_MEM_STBY                            PDS_CR_PDS_FORCE_WB_MEM_STBY
#define PDS_CR_PDS_FORCE_WB_MEM_STBY_POS                        (14U)
#define PDS_CR_PDS_FORCE_WB_MEM_STBY_LEN                        (1U)
#define PDS_CR_PDS_FORCE_WB_MEM_STBY_MSK                        (((1U<<PDS_CR_PDS_FORCE_WB_MEM_STBY_LEN)-1)<<PDS_CR_PDS_FORCE_WB_MEM_STBY_POS)
#define PDS_CR_PDS_FORCE_WB_MEM_STBY_UMSK                       (~(((1U<<PDS_CR_PDS_FORCE_WB_MEM_STBY_LEN)-1)<<PDS_CR_PDS_FORCE_WB_MEM_STBY_POS))
#define PDS_CR_PDS_FORCE_NP_GATE_CLK                            PDS_CR_PDS_FORCE_NP_GATE_CLK
#define PDS_CR_PDS_FORCE_NP_GATE_CLK_POS                        (16U)
#define PDS_CR_PDS_FORCE_NP_GATE_CLK_LEN                        (1U)
#define PDS_CR_PDS_FORCE_NP_GATE_CLK_MSK                        (((1U<<PDS_CR_PDS_FORCE_NP_GATE_CLK_LEN)-1)<<PDS_CR_PDS_FORCE_NP_GATE_CLK_POS)
#define PDS_CR_PDS_FORCE_NP_GATE_CLK_UMSK                       (~(((1U<<PDS_CR_PDS_FORCE_NP_GATE_CLK_LEN)-1)<<PDS_CR_PDS_FORCE_NP_GATE_CLK_POS))
#define PDS_CR_PDS_FORCE_WB_GATE_CLK                            PDS_CR_PDS_FORCE_WB_GATE_CLK
#define PDS_CR_PDS_FORCE_WB_GATE_CLK_POS                        (18U)
#define PDS_CR_PDS_FORCE_WB_GATE_CLK_LEN                        (1U)
#define PDS_CR_PDS_FORCE_WB_GATE_CLK_MSK                        (((1U<<PDS_CR_PDS_FORCE_WB_GATE_CLK_LEN)-1)<<PDS_CR_PDS_FORCE_WB_GATE_CLK_POS)
#define PDS_CR_PDS_FORCE_WB_GATE_CLK_UMSK                       (~(((1U<<PDS_CR_PDS_FORCE_WB_GATE_CLK_LEN)-1)<<PDS_CR_PDS_FORCE_WB_GATE_CLK_POS))

/* 0x14 : PDS_CTL3 */
#define PDS_CTL3_OFFSET                                         (0x14)
#define PDS_CR_PDS_FORCE_MISC_PWR_OFF                           PDS_CR_PDS_FORCE_MISC_PWR_OFF
#define PDS_CR_PDS_FORCE_MISC_PWR_OFF_POS                       (1U)
#define PDS_CR_PDS_FORCE_MISC_PWR_OFF_LEN                       (1U)
#define PDS_CR_PDS_FORCE_MISC_PWR_OFF_MSK                       (((1U<<PDS_CR_PDS_FORCE_MISC_PWR_OFF_LEN)-1)<<PDS_CR_PDS_FORCE_MISC_PWR_OFF_POS)
#define PDS_CR_PDS_FORCE_MISC_PWR_OFF_UMSK                      (~(((1U<<PDS_CR_PDS_FORCE_MISC_PWR_OFF_LEN)-1)<<PDS_CR_PDS_FORCE_MISC_PWR_OFF_POS))
#define PDS_CR_PDS_FORCE_MISC_ISO_EN                            PDS_CR_PDS_FORCE_MISC_ISO_EN
#define PDS_CR_PDS_FORCE_MISC_ISO_EN_POS                        (4U)
#define PDS_CR_PDS_FORCE_MISC_ISO_EN_LEN                        (1U)
#define PDS_CR_PDS_FORCE_MISC_ISO_EN_MSK                        (((1U<<PDS_CR_PDS_FORCE_MISC_ISO_EN_LEN)-1)<<PDS_CR_PDS_FORCE_MISC_ISO_EN_POS)
#define PDS_CR_PDS_FORCE_MISC_ISO_EN_UMSK                       (~(((1U<<PDS_CR_PDS_FORCE_MISC_ISO_EN_LEN)-1)<<PDS_CR_PDS_FORCE_MISC_ISO_EN_POS))
#define PDS_CR_PDS_FORCE_MISC_PDS_RST                           PDS_CR_PDS_FORCE_MISC_PDS_RST
#define PDS_CR_PDS_FORCE_MISC_PDS_RST_POS                       (7U)
#define PDS_CR_PDS_FORCE_MISC_PDS_RST_LEN                       (1U)
#define PDS_CR_PDS_FORCE_MISC_PDS_RST_MSK                       (((1U<<PDS_CR_PDS_FORCE_MISC_PDS_RST_LEN)-1)<<PDS_CR_PDS_FORCE_MISC_PDS_RST_POS)
#define PDS_CR_PDS_FORCE_MISC_PDS_RST_UMSK                      (~(((1U<<PDS_CR_PDS_FORCE_MISC_PDS_RST_LEN)-1)<<PDS_CR_PDS_FORCE_MISC_PDS_RST_POS))
#define PDS_CR_PDS_FORCE_MISC_MEM_STBY                          PDS_CR_PDS_FORCE_MISC_MEM_STBY
#define PDS_CR_PDS_FORCE_MISC_MEM_STBY_POS                      (10U)
#define PDS_CR_PDS_FORCE_MISC_MEM_STBY_LEN                      (1U)
#define PDS_CR_PDS_FORCE_MISC_MEM_STBY_MSK                      (((1U<<PDS_CR_PDS_FORCE_MISC_MEM_STBY_LEN)-1)<<PDS_CR_PDS_FORCE_MISC_MEM_STBY_POS)
#define PDS_CR_PDS_FORCE_MISC_MEM_STBY_UMSK                     (~(((1U<<PDS_CR_PDS_FORCE_MISC_MEM_STBY_LEN)-1)<<PDS_CR_PDS_FORCE_MISC_MEM_STBY_POS))
#define PDS_CR_PDS_FORCE_MISC_GATE_CLK                          PDS_CR_PDS_FORCE_MISC_GATE_CLK
#define PDS_CR_PDS_FORCE_MISC_GATE_CLK_POS                      (13U)
#define PDS_CR_PDS_FORCE_MISC_GATE_CLK_LEN                      (1U)
#define PDS_CR_PDS_FORCE_MISC_GATE_CLK_MSK                      (((1U<<PDS_CR_PDS_FORCE_MISC_GATE_CLK_LEN)-1)<<PDS_CR_PDS_FORCE_MISC_GATE_CLK_POS)
#define PDS_CR_PDS_FORCE_MISC_GATE_CLK_UMSK                     (~(((1U<<PDS_CR_PDS_FORCE_MISC_GATE_CLK_LEN)-1)<<PDS_CR_PDS_FORCE_MISC_GATE_CLK_POS))
#define PDS_CR_PDS_NP_ISO_EN                                    PDS_CR_PDS_NP_ISO_EN
#define PDS_CR_PDS_NP_ISO_EN_POS                                (24U)
#define PDS_CR_PDS_NP_ISO_EN_LEN                                (1U)
#define PDS_CR_PDS_NP_ISO_EN_MSK                                (((1U<<PDS_CR_PDS_NP_ISO_EN_LEN)-1)<<PDS_CR_PDS_NP_ISO_EN_POS)
#define PDS_CR_PDS_NP_ISO_EN_UMSK                               (~(((1U<<PDS_CR_PDS_NP_ISO_EN_LEN)-1)<<PDS_CR_PDS_NP_ISO_EN_POS))
#define PDS_CR_PDS_WB_ISO_EN                                    PDS_CR_PDS_WB_ISO_EN
#define PDS_CR_PDS_WB_ISO_EN_POS                                (27U)
#define PDS_CR_PDS_WB_ISO_EN_LEN                                (1U)
#define PDS_CR_PDS_WB_ISO_EN_MSK                                (((1U<<PDS_CR_PDS_WB_ISO_EN_LEN)-1)<<PDS_CR_PDS_WB_ISO_EN_POS)
#define PDS_CR_PDS_WB_ISO_EN_UMSK                               (~(((1U<<PDS_CR_PDS_WB_ISO_EN_LEN)-1)<<PDS_CR_PDS_WB_ISO_EN_POS))
#define PDS_CR_PDS_MISC_ISO_EN                                  PDS_CR_PDS_MISC_ISO_EN
#define PDS_CR_PDS_MISC_ISO_EN_POS                              (30U)
#define PDS_CR_PDS_MISC_ISO_EN_LEN                              (1U)
#define PDS_CR_PDS_MISC_ISO_EN_MSK                              (((1U<<PDS_CR_PDS_MISC_ISO_EN_LEN)-1)<<PDS_CR_PDS_MISC_ISO_EN_POS)
#define PDS_CR_PDS_MISC_ISO_EN_UMSK                             (~(((1U<<PDS_CR_PDS_MISC_ISO_EN_LEN)-1)<<PDS_CR_PDS_MISC_ISO_EN_POS))

/* 0x18 : PDS_CTL4 */
#define PDS_CTL4_OFFSET                                         (0x18)
#define PDS_CR_PDS_NP_PWR_OFF                                   PDS_CR_PDS_NP_PWR_OFF
#define PDS_CR_PDS_NP_PWR_OFF_POS                               (0U)
#define PDS_CR_PDS_NP_PWR_OFF_LEN                               (1U)
#define PDS_CR_PDS_NP_PWR_OFF_MSK                               (((1U<<PDS_CR_PDS_NP_PWR_OFF_LEN)-1)<<PDS_CR_PDS_NP_PWR_OFF_POS)
#define PDS_CR_PDS_NP_PWR_OFF_UMSK                              (~(((1U<<PDS_CR_PDS_NP_PWR_OFF_LEN)-1)<<PDS_CR_PDS_NP_PWR_OFF_POS))
#define PDS_CR_PDS_NP_RESET                                     PDS_CR_PDS_NP_RESET
#define PDS_CR_PDS_NP_RESET_POS                                 (1U)
#define PDS_CR_PDS_NP_RESET_LEN                                 (1U)
#define PDS_CR_PDS_NP_RESET_MSK                                 (((1U<<PDS_CR_PDS_NP_RESET_LEN)-1)<<PDS_CR_PDS_NP_RESET_POS)
#define PDS_CR_PDS_NP_RESET_UMSK                                (~(((1U<<PDS_CR_PDS_NP_RESET_LEN)-1)<<PDS_CR_PDS_NP_RESET_POS))
#define PDS_CR_PDS_NP_MEM_STBY                                  PDS_CR_PDS_NP_MEM_STBY
#define PDS_CR_PDS_NP_MEM_STBY_POS                              (2U)
#define PDS_CR_PDS_NP_MEM_STBY_LEN                              (1U)
#define PDS_CR_PDS_NP_MEM_STBY_MSK                              (((1U<<PDS_CR_PDS_NP_MEM_STBY_LEN)-1)<<PDS_CR_PDS_NP_MEM_STBY_POS)
#define PDS_CR_PDS_NP_MEM_STBY_UMSK                             (~(((1U<<PDS_CR_PDS_NP_MEM_STBY_LEN)-1)<<PDS_CR_PDS_NP_MEM_STBY_POS))
#define PDS_CR_PDS_NP_GATE_CLK                                  PDS_CR_PDS_NP_GATE_CLK
#define PDS_CR_PDS_NP_GATE_CLK_POS                              (3U)
#define PDS_CR_PDS_NP_GATE_CLK_LEN                              (1U)
#define PDS_CR_PDS_NP_GATE_CLK_MSK                              (((1U<<PDS_CR_PDS_NP_GATE_CLK_LEN)-1)<<PDS_CR_PDS_NP_GATE_CLK_POS)
#define PDS_CR_PDS_NP_GATE_CLK_UMSK                             (~(((1U<<PDS_CR_PDS_NP_GATE_CLK_LEN)-1)<<PDS_CR_PDS_NP_GATE_CLK_POS))
#define PDS_CR_PDS_WB_PWR_OFF                                   PDS_CR_PDS_WB_PWR_OFF
#define PDS_CR_PDS_WB_PWR_OFF_POS                               (12U)
#define PDS_CR_PDS_WB_PWR_OFF_LEN                               (1U)
#define PDS_CR_PDS_WB_PWR_OFF_MSK                               (((1U<<PDS_CR_PDS_WB_PWR_OFF_LEN)-1)<<PDS_CR_PDS_WB_PWR_OFF_POS)
#define PDS_CR_PDS_WB_PWR_OFF_UMSK                              (~(((1U<<PDS_CR_PDS_WB_PWR_OFF_LEN)-1)<<PDS_CR_PDS_WB_PWR_OFF_POS))
#define PDS_CR_PDS_WB_RESET                                     PDS_CR_PDS_WB_RESET
#define PDS_CR_PDS_WB_RESET_POS                                 (13U)
#define PDS_CR_PDS_WB_RESET_LEN                                 (1U)
#define PDS_CR_PDS_WB_RESET_MSK                                 (((1U<<PDS_CR_PDS_WB_RESET_LEN)-1)<<PDS_CR_PDS_WB_RESET_POS)
#define PDS_CR_PDS_WB_RESET_UMSK                                (~(((1U<<PDS_CR_PDS_WB_RESET_LEN)-1)<<PDS_CR_PDS_WB_RESET_POS))
#define PDS_CR_PDS_WB_MEM_STBY                                  PDS_CR_PDS_WB_MEM_STBY
#define PDS_CR_PDS_WB_MEM_STBY_POS                              (14U)
#define PDS_CR_PDS_WB_MEM_STBY_LEN                              (1U)
#define PDS_CR_PDS_WB_MEM_STBY_MSK                              (((1U<<PDS_CR_PDS_WB_MEM_STBY_LEN)-1)<<PDS_CR_PDS_WB_MEM_STBY_POS)
#define PDS_CR_PDS_WB_MEM_STBY_UMSK                             (~(((1U<<PDS_CR_PDS_WB_MEM_STBY_LEN)-1)<<PDS_CR_PDS_WB_MEM_STBY_POS))
#define PDS_CR_PDS_WB_GATE_CLK                                  PDS_CR_PDS_WB_GATE_CLK
#define PDS_CR_PDS_WB_GATE_CLK_POS                              (15U)
#define PDS_CR_PDS_WB_GATE_CLK_LEN                              (1U)
#define PDS_CR_PDS_WB_GATE_CLK_MSK                              (((1U<<PDS_CR_PDS_WB_GATE_CLK_LEN)-1)<<PDS_CR_PDS_WB_GATE_CLK_POS)
#define PDS_CR_PDS_WB_GATE_CLK_UMSK                             (~(((1U<<PDS_CR_PDS_WB_GATE_CLK_LEN)-1)<<PDS_CR_PDS_WB_GATE_CLK_POS))
#define PDS_CR_PDS_MISC_PWR_OFF                                 PDS_CR_PDS_MISC_PWR_OFF
#define PDS_CR_PDS_MISC_PWR_OFF_POS                             (24U)
#define PDS_CR_PDS_MISC_PWR_OFF_LEN                             (1U)
#define PDS_CR_PDS_MISC_PWR_OFF_MSK                             (((1U<<PDS_CR_PDS_MISC_PWR_OFF_LEN)-1)<<PDS_CR_PDS_MISC_PWR_OFF_POS)
#define PDS_CR_PDS_MISC_PWR_OFF_UMSK                            (~(((1U<<PDS_CR_PDS_MISC_PWR_OFF_LEN)-1)<<PDS_CR_PDS_MISC_PWR_OFF_POS))
#define PDS_CR_PDS_MISC_RESET                                   PDS_CR_PDS_MISC_RESET
#define PDS_CR_PDS_MISC_RESET_POS                               (25U)
#define PDS_CR_PDS_MISC_RESET_LEN                               (1U)
#define PDS_CR_PDS_MISC_RESET_MSK                               (((1U<<PDS_CR_PDS_MISC_RESET_LEN)-1)<<PDS_CR_PDS_MISC_RESET_POS)
#define PDS_CR_PDS_MISC_RESET_UMSK                              (~(((1U<<PDS_CR_PDS_MISC_RESET_LEN)-1)<<PDS_CR_PDS_MISC_RESET_POS))
#define PDS_CR_PDS_MISC_MEM_STBY                                PDS_CR_PDS_MISC_MEM_STBY
#define PDS_CR_PDS_MISC_MEM_STBY_POS                            (26U)
#define PDS_CR_PDS_MISC_MEM_STBY_LEN                            (1U)
#define PDS_CR_PDS_MISC_MEM_STBY_MSK                            (((1U<<PDS_CR_PDS_MISC_MEM_STBY_LEN)-1)<<PDS_CR_PDS_MISC_MEM_STBY_POS)
#define PDS_CR_PDS_MISC_MEM_STBY_UMSK                           (~(((1U<<PDS_CR_PDS_MISC_MEM_STBY_LEN)-1)<<PDS_CR_PDS_MISC_MEM_STBY_POS))
#define PDS_CR_PDS_MISC_GATE_CLK                                PDS_CR_PDS_MISC_GATE_CLK
#define PDS_CR_PDS_MISC_GATE_CLK_POS                            (27U)
#define PDS_CR_PDS_MISC_GATE_CLK_LEN                            (1U)
#define PDS_CR_PDS_MISC_GATE_CLK_MSK                            (((1U<<PDS_CR_PDS_MISC_GATE_CLK_LEN)-1)<<PDS_CR_PDS_MISC_GATE_CLK_POS)
#define PDS_CR_PDS_MISC_GATE_CLK_UMSK                           (~(((1U<<PDS_CR_PDS_MISC_GATE_CLK_LEN)-1)<<PDS_CR_PDS_MISC_GATE_CLK_POS))

/* 0x1C : pds_stat */
#define PDS_STAT_OFFSET                                         (0x1C)
#define PDS_RO_PDS_STATE                                        PDS_RO_PDS_STATE
#define PDS_RO_PDS_STATE_POS                                    (0U)
#define PDS_RO_PDS_STATE_LEN                                    (4U)
#define PDS_RO_PDS_STATE_MSK                                    (((1U<<PDS_RO_PDS_STATE_LEN)-1)<<PDS_RO_PDS_STATE_POS)
#define PDS_RO_PDS_STATE_UMSK                                   (~(((1U<<PDS_RO_PDS_STATE_LEN)-1)<<PDS_RO_PDS_STATE_POS))
#define PDS_RO_PDS_RF_STATE                                     PDS_RO_PDS_RF_STATE
#define PDS_RO_PDS_RF_STATE_POS                                 (8U)
#define PDS_RO_PDS_RF_STATE_LEN                                 (4U)
#define PDS_RO_PDS_RF_STATE_MSK                                 (((1U<<PDS_RO_PDS_RF_STATE_LEN)-1)<<PDS_RO_PDS_RF_STATE_POS)
#define PDS_RO_PDS_RF_STATE_UMSK                                (~(((1U<<PDS_RO_PDS_RF_STATE_LEN)-1)<<PDS_RO_PDS_RF_STATE_POS))
#define PDS_RO_PDS_PLL_STATE                                    PDS_RO_PDS_PLL_STATE
#define PDS_RO_PDS_PLL_STATE_POS                                (16U)
#define PDS_RO_PDS_PLL_STATE_LEN                                (2U)
#define PDS_RO_PDS_PLL_STATE_MSK                                (((1U<<PDS_RO_PDS_PLL_STATE_LEN)-1)<<PDS_RO_PDS_PLL_STATE_POS)
#define PDS_RO_PDS_PLL_STATE_UMSK                               (~(((1U<<PDS_RO_PDS_PLL_STATE_LEN)-1)<<PDS_RO_PDS_PLL_STATE_POS))

/* 0x20 : pds_ram1 */
#define PDS_RAM1_OFFSET                                         (0x20)
#define PDS_CR_NP_SRAM_PWR                                      PDS_CR_NP_SRAM_PWR
#define PDS_CR_NP_SRAM_PWR_POS                                  (0U)
#define PDS_CR_NP_SRAM_PWR_LEN                                  (8U)
#define PDS_CR_NP_SRAM_PWR_MSK                                  (((1U<<PDS_CR_NP_SRAM_PWR_LEN)-1)<<PDS_CR_NP_SRAM_PWR_POS)
#define PDS_CR_NP_SRAM_PWR_UMSK                                 (~(((1U<<PDS_CR_NP_SRAM_PWR_LEN)-1)<<PDS_CR_NP_SRAM_PWR_POS))

/* 0x300 : rc32m_ctrl0 */
#define PDS_RC32M_CTRL0_OFFSET                                  (0x300)
#define PDS_RC32M_CAL_DONE                                      PDS_RC32M_CAL_DONE
#define PDS_RC32M_CAL_DONE_POS                                  (0U)
#define PDS_RC32M_CAL_DONE_LEN                                  (1U)
#define PDS_RC32M_CAL_DONE_MSK                                  (((1U<<PDS_RC32M_CAL_DONE_LEN)-1)<<PDS_RC32M_CAL_DONE_POS)
#define PDS_RC32M_CAL_DONE_UMSK                                 (~(((1U<<PDS_RC32M_CAL_DONE_LEN)-1)<<PDS_RC32M_CAL_DONE_POS))
#define PDS_RC32M_RDY                                           PDS_RC32M_RDY
#define PDS_RC32M_RDY_POS                                       (1U)
#define PDS_RC32M_RDY_LEN                                       (1U)
#define PDS_RC32M_RDY_MSK                                       (((1U<<PDS_RC32M_RDY_LEN)-1)<<PDS_RC32M_RDY_POS)
#define PDS_RC32M_RDY_UMSK                                      (~(((1U<<PDS_RC32M_RDY_LEN)-1)<<PDS_RC32M_RDY_POS))
#define PDS_RC32M_CAL_INPROGRESS                                PDS_RC32M_CAL_INPROGRESS
#define PDS_RC32M_CAL_INPROGRESS_POS                            (2U)
#define PDS_RC32M_CAL_INPROGRESS_LEN                            (1U)
#define PDS_RC32M_CAL_INPROGRESS_MSK                            (((1U<<PDS_RC32M_CAL_INPROGRESS_LEN)-1)<<PDS_RC32M_CAL_INPROGRESS_POS)
#define PDS_RC32M_CAL_INPROGRESS_UMSK                           (~(((1U<<PDS_RC32M_CAL_INPROGRESS_LEN)-1)<<PDS_RC32M_CAL_INPROGRESS_POS))
#define PDS_RC32M_CAL_DIV                                       PDS_RC32M_CAL_DIV
#define PDS_RC32M_CAL_DIV_POS                                   (3U)
#define PDS_RC32M_CAL_DIV_LEN                                   (2U)
#define PDS_RC32M_CAL_DIV_MSK                                   (((1U<<PDS_RC32M_CAL_DIV_LEN)-1)<<PDS_RC32M_CAL_DIV_POS)
#define PDS_RC32M_CAL_DIV_UMSK                                  (~(((1U<<PDS_RC32M_CAL_DIV_LEN)-1)<<PDS_RC32M_CAL_DIV_POS))
#define PDS_RC32M_CAL_PRECHARGE                                 PDS_RC32M_CAL_PRECHARGE
#define PDS_RC32M_CAL_PRECHARGE_POS                             (5U)
#define PDS_RC32M_CAL_PRECHARGE_LEN                             (1U)
#define PDS_RC32M_CAL_PRECHARGE_MSK                             (((1U<<PDS_RC32M_CAL_PRECHARGE_LEN)-1)<<PDS_RC32M_CAL_PRECHARGE_POS)
#define PDS_RC32M_CAL_PRECHARGE_UMSK                            (~(((1U<<PDS_RC32M_CAL_PRECHARGE_LEN)-1)<<PDS_RC32M_CAL_PRECHARGE_POS))
#define PDS_RC32M_DIG_CODE_FR_CAL                               PDS_RC32M_DIG_CODE_FR_CAL
#define PDS_RC32M_DIG_CODE_FR_CAL_POS                           (6U)
#define PDS_RC32M_DIG_CODE_FR_CAL_LEN                           (8U)
#define PDS_RC32M_DIG_CODE_FR_CAL_MSK                           (((1U<<PDS_RC32M_DIG_CODE_FR_CAL_LEN)-1)<<PDS_RC32M_DIG_CODE_FR_CAL_POS)
#define PDS_RC32M_DIG_CODE_FR_CAL_UMSK                          (~(((1U<<PDS_RC32M_DIG_CODE_FR_CAL_LEN)-1)<<PDS_RC32M_DIG_CODE_FR_CAL_POS))
#define PDS_RC32M_ALLOW_CAL                                     PDS_RC32M_ALLOW_CAL
#define PDS_RC32M_ALLOW_CAL_POS                                 (17U)
#define PDS_RC32M_ALLOW_CAL_LEN                                 (1U)
#define PDS_RC32M_ALLOW_CAL_MSK                                 (((1U<<PDS_RC32M_ALLOW_CAL_LEN)-1)<<PDS_RC32M_ALLOW_CAL_POS)
#define PDS_RC32M_ALLOW_CAL_UMSK                                (~(((1U<<PDS_RC32M_ALLOW_CAL_LEN)-1)<<PDS_RC32M_ALLOW_CAL_POS))
#define PDS_RC32M_REFCLK_HALF                                   PDS_RC32M_REFCLK_HALF
#define PDS_RC32M_REFCLK_HALF_POS                               (18U)
#define PDS_RC32M_REFCLK_HALF_LEN                               (1U)
#define PDS_RC32M_REFCLK_HALF_MSK                               (((1U<<PDS_RC32M_REFCLK_HALF_LEN)-1)<<PDS_RC32M_REFCLK_HALF_POS)
#define PDS_RC32M_REFCLK_HALF_UMSK                              (~(((1U<<PDS_RC32M_REFCLK_HALF_LEN)-1)<<PDS_RC32M_REFCLK_HALF_POS))
#define PDS_RC32M_EXT_CODE_EN                                   PDS_RC32M_EXT_CODE_EN
#define PDS_RC32M_EXT_CODE_EN_POS                               (19U)
#define PDS_RC32M_EXT_CODE_EN_LEN                               (1U)
#define PDS_RC32M_EXT_CODE_EN_MSK                               (((1U<<PDS_RC32M_EXT_CODE_EN_LEN)-1)<<PDS_RC32M_EXT_CODE_EN_POS)
#define PDS_RC32M_EXT_CODE_EN_UMSK                              (~(((1U<<PDS_RC32M_EXT_CODE_EN_LEN)-1)<<PDS_RC32M_EXT_CODE_EN_POS))
#define PDS_RC32M_CAL_EN                                        PDS_RC32M_CAL_EN
#define PDS_RC32M_CAL_EN_POS                                    (20U)
#define PDS_RC32M_CAL_EN_LEN                                    (1U)
#define PDS_RC32M_CAL_EN_MSK                                    (((1U<<PDS_RC32M_CAL_EN_LEN)-1)<<PDS_RC32M_CAL_EN_POS)
#define PDS_RC32M_CAL_EN_UMSK                                   (~(((1U<<PDS_RC32M_CAL_EN_LEN)-1)<<PDS_RC32M_CAL_EN_POS))
#define PDS_RC32M_PD                                            PDS_RC32M_PD
#define PDS_RC32M_PD_POS                                        (21U)
#define PDS_RC32M_PD_LEN                                        (1U)
#define PDS_RC32M_PD_MSK                                        (((1U<<PDS_RC32M_PD_LEN)-1)<<PDS_RC32M_PD_POS)
#define PDS_RC32M_PD_UMSK                                       (~(((1U<<PDS_RC32M_PD_LEN)-1)<<PDS_RC32M_PD_POS))
#define PDS_RC32M_CODE_FR_EXT                                   PDS_RC32M_CODE_FR_EXT
#define PDS_RC32M_CODE_FR_EXT_POS                               (22U)
#define PDS_RC32M_CODE_FR_EXT_LEN                               (8U)
#define PDS_RC32M_CODE_FR_EXT_MSK                               (((1U<<PDS_RC32M_CODE_FR_EXT_LEN)-1)<<PDS_RC32M_CODE_FR_EXT_POS)
#define PDS_RC32M_CODE_FR_EXT_UMSK                              (~(((1U<<PDS_RC32M_CODE_FR_EXT_LEN)-1)<<PDS_RC32M_CODE_FR_EXT_POS))

/* 0x304 : rc32m_ctrl1 */
#define PDS_RC32M_CTRL1_OFFSET                                  (0x304)
#define PDS_RC32M_TEST_EN                                       PDS_RC32M_TEST_EN
#define PDS_RC32M_TEST_EN_POS                                   (0U)
#define PDS_RC32M_TEST_EN_LEN                                   (1U)
#define PDS_RC32M_TEST_EN_MSK                                   (((1U<<PDS_RC32M_TEST_EN_LEN)-1)<<PDS_RC32M_TEST_EN_POS)
#define PDS_RC32M_TEST_EN_UMSK                                  (~(((1U<<PDS_RC32M_TEST_EN_LEN)-1)<<PDS_RC32M_TEST_EN_POS))
#define PDS_RC32M_SOFT_RST                                      PDS_RC32M_SOFT_RST
#define PDS_RC32M_SOFT_RST_POS                                  (1U)
#define PDS_RC32M_SOFT_RST_LEN                                  (1U)
#define PDS_RC32M_SOFT_RST_MSK                                  (((1U<<PDS_RC32M_SOFT_RST_LEN)-1)<<PDS_RC32M_SOFT_RST_POS)
#define PDS_RC32M_SOFT_RST_UMSK                                 (~(((1U<<PDS_RC32M_SOFT_RST_LEN)-1)<<PDS_RC32M_SOFT_RST_POS))
#define PDS_RC32M_CLK_SOFT_RST                                  PDS_RC32M_CLK_SOFT_RST
#define PDS_RC32M_CLK_SOFT_RST_POS                              (2U)
#define PDS_RC32M_CLK_SOFT_RST_LEN                              (1U)
#define PDS_RC32M_CLK_SOFT_RST_MSK                              (((1U<<PDS_RC32M_CLK_SOFT_RST_LEN)-1)<<PDS_RC32M_CLK_SOFT_RST_POS)
#define PDS_RC32M_CLK_SOFT_RST_UMSK                             (~(((1U<<PDS_RC32M_CLK_SOFT_RST_LEN)-1)<<PDS_RC32M_CLK_SOFT_RST_POS))
#define PDS_RC32M_CLK_INV                                       PDS_RC32M_CLK_INV
#define PDS_RC32M_CLK_INV_POS                                   (3U)
#define PDS_RC32M_CLK_INV_LEN                                   (1U)
#define PDS_RC32M_CLK_INV_MSK                                   (((1U<<PDS_RC32M_CLK_INV_LEN)-1)<<PDS_RC32M_CLK_INV_POS)
#define PDS_RC32M_CLK_INV_UMSK                                  (~(((1U<<PDS_RC32M_CLK_INV_LEN)-1)<<PDS_RC32M_CLK_INV_POS))
#define PDS_RC32M_CLK_FORCE_ON                                  PDS_RC32M_CLK_FORCE_ON
#define PDS_RC32M_CLK_FORCE_ON_POS                              (4U)
#define PDS_RC32M_CLK_FORCE_ON_LEN                              (1U)
#define PDS_RC32M_CLK_FORCE_ON_MSK                              (((1U<<PDS_RC32M_CLK_FORCE_ON_LEN)-1)<<PDS_RC32M_CLK_FORCE_ON_POS)
#define PDS_RC32M_CLK_FORCE_ON_UMSK                             (~(((1U<<PDS_RC32M_CLK_FORCE_ON_LEN)-1)<<PDS_RC32M_CLK_FORCE_ON_POS))
#define PDS_RC32M_RESERVED                                      PDS_RC32M_RESERVED
#define PDS_RC32M_RESERVED_POS                                  (24U)
#define PDS_RC32M_RESERVED_LEN                                  (8U)
#define PDS_RC32M_RESERVED_MSK                                  (((1U<<PDS_RC32M_RESERVED_LEN)-1)<<PDS_RC32M_RESERVED_POS)
#define PDS_RC32M_RESERVED_UMSK                                 (~(((1U<<PDS_RC32M_RESERVED_LEN)-1)<<PDS_RC32M_RESERVED_POS))

/* 0x400 : pu_rst_clkpll */
#define PDS_PU_RST_CLKPLL_OFFSET                                (0x400)
#define PDS_CLKPLL_SDM_RESET                                    PDS_CLKPLL_SDM_RESET
#define PDS_CLKPLL_SDM_RESET_POS                                (0U)
#define PDS_CLKPLL_SDM_RESET_LEN                                (1U)
#define PDS_CLKPLL_SDM_RESET_MSK                                (((1U<<PDS_CLKPLL_SDM_RESET_LEN)-1)<<PDS_CLKPLL_SDM_RESET_POS)
#define PDS_CLKPLL_SDM_RESET_UMSK                               (~(((1U<<PDS_CLKPLL_SDM_RESET_LEN)-1)<<PDS_CLKPLL_SDM_RESET_POS))
#define PDS_CLKPLL_RESET_POSTDIV                                PDS_CLKPLL_RESET_POSTDIV
#define PDS_CLKPLL_RESET_POSTDIV_POS                            (1U)
#define PDS_CLKPLL_RESET_POSTDIV_LEN                            (1U)
#define PDS_CLKPLL_RESET_POSTDIV_MSK                            (((1U<<PDS_CLKPLL_RESET_POSTDIV_LEN)-1)<<PDS_CLKPLL_RESET_POSTDIV_POS)
#define PDS_CLKPLL_RESET_POSTDIV_UMSK                           (~(((1U<<PDS_CLKPLL_RESET_POSTDIV_LEN)-1)<<PDS_CLKPLL_RESET_POSTDIV_POS))
#define PDS_CLKPLL_RESET_FBDV                                   PDS_CLKPLL_RESET_FBDV
#define PDS_CLKPLL_RESET_FBDV_POS                               (2U)
#define PDS_CLKPLL_RESET_FBDV_LEN                               (1U)
#define PDS_CLKPLL_RESET_FBDV_MSK                               (((1U<<PDS_CLKPLL_RESET_FBDV_LEN)-1)<<PDS_CLKPLL_RESET_FBDV_POS)
#define PDS_CLKPLL_RESET_FBDV_UMSK                              (~(((1U<<PDS_CLKPLL_RESET_FBDV_LEN)-1)<<PDS_CLKPLL_RESET_FBDV_POS))
#define PDS_CLKPLL_RESET_REFDIV                                 PDS_CLKPLL_RESET_REFDIV
#define PDS_CLKPLL_RESET_REFDIV_POS                             (3U)
#define PDS_CLKPLL_RESET_REFDIV_LEN                             (1U)
#define PDS_CLKPLL_RESET_REFDIV_MSK                             (((1U<<PDS_CLKPLL_RESET_REFDIV_LEN)-1)<<PDS_CLKPLL_RESET_REFDIV_POS)
#define PDS_CLKPLL_RESET_REFDIV_UMSK                            (~(((1U<<PDS_CLKPLL_RESET_REFDIV_LEN)-1)<<PDS_CLKPLL_RESET_REFDIV_POS))
#define PDS_CLKPLL_PU_POSTDIV                                   PDS_CLKPLL_PU_POSTDIV
#define PDS_CLKPLL_PU_POSTDIV_POS                               (4U)
#define PDS_CLKPLL_PU_POSTDIV_LEN                               (1U)
#define PDS_CLKPLL_PU_POSTDIV_MSK                               (((1U<<PDS_CLKPLL_PU_POSTDIV_LEN)-1)<<PDS_CLKPLL_PU_POSTDIV_POS)
#define PDS_CLKPLL_PU_POSTDIV_UMSK                              (~(((1U<<PDS_CLKPLL_PU_POSTDIV_LEN)-1)<<PDS_CLKPLL_PU_POSTDIV_POS))
#define PDS_CLKPLL_PU_FBDV                                      PDS_CLKPLL_PU_FBDV
#define PDS_CLKPLL_PU_FBDV_POS                                  (5U)
#define PDS_CLKPLL_PU_FBDV_LEN                                  (1U)
#define PDS_CLKPLL_PU_FBDV_MSK                                  (((1U<<PDS_CLKPLL_PU_FBDV_LEN)-1)<<PDS_CLKPLL_PU_FBDV_POS)
#define PDS_CLKPLL_PU_FBDV_UMSK                                 (~(((1U<<PDS_CLKPLL_PU_FBDV_LEN)-1)<<PDS_CLKPLL_PU_FBDV_POS))
#define PDS_CLKPLL_PU_CLAMP_OP                                  PDS_CLKPLL_PU_CLAMP_OP
#define PDS_CLKPLL_PU_CLAMP_OP_POS                              (6U)
#define PDS_CLKPLL_PU_CLAMP_OP_LEN                              (1U)
#define PDS_CLKPLL_PU_CLAMP_OP_MSK                              (((1U<<PDS_CLKPLL_PU_CLAMP_OP_LEN)-1)<<PDS_CLKPLL_PU_CLAMP_OP_POS)
#define PDS_CLKPLL_PU_CLAMP_OP_UMSK                             (~(((1U<<PDS_CLKPLL_PU_CLAMP_OP_LEN)-1)<<PDS_CLKPLL_PU_CLAMP_OP_POS))
#define PDS_CLKPLL_PU_PFD                                       PDS_CLKPLL_PU_PFD
#define PDS_CLKPLL_PU_PFD_POS                                   (7U)
#define PDS_CLKPLL_PU_PFD_LEN                                   (1U)
#define PDS_CLKPLL_PU_PFD_MSK                                   (((1U<<PDS_CLKPLL_PU_PFD_LEN)-1)<<PDS_CLKPLL_PU_PFD_POS)
#define PDS_CLKPLL_PU_PFD_UMSK                                  (~(((1U<<PDS_CLKPLL_PU_PFD_LEN)-1)<<PDS_CLKPLL_PU_PFD_POS))
#define PDS_CLKPLL_PU_CP                                        PDS_CLKPLL_PU_CP
#define PDS_CLKPLL_PU_CP_POS                                    (8U)
#define PDS_CLKPLL_PU_CP_LEN                                    (1U)
#define PDS_CLKPLL_PU_CP_MSK                                    (((1U<<PDS_CLKPLL_PU_CP_LEN)-1)<<PDS_CLKPLL_PU_CP_POS)
#define PDS_CLKPLL_PU_CP_UMSK                                   (~(((1U<<PDS_CLKPLL_PU_CP_LEN)-1)<<PDS_CLKPLL_PU_CP_POS))
#define PDS_PU_CLKPLL_SFREG                                     PDS_PU_CLKPLL_SFREG
#define PDS_PU_CLKPLL_SFREG_POS                                 (9U)
#define PDS_PU_CLKPLL_SFREG_LEN                                 (1U)
#define PDS_PU_CLKPLL_SFREG_MSK                                 (((1U<<PDS_PU_CLKPLL_SFREG_LEN)-1)<<PDS_PU_CLKPLL_SFREG_POS)
#define PDS_PU_CLKPLL_SFREG_UMSK                                (~(((1U<<PDS_PU_CLKPLL_SFREG_LEN)-1)<<PDS_PU_CLKPLL_SFREG_POS))
#define PDS_PU_CLKPLL                                           PDS_PU_CLKPLL
#define PDS_PU_CLKPLL_POS                                       (10U)
#define PDS_PU_CLKPLL_LEN                                       (1U)
#define PDS_PU_CLKPLL_MSK                                       (((1U<<PDS_PU_CLKPLL_LEN)-1)<<PDS_PU_CLKPLL_POS)
#define PDS_PU_CLKPLL_UMSK                                      (~(((1U<<PDS_PU_CLKPLL_LEN)-1)<<PDS_PU_CLKPLL_POS))

/* 0x404 : clkpll_top_ctrl */
#define PDS_CLKPLL_TOP_CTRL_OFFSET                              (0x404)
#define PDS_CLKPLL_POSTDIV                                      PDS_CLKPLL_POSTDIV
#define PDS_CLKPLL_POSTDIV_POS                                  (0U)
#define PDS_CLKPLL_POSTDIV_LEN                                  (7U)
#define PDS_CLKPLL_POSTDIV_MSK                                  (((1U<<PDS_CLKPLL_POSTDIV_LEN)-1)<<PDS_CLKPLL_POSTDIV_POS)
#define PDS_CLKPLL_POSTDIV_UMSK                                 (~(((1U<<PDS_CLKPLL_POSTDIV_LEN)-1)<<PDS_CLKPLL_POSTDIV_POS))
#define PDS_CLKPLL_REFDIV_RATIO                                 PDS_CLKPLL_REFDIV_RATIO
#define PDS_CLKPLL_REFDIV_RATIO_POS                             (8U)
#define PDS_CLKPLL_REFDIV_RATIO_LEN                             (4U)
#define PDS_CLKPLL_REFDIV_RATIO_MSK                             (((1U<<PDS_CLKPLL_REFDIV_RATIO_LEN)-1)<<PDS_CLKPLL_REFDIV_RATIO_POS)
#define PDS_CLKPLL_REFDIV_RATIO_UMSK                            (~(((1U<<PDS_CLKPLL_REFDIV_RATIO_LEN)-1)<<PDS_CLKPLL_REFDIV_RATIO_POS))
#define PDS_CLKPLL_XTAL_RC32M_SEL                               PDS_CLKPLL_XTAL_RC32M_SEL
#define PDS_CLKPLL_XTAL_RC32M_SEL_POS                           (12U)
#define PDS_CLKPLL_XTAL_RC32M_SEL_LEN                           (1U)
#define PDS_CLKPLL_XTAL_RC32M_SEL_MSK                           (((1U<<PDS_CLKPLL_XTAL_RC32M_SEL_LEN)-1)<<PDS_CLKPLL_XTAL_RC32M_SEL_POS)
#define PDS_CLKPLL_XTAL_RC32M_SEL_UMSK                          (~(((1U<<PDS_CLKPLL_XTAL_RC32M_SEL_LEN)-1)<<PDS_CLKPLL_XTAL_RC32M_SEL_POS))
#define PDS_CLKPLL_REFCLK_SEL                                   PDS_CLKPLL_REFCLK_SEL
#define PDS_CLKPLL_REFCLK_SEL_POS                               (16U)
#define PDS_CLKPLL_REFCLK_SEL_LEN                               (1U)
#define PDS_CLKPLL_REFCLK_SEL_MSK                               (((1U<<PDS_CLKPLL_REFCLK_SEL_LEN)-1)<<PDS_CLKPLL_REFCLK_SEL_POS)
#define PDS_CLKPLL_REFCLK_SEL_UMSK                              (~(((1U<<PDS_CLKPLL_REFCLK_SEL_LEN)-1)<<PDS_CLKPLL_REFCLK_SEL_POS))
#define PDS_CLKPLL_VG11_SEL                                     PDS_CLKPLL_VG11_SEL
#define PDS_CLKPLL_VG11_SEL_POS                                 (20U)
#define PDS_CLKPLL_VG11_SEL_LEN                                 (2U)
#define PDS_CLKPLL_VG11_SEL_MSK                                 (((1U<<PDS_CLKPLL_VG11_SEL_LEN)-1)<<PDS_CLKPLL_VG11_SEL_POS)
#define PDS_CLKPLL_VG11_SEL_UMSK                                (~(((1U<<PDS_CLKPLL_VG11_SEL_LEN)-1)<<PDS_CLKPLL_VG11_SEL_POS))
#define PDS_CLKPLL_VG13_SEL                                     PDS_CLKPLL_VG13_SEL
#define PDS_CLKPLL_VG13_SEL_POS                                 (24U)
#define PDS_CLKPLL_VG13_SEL_LEN                                 (2U)
#define PDS_CLKPLL_VG13_SEL_MSK                                 (((1U<<PDS_CLKPLL_VG13_SEL_LEN)-1)<<PDS_CLKPLL_VG13_SEL_POS)
#define PDS_CLKPLL_VG13_SEL_UMSK                                (~(((1U<<PDS_CLKPLL_VG13_SEL_LEN)-1)<<PDS_CLKPLL_VG13_SEL_POS))

/* 0x408 : clkpll_cp */
#define PDS_CLKPLL_CP_OFFSET                                    (0x408)
#define PDS_CLKPLL_SEL_CP_BIAS                                  PDS_CLKPLL_SEL_CP_BIAS
#define PDS_CLKPLL_SEL_CP_BIAS_POS                              (0U)
#define PDS_CLKPLL_SEL_CP_BIAS_LEN                              (1U)
#define PDS_CLKPLL_SEL_CP_BIAS_MSK                              (((1U<<PDS_CLKPLL_SEL_CP_BIAS_LEN)-1)<<PDS_CLKPLL_SEL_CP_BIAS_POS)
#define PDS_CLKPLL_SEL_CP_BIAS_UMSK                             (~(((1U<<PDS_CLKPLL_SEL_CP_BIAS_LEN)-1)<<PDS_CLKPLL_SEL_CP_BIAS_POS))
#define PDS_CLKPLL_ICP_5U                                       PDS_CLKPLL_ICP_5U
#define PDS_CLKPLL_ICP_5U_POS                                   (4U)
#define PDS_CLKPLL_ICP_5U_LEN                                   (2U)
#define PDS_CLKPLL_ICP_5U_MSK                                   (((1U<<PDS_CLKPLL_ICP_5U_LEN)-1)<<PDS_CLKPLL_ICP_5U_POS)
#define PDS_CLKPLL_ICP_5U_UMSK                                  (~(((1U<<PDS_CLKPLL_ICP_5U_LEN)-1)<<PDS_CLKPLL_ICP_5U_POS))
#define PDS_CLKPLL_ICP_1U                                       PDS_CLKPLL_ICP_1U
#define PDS_CLKPLL_ICP_1U_POS                                   (6U)
#define PDS_CLKPLL_ICP_1U_LEN                                   (2U)
#define PDS_CLKPLL_ICP_1U_MSK                                   (((1U<<PDS_CLKPLL_ICP_1U_LEN)-1)<<PDS_CLKPLL_ICP_1U_POS)
#define PDS_CLKPLL_ICP_1U_UMSK                                  (~(((1U<<PDS_CLKPLL_ICP_1U_LEN)-1)<<PDS_CLKPLL_ICP_1U_POS))
#define PDS_CLKPLL_INT_FRAC_SW                                  PDS_CLKPLL_INT_FRAC_SW
#define PDS_CLKPLL_INT_FRAC_SW_POS                              (8U)
#define PDS_CLKPLL_INT_FRAC_SW_LEN                              (1U)
#define PDS_CLKPLL_INT_FRAC_SW_MSK                              (((1U<<PDS_CLKPLL_INT_FRAC_SW_LEN)-1)<<PDS_CLKPLL_INT_FRAC_SW_POS)
#define PDS_CLKPLL_INT_FRAC_SW_UMSK                             (~(((1U<<PDS_CLKPLL_INT_FRAC_SW_LEN)-1)<<PDS_CLKPLL_INT_FRAC_SW_POS))
#define PDS_CLKPLL_CP_STARTUP_EN                                PDS_CLKPLL_CP_STARTUP_EN
#define PDS_CLKPLL_CP_STARTUP_EN_POS                            (9U)
#define PDS_CLKPLL_CP_STARTUP_EN_LEN                            (1U)
#define PDS_CLKPLL_CP_STARTUP_EN_MSK                            (((1U<<PDS_CLKPLL_CP_STARTUP_EN_LEN)-1)<<PDS_CLKPLL_CP_STARTUP_EN_POS)
#define PDS_CLKPLL_CP_STARTUP_EN_UMSK                           (~(((1U<<PDS_CLKPLL_CP_STARTUP_EN_LEN)-1)<<PDS_CLKPLL_CP_STARTUP_EN_POS))
#define PDS_CLKPLL_CP_OPAMP_EN                                  PDS_CLKPLL_CP_OPAMP_EN
#define PDS_CLKPLL_CP_OPAMP_EN_POS                              (10U)
#define PDS_CLKPLL_CP_OPAMP_EN_LEN                              (1U)
#define PDS_CLKPLL_CP_OPAMP_EN_MSK                              (((1U<<PDS_CLKPLL_CP_OPAMP_EN_LEN)-1)<<PDS_CLKPLL_CP_OPAMP_EN_POS)
#define PDS_CLKPLL_CP_OPAMP_EN_UMSK                             (~(((1U<<PDS_CLKPLL_CP_OPAMP_EN_LEN)-1)<<PDS_CLKPLL_CP_OPAMP_EN_POS))

/* 0x40C : clkpll_rz */
#define PDS_CLKPLL_RZ_OFFSET                                    (0x40C)
#define PDS_CLKPLL_C4_EN                                        PDS_CLKPLL_C4_EN
#define PDS_CLKPLL_C4_EN_POS                                    (0U)
#define PDS_CLKPLL_C4_EN_LEN                                    (1U)
#define PDS_CLKPLL_C4_EN_MSK                                    (((1U<<PDS_CLKPLL_C4_EN_LEN)-1)<<PDS_CLKPLL_C4_EN_POS)
#define PDS_CLKPLL_C4_EN_UMSK                                   (~(((1U<<PDS_CLKPLL_C4_EN_LEN)-1)<<PDS_CLKPLL_C4_EN_POS))
#define PDS_CLKPLL_R4                                           PDS_CLKPLL_R4
#define PDS_CLKPLL_R4_POS                                       (4U)
#define PDS_CLKPLL_R4_LEN                                       (2U)
#define PDS_CLKPLL_R4_MSK                                       (((1U<<PDS_CLKPLL_R4_LEN)-1)<<PDS_CLKPLL_R4_POS)
#define PDS_CLKPLL_R4_UMSK                                      (~(((1U<<PDS_CLKPLL_R4_LEN)-1)<<PDS_CLKPLL_R4_POS))
#define PDS_CLKPLL_R4_SHORT                                     PDS_CLKPLL_R4_SHORT
#define PDS_CLKPLL_R4_SHORT_POS                                 (8U)
#define PDS_CLKPLL_R4_SHORT_LEN                                 (1U)
#define PDS_CLKPLL_R4_SHORT_MSK                                 (((1U<<PDS_CLKPLL_R4_SHORT_LEN)-1)<<PDS_CLKPLL_R4_SHORT_POS)
#define PDS_CLKPLL_R4_SHORT_UMSK                                (~(((1U<<PDS_CLKPLL_R4_SHORT_LEN)-1)<<PDS_CLKPLL_R4_SHORT_POS))
#define PDS_CLKPLL_C3                                           PDS_CLKPLL_C3
#define PDS_CLKPLL_C3_POS                                       (12U)
#define PDS_CLKPLL_C3_LEN                                       (2U)
#define PDS_CLKPLL_C3_MSK                                       (((1U<<PDS_CLKPLL_C3_LEN)-1)<<PDS_CLKPLL_C3_POS)
#define PDS_CLKPLL_C3_UMSK                                      (~(((1U<<PDS_CLKPLL_C3_LEN)-1)<<PDS_CLKPLL_C3_POS))
#define PDS_CLKPLL_CZ                                           PDS_CLKPLL_CZ
#define PDS_CLKPLL_CZ_POS                                       (14U)
#define PDS_CLKPLL_CZ_LEN                                       (2U)
#define PDS_CLKPLL_CZ_MSK                                       (((1U<<PDS_CLKPLL_CZ_LEN)-1)<<PDS_CLKPLL_CZ_POS)
#define PDS_CLKPLL_CZ_UMSK                                      (~(((1U<<PDS_CLKPLL_CZ_LEN)-1)<<PDS_CLKPLL_CZ_POS))
#define PDS_CLKPLL_RZ                                           PDS_CLKPLL_RZ
#define PDS_CLKPLL_RZ_POS                                       (16U)
#define PDS_CLKPLL_RZ_LEN                                       (3U)
#define PDS_CLKPLL_RZ_MSK                                       (((1U<<PDS_CLKPLL_RZ_LEN)-1)<<PDS_CLKPLL_RZ_POS)
#define PDS_CLKPLL_RZ_UMSK                                      (~(((1U<<PDS_CLKPLL_RZ_LEN)-1)<<PDS_CLKPLL_RZ_POS))

/* 0x410 : clkpll_fbdv */
#define PDS_CLKPLL_FBDV_OFFSET                                  (0x410)
#define PDS_CLKPLL_SEL_SAMPLE_CLK                               PDS_CLKPLL_SEL_SAMPLE_CLK
#define PDS_CLKPLL_SEL_SAMPLE_CLK_POS                           (0U)
#define PDS_CLKPLL_SEL_SAMPLE_CLK_LEN                           (2U)
#define PDS_CLKPLL_SEL_SAMPLE_CLK_MSK                           (((1U<<PDS_CLKPLL_SEL_SAMPLE_CLK_LEN)-1)<<PDS_CLKPLL_SEL_SAMPLE_CLK_POS)
#define PDS_CLKPLL_SEL_SAMPLE_CLK_UMSK                          (~(((1U<<PDS_CLKPLL_SEL_SAMPLE_CLK_LEN)-1)<<PDS_CLKPLL_SEL_SAMPLE_CLK_POS))
#define PDS_CLKPLL_SEL_FB_CLK                                   PDS_CLKPLL_SEL_FB_CLK
#define PDS_CLKPLL_SEL_FB_CLK_POS                               (2U)
#define PDS_CLKPLL_SEL_FB_CLK_LEN                               (2U)
#define PDS_CLKPLL_SEL_FB_CLK_MSK                               (((1U<<PDS_CLKPLL_SEL_FB_CLK_LEN)-1)<<PDS_CLKPLL_SEL_FB_CLK_POS)
#define PDS_CLKPLL_SEL_FB_CLK_UMSK                              (~(((1U<<PDS_CLKPLL_SEL_FB_CLK_LEN)-1)<<PDS_CLKPLL_SEL_FB_CLK_POS))

/* 0x414 : clkpll_vco */
#define PDS_CLKPLL_VCO_OFFSET                                   (0x414)
#define PDS_CLKPLL_VCO_SPEED                                    PDS_CLKPLL_VCO_SPEED
#define PDS_CLKPLL_VCO_SPEED_POS                                (0U)
#define PDS_CLKPLL_VCO_SPEED_LEN                                (3U)
#define PDS_CLKPLL_VCO_SPEED_MSK                                (((1U<<PDS_CLKPLL_VCO_SPEED_LEN)-1)<<PDS_CLKPLL_VCO_SPEED_POS)
#define PDS_CLKPLL_VCO_SPEED_UMSK                               (~(((1U<<PDS_CLKPLL_VCO_SPEED_LEN)-1)<<PDS_CLKPLL_VCO_SPEED_POS))
#define PDS_CLKPLL_SHRTR                                        PDS_CLKPLL_SHRTR
#define PDS_CLKPLL_SHRTR_POS                                    (3U)
#define PDS_CLKPLL_SHRTR_LEN                                    (1U)
#define PDS_CLKPLL_SHRTR_MSK                                    (((1U<<PDS_CLKPLL_SHRTR_LEN)-1)<<PDS_CLKPLL_SHRTR_POS)
#define PDS_CLKPLL_SHRTR_UMSK                                   (~(((1U<<PDS_CLKPLL_SHRTR_LEN)-1)<<PDS_CLKPLL_SHRTR_POS))

/* 0x418 : clkpll_sdm */
#define PDS_CLKPLL_SDM_OFFSET                                   (0x418)
#define PDS_CLKPLL_SDMIN                                        PDS_CLKPLL_SDMIN
#define PDS_CLKPLL_SDMIN_POS                                    (0U)
#define PDS_CLKPLL_SDMIN_LEN                                    (24U)
#define PDS_CLKPLL_SDMIN_MSK                                    (((1U<<PDS_CLKPLL_SDMIN_LEN)-1)<<PDS_CLKPLL_SDMIN_POS)
#define PDS_CLKPLL_SDMIN_UMSK                                   (~(((1U<<PDS_CLKPLL_SDMIN_LEN)-1)<<PDS_CLKPLL_SDMIN_POS))
#define PDS_CLKPLL_DITHER_SEL                                   PDS_CLKPLL_DITHER_SEL
#define PDS_CLKPLL_DITHER_SEL_POS                               (24U)
#define PDS_CLKPLL_DITHER_SEL_LEN                               (2U)
#define PDS_CLKPLL_DITHER_SEL_MSK                               (((1U<<PDS_CLKPLL_DITHER_SEL_LEN)-1)<<PDS_CLKPLL_DITHER_SEL_POS)
#define PDS_CLKPLL_DITHER_SEL_UMSK                              (~(((1U<<PDS_CLKPLL_DITHER_SEL_LEN)-1)<<PDS_CLKPLL_DITHER_SEL_POS))
#define PDS_CLKPLL_SDM_FLAG                                     PDS_CLKPLL_SDM_FLAG
#define PDS_CLKPLL_SDM_FLAG_POS                                 (28U)
#define PDS_CLKPLL_SDM_FLAG_LEN                                 (1U)
#define PDS_CLKPLL_SDM_FLAG_MSK                                 (((1U<<PDS_CLKPLL_SDM_FLAG_LEN)-1)<<PDS_CLKPLL_SDM_FLAG_POS)
#define PDS_CLKPLL_SDM_FLAG_UMSK                                (~(((1U<<PDS_CLKPLL_SDM_FLAG_LEN)-1)<<PDS_CLKPLL_SDM_FLAG_POS))
#define PDS_CLKPLL_SDM_BYPASS                                   PDS_CLKPLL_SDM_BYPASS
#define PDS_CLKPLL_SDM_BYPASS_POS                               (29U)
#define PDS_CLKPLL_SDM_BYPASS_LEN                               (1U)
#define PDS_CLKPLL_SDM_BYPASS_MSK                               (((1U<<PDS_CLKPLL_SDM_BYPASS_LEN)-1)<<PDS_CLKPLL_SDM_BYPASS_POS)
#define PDS_CLKPLL_SDM_BYPASS_UMSK                              (~(((1U<<PDS_CLKPLL_SDM_BYPASS_LEN)-1)<<PDS_CLKPLL_SDM_BYPASS_POS))

/* 0x41C : clkpll_output_en */
#define PDS_CLKPLL_OUTPUT_EN_OFFSET                             (0x41C)
#define PDS_CLKPLL_EN_480M                                      PDS_CLKPLL_EN_480M
#define PDS_CLKPLL_EN_480M_POS                                  (0U)
#define PDS_CLKPLL_EN_480M_LEN                                  (1U)
#define PDS_CLKPLL_EN_480M_MSK                                  (((1U<<PDS_CLKPLL_EN_480M_LEN)-1)<<PDS_CLKPLL_EN_480M_POS)
#define PDS_CLKPLL_EN_480M_UMSK                                 (~(((1U<<PDS_CLKPLL_EN_480M_LEN)-1)<<PDS_CLKPLL_EN_480M_POS))
#define PDS_CLKPLL_EN_240M                                      PDS_CLKPLL_EN_240M
#define PDS_CLKPLL_EN_240M_POS                                  (1U)
#define PDS_CLKPLL_EN_240M_LEN                                  (1U)
#define PDS_CLKPLL_EN_240M_MSK                                  (((1U<<PDS_CLKPLL_EN_240M_LEN)-1)<<PDS_CLKPLL_EN_240M_POS)
#define PDS_CLKPLL_EN_240M_UMSK                                 (~(((1U<<PDS_CLKPLL_EN_240M_LEN)-1)<<PDS_CLKPLL_EN_240M_POS))
#define PDS_CLKPLL_EN_192M                                      PDS_CLKPLL_EN_192M
#define PDS_CLKPLL_EN_192M_POS                                  (2U)
#define PDS_CLKPLL_EN_192M_LEN                                  (1U)
#define PDS_CLKPLL_EN_192M_MSK                                  (((1U<<PDS_CLKPLL_EN_192M_LEN)-1)<<PDS_CLKPLL_EN_192M_POS)
#define PDS_CLKPLL_EN_192M_UMSK                                 (~(((1U<<PDS_CLKPLL_EN_192M_LEN)-1)<<PDS_CLKPLL_EN_192M_POS))
#define PDS_CLKPLL_EN_160M                                      PDS_CLKPLL_EN_160M
#define PDS_CLKPLL_EN_160M_POS                                  (3U)
#define PDS_CLKPLL_EN_160M_LEN                                  (1U)
#define PDS_CLKPLL_EN_160M_MSK                                  (((1U<<PDS_CLKPLL_EN_160M_LEN)-1)<<PDS_CLKPLL_EN_160M_POS)
#define PDS_CLKPLL_EN_160M_UMSK                                 (~(((1U<<PDS_CLKPLL_EN_160M_LEN)-1)<<PDS_CLKPLL_EN_160M_POS))
#define PDS_CLKPLL_EN_120M                                      PDS_CLKPLL_EN_120M
#define PDS_CLKPLL_EN_120M_POS                                  (4U)
#define PDS_CLKPLL_EN_120M_LEN                                  (1U)
#define PDS_CLKPLL_EN_120M_MSK                                  (((1U<<PDS_CLKPLL_EN_120M_LEN)-1)<<PDS_CLKPLL_EN_120M_POS)
#define PDS_CLKPLL_EN_120M_UMSK                                 (~(((1U<<PDS_CLKPLL_EN_120M_LEN)-1)<<PDS_CLKPLL_EN_120M_POS))
#define PDS_CLKPLL_EN_96M                                       PDS_CLKPLL_EN_96M
#define PDS_CLKPLL_EN_96M_POS                                   (5U)
#define PDS_CLKPLL_EN_96M_LEN                                   (1U)
#define PDS_CLKPLL_EN_96M_MSK                                   (((1U<<PDS_CLKPLL_EN_96M_LEN)-1)<<PDS_CLKPLL_EN_96M_POS)
#define PDS_CLKPLL_EN_96M_UMSK                                  (~(((1U<<PDS_CLKPLL_EN_96M_LEN)-1)<<PDS_CLKPLL_EN_96M_POS))
#define PDS_CLKPLL_EN_80M                                       PDS_CLKPLL_EN_80M
#define PDS_CLKPLL_EN_80M_POS                                   (6U)
#define PDS_CLKPLL_EN_80M_LEN                                   (1U)
#define PDS_CLKPLL_EN_80M_MSK                                   (((1U<<PDS_CLKPLL_EN_80M_LEN)-1)<<PDS_CLKPLL_EN_80M_POS)
#define PDS_CLKPLL_EN_80M_UMSK                                  (~(((1U<<PDS_CLKPLL_EN_80M_LEN)-1)<<PDS_CLKPLL_EN_80M_POS))
#define PDS_CLKPLL_EN_48M                                       PDS_CLKPLL_EN_48M
#define PDS_CLKPLL_EN_48M_POS                                   (7U)
#define PDS_CLKPLL_EN_48M_LEN                                   (1U)
#define PDS_CLKPLL_EN_48M_MSK                                   (((1U<<PDS_CLKPLL_EN_48M_LEN)-1)<<PDS_CLKPLL_EN_48M_POS)
#define PDS_CLKPLL_EN_48M_UMSK                                  (~(((1U<<PDS_CLKPLL_EN_48M_LEN)-1)<<PDS_CLKPLL_EN_48M_POS))
#define PDS_CLKPLL_EN_32M                                       PDS_CLKPLL_EN_32M
#define PDS_CLKPLL_EN_32M_POS                                   (8U)
#define PDS_CLKPLL_EN_32M_LEN                                   (1U)
#define PDS_CLKPLL_EN_32M_MSK                                   (((1U<<PDS_CLKPLL_EN_32M_LEN)-1)<<PDS_CLKPLL_EN_32M_POS)
#define PDS_CLKPLL_EN_32M_UMSK                                  (~(((1U<<PDS_CLKPLL_EN_32M_LEN)-1)<<PDS_CLKPLL_EN_32M_POS))
#define PDS_CLKPLL_EN_DIV2_480M                                 PDS_CLKPLL_EN_DIV2_480M
#define PDS_CLKPLL_EN_DIV2_480M_POS                             (9U)
#define PDS_CLKPLL_EN_DIV2_480M_LEN                             (1U)
#define PDS_CLKPLL_EN_DIV2_480M_MSK                             (((1U<<PDS_CLKPLL_EN_DIV2_480M_LEN)-1)<<PDS_CLKPLL_EN_DIV2_480M_POS)
#define PDS_CLKPLL_EN_DIV2_480M_UMSK                            (~(((1U<<PDS_CLKPLL_EN_DIV2_480M_LEN)-1)<<PDS_CLKPLL_EN_DIV2_480M_POS))


struct  pds_reg {
    /* 0x0 : PDS_CTL */
    union {
        struct {
            uint32_t pds_start_ps                   :  1; /* [    0],        w1p,        0x0 */
            uint32_t cr_sleep_forever               :  1; /* [    1],        r/w,        0x0 */
            uint32_t cr_xtal_force_off              :  1; /* [    2],        r/w,        0x0 */
            uint32_t cr_wifi_pds_save_state         :  1; /* [    3],        r/w,        0x0 */
            uint32_t cr_pds_pd_dcdc18               :  1; /* [    4],        r/w,        0x0 */
            uint32_t cr_pds_pd_bg_sys               :  1; /* [    5],        r/w,        0x0 */
            uint32_t reserved_6_7                   :  2; /* [ 7: 6],       rsvd,        0x0 */
            uint32_t cr_pds_gate_clk                :  1; /* [    8],        r/w,        0x1 */
            uint32_t cr_pds_mem_stby                :  1; /* [    9],        r/w,        0x1 */
            uint32_t reserved_10                    :  1; /* [   10],       rsvd,        0x0 */
            uint32_t cr_pds_iso_en                  :  1; /* [   11],        r/w,        0x1 */
            uint32_t cr_pds_wait_xtal_rdy           :  1; /* [   12],        r/w,        0x0 */
            uint32_t cr_pds_pwr_off                 :  1; /* [   13],        r/w,        0x1 */
            uint32_t cr_pds_pd_xtal                 :  1; /* [   14],        r/w,        0x1 */
            uint32_t cr_pds_soc_enb_force_on        :  1; /* [   15],        r/w,        0x0 */
            uint32_t cr_pds_rst_soc_en              :  1; /* [   16],        r/w,        0x0 */
            uint32_t cr_pds_rc32m_off_dis           :  1; /* [   17],        r/w,        0x0 */
            uint32_t cr_pds_ldo_vsel_en             :  1; /* [   18],        r/w,        0x0 */
            uint32_t reserved_19_20                 :  2; /* [20:19],       rsvd,        0x0 */
            uint32_t cr_np_wfi_mask                 :  1; /* [   21],        r/w,        0x0 */
            uint32_t cr_pds_pd_ldo11                :  1; /* [   22],        r/w,        0x0 */
            uint32_t reserved_23                    :  1; /* [   23],       rsvd,        0x0 */
            uint32_t cr_pds_ldo_vol                 :  4; /* [27:24],        r/w,        0xa */
            uint32_t cr_pds_ctrl_rf                 :  2; /* [29:28],        r/w,        0x1 */
            uint32_t cr_pds_ctrl_pll                :  2; /* [31:30],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } PDS_CTL;

    /* 0x4 : PDS_TIME1 */
    union {
        struct {
            uint32_t cr_sleep_duration              : 32; /* [31: 0],        r/w,      0xca8 */
        }BF;
        uint32_t WORD;
    } PDS_TIME1;

    /* 0x8  reserved */
    uint8_t RESERVED0x8[4];

    /* 0xC : PDS_INT */
    union {
        struct {
            uint32_t ro_pds_wake_int                :  1; /* [    0],          r,        0x0 */
            uint32_t ro_pds_irq_in                  :  1; /* [    1],          r,        0x0 */
            uint32_t ro_pds_rf_done_int             :  1; /* [    2],          r,        0x0 */
            uint32_t ro_pds_pll_done_int            :  1; /* [    3],          r,        0x0 */
            uint32_t reserved_4_7                   :  4; /* [ 7: 4],       rsvd,        0x0 */
            uint32_t cr_pds_wake_int_mask           :  1; /* [    8],        r/w,        0x0 */
            uint32_t cr_pds_irq_in_dis              :  1; /* [    9],        r/w,        0x0 */
            uint32_t cr_pds_rf_done_int_mask        :  1; /* [   10],        r/w,        0x0 */
            uint32_t cr_pds_pll_done_int_mask       :  1; /* [   11],        r/w,        0x0 */
            uint32_t reserved_12_15                 :  4; /* [15:12],       rsvd,        0x0 */
            uint32_t cr_pds_int_clr                 :  1; /* [   16],        r/w,        0x0 */
            uint32_t reserved_17_31                 : 15; /* [31:17],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } PDS_INT;

    /* 0x10 : PDS_CTL2 */
    union {
        struct {
            uint32_t cr_pds_force_np_pwr_off        :  1; /* [    0],        r/w,        0x0 */
            uint32_t reserved_1                     :  1; /* [    1],       rsvd,        0x0 */
            uint32_t cr_pds_force_wb_pwr_off        :  1; /* [    2],        r/w,        0x0 */
            uint32_t reserved_3                     :  1; /* [    3],       rsvd,        0x0 */
            uint32_t cr_pds_force_np_iso_en         :  1; /* [    4],        r/w,        0x0 */
            uint32_t reserved_5                     :  1; /* [    5],       rsvd,        0x0 */
            uint32_t cr_pds_force_wb_iso_en         :  1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7                     :  1; /* [    7],       rsvd,        0x0 */
            uint32_t cr_pds_force_np_pds_rst        :  1; /* [    8],        r/w,        0x0 */
            uint32_t reserved_9                     :  1; /* [    9],       rsvd,        0x0 */
            uint32_t cr_pds_force_wb_pds_rst        :  1; /* [   10],        r/w,        0x0 */
            uint32_t reserved_11                    :  1; /* [   11],       rsvd,        0x0 */
            uint32_t cr_pds_force_np_mem_stby       :  1; /* [   12],        r/w,        0x0 */
            uint32_t reserved_13                    :  1; /* [   13],       rsvd,        0x0 */
            uint32_t cr_pds_force_wb_mem_stby       :  1; /* [   14],        r/w,        0x0 */
            uint32_t reserved_15                    :  1; /* [   15],       rsvd,        0x0 */
            uint32_t cr_pds_force_np_gate_clk       :  1; /* [   16],        r/w,        0x0 */
            uint32_t reserved_17                    :  1; /* [   17],       rsvd,        0x0 */
            uint32_t cr_pds_force_wb_gate_clk       :  1; /* [   18],        r/w,        0x0 */
            uint32_t reserved_19_31                 : 13; /* [31:19],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } PDS_CTL2;

    /* 0x14 : PDS_CTL3 */
    union {
        struct {
            uint32_t reserved_0                     :  1; /* [    0],       rsvd,        0x0 */
            uint32_t cr_pds_force_misc_pwr_off      :  1; /* [    1],        r/w,        0x0 */
            uint32_t reserved_2_3                   :  2; /* [ 3: 2],       rsvd,        0x0 */
            uint32_t cr_pds_force_misc_iso_en       :  1; /* [    4],        r/w,        0x0 */
            uint32_t reserved_5_6                   :  2; /* [ 6: 5],       rsvd,        0x0 */
            uint32_t cr_pds_force_misc_pds_rst      :  1; /* [    7],        r/w,        0x0 */
            uint32_t reserved_8_9                   :  2; /* [ 9: 8],       rsvd,        0x0 */
            uint32_t cr_pds_force_misc_mem_stby     :  1; /* [   10],        r/w,        0x0 */
            uint32_t reserved_11_12                 :  2; /* [12:11],       rsvd,        0x0 */
            uint32_t cr_pds_force_misc_gate_clk     :  1; /* [   13],        r/w,        0x0 */
            uint32_t reserved_14_23                 : 10; /* [23:14],       rsvd,        0x0 */
            uint32_t cr_pds_np_iso_en               :  1; /* [   24],        r/w,        0x1 */
            uint32_t reserved_25_26                 :  2; /* [26:25],       rsvd,        0x0 */
            uint32_t cr_pds_wb_iso_en               :  1; /* [   27],        r/w,        0x1 */
            uint32_t reserved_28_29                 :  2; /* [29:28],       rsvd,        0x0 */
            uint32_t cr_pds_misc_iso_en             :  1; /* [   30],        r/w,        0x1 */
            uint32_t reserved_31                    :  1; /* [   31],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } PDS_CTL3;

    /* 0x18 : PDS_CTL4 */
    union {
        struct {
            uint32_t cr_pds_np_pwr_off              :  1; /* [    0],        r/w,        0x1 */
            uint32_t cr_pds_np_reset                :  1; /* [    1],        r/w,        0x1 */
            uint32_t cr_pds_np_mem_stby             :  1; /* [    2],        r/w,        0x1 */
            uint32_t cr_pds_np_gate_clk             :  1; /* [    3],        r/w,        0x1 */
            uint32_t reserved_4_11                  :  8; /* [11: 4],       rsvd,        0x0 */
            uint32_t cr_pds_wb_pwr_off              :  1; /* [   12],        r/w,        0x1 */
            uint32_t cr_pds_wb_reset                :  1; /* [   13],        r/w,        0x1 */
            uint32_t cr_pds_wb_mem_stby             :  1; /* [   14],        r/w,        0x1 */
            uint32_t cr_pds_wb_gate_clk             :  1; /* [   15],        r/w,        0x1 */
            uint32_t reserved_16_23                 :  8; /* [23:16],       rsvd,        0x0 */
            uint32_t cr_pds_misc_pwr_off            :  1; /* [   24],        r/w,        0x1 */
            uint32_t cr_pds_misc_reset              :  1; /* [   25],        r/w,        0x1 */
            uint32_t cr_pds_misc_mem_stby           :  1; /* [   26],        r/w,        0x1 */
            uint32_t cr_pds_misc_gate_clk           :  1; /* [   27],        r/w,        0x1 */
            uint32_t reserved_28_31                 :  4; /* [31:28],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } PDS_CTL4;

    /* 0x1C : pds_stat */
    union {
        struct {
            uint32_t ro_pds_state                   :  4; /* [ 3: 0],          r,        0x0 */
            uint32_t reserved_4_7                   :  4; /* [ 7: 4],       rsvd,        0x0 */
            uint32_t ro_pds_rf_state                :  4; /* [11: 8],          r,        0x0 */
            uint32_t reserved_12_15                 :  4; /* [15:12],       rsvd,        0x0 */
            uint32_t ro_pds_pll_state               :  2; /* [17:16],          r,        0x0 */
            uint32_t reserved_18_31                 : 14; /* [31:18],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } pds_stat;

    /* 0x20 : pds_ram1 */
    union {
        struct {
            uint32_t cr_np_sram_pwr                 :  8; /* [ 7: 0],        r/w,        0x0 */
            uint32_t reserved_8_31                  : 24; /* [31: 8],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } pds_ram1;

    /* 0x24  reserved */
    uint8_t RESERVED0x24[732];

    /* 0x300 : rc32m_ctrl0 */
    union {
        struct {
            uint32_t rc32m_cal_done                 :  1; /* [    0],          r,        0x0 */
            uint32_t rc32m_rdy                      :  1; /* [    1],          r,        0x0 */
            uint32_t rc32m_cal_inprogress           :  1; /* [    2],          r,        0x0 */
            uint32_t rc32m_cal_div                  :  2; /* [ 4: 3],        r/w,        0x3 */
            uint32_t rc32m_cal_precharge            :  1; /* [    5],          r,        0x0 */
            uint32_t rc32m_dig_code_fr_cal          :  8; /* [13: 6],          r,        0x0 */
            uint32_t reserved_14_16                 :  3; /* [16:14],       rsvd,        0x0 */
            uint32_t rc32m_allow_cal                :  1; /* [   17],        r/w,        0x0 */
            uint32_t rc32m_refclk_half              :  1; /* [   18],        r/w,        0x0 */
            uint32_t rc32m_ext_code_en              :  1; /* [   19],        r/w,        0x1 */
            uint32_t rc32m_cal_en                   :  1; /* [   20],        r/w,        0x0 */
            uint32_t rc32m_pd                       :  1; /* [   21],        r/w,        0x0 */
            uint32_t rc32m_code_fr_ext              :  8; /* [29:22],        r/w,       0x60 */
            uint32_t reserved_30_31                 :  2; /* [31:30],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } rc32m_ctrl0;

    /* 0x304 : rc32m_ctrl1 */
    union {
        struct {
            uint32_t rc32m_test_en                  :  1; /* [    0],        r/w,        0x0 */
            uint32_t rc32m_soft_rst                 :  1; /* [    1],        r/w,        0x0 */
            uint32_t rc32m_clk_soft_rst             :  1; /* [    2],        r/w,        0x0 */
            uint32_t rc32m_clk_inv                  :  1; /* [    3],        r/w,        0x0 */
            uint32_t rc32m_clk_force_on             :  1; /* [    4],        r/w,        0x0 */
            uint32_t reserved_5_23                  : 19; /* [23: 5],       rsvd,        0x0 */
            uint32_t rc32m_reserved                 :  8; /* [31:24],        r/w,        0xf */
        }BF;
        uint32_t WORD;
    } rc32m_ctrl1;

    /* 0x308  reserved */
    uint8_t RESERVED0x308[248];

    /* 0x400 : pu_rst_clkpll */
    union {
        struct {
            uint32_t clkpll_sdm_reset               :  1; /* [    0],        r/w,        0x0 */
            uint32_t clkpll_reset_postdiv           :  1; /* [    1],        r/w,        0x0 */
            uint32_t clkpll_reset_fbdv              :  1; /* [    2],        r/w,        0x0 */
            uint32_t clkpll_reset_refdiv            :  1; /* [    3],        r/w,        0x0 */
            uint32_t clkpll_pu_postdiv              :  1; /* [    4],        r/w,        0x1 */
            uint32_t clkpll_pu_fbdv                 :  1; /* [    5],        r/w,        0x1 */
            uint32_t clkpll_pu_clamp_op             :  1; /* [    6],        r/w,        0x1 */
            uint32_t clkpll_pu_pfd                  :  1; /* [    7],        r/w,        0x1 */
            uint32_t clkpll_pu_cp                   :  1; /* [    8],        r/w,        0x1 */
            uint32_t pu_clkpll_sfreg                :  1; /* [    9],        r/w,        0x0 */
            uint32_t pu_clkpll                      :  1; /* [   10],        r/w,        0x0 */
            uint32_t reserved_11_31                 : 21; /* [31:11],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } pu_rst_clkpll;

    /* 0x404 : clkpll_top_ctrl */
    union {
        struct {
            uint32_t clkpll_postdiv                 :  7; /* [ 6: 0],        r/w,       0x14 */
            uint32_t reserved_7                     :  1; /* [    7],       rsvd,        0x0 */
            uint32_t clkpll_refdiv_ratio            :  4; /* [11: 8],        r/w,        0x4 */
            uint32_t clkpll_xtal_rc32m_sel          :  1; /* [   12],        r/w,        0x0 */
            uint32_t reserved_13_15                 :  3; /* [15:13],       rsvd,        0x0 */
            uint32_t clkpll_refclk_sel              :  1; /* [   16],        r/w,        0x0 */
            uint32_t reserved_17_19                 :  3; /* [19:17],       rsvd,        0x0 */
            uint32_t clkpll_vg11_sel                :  2; /* [21:20],        r/w,        0x1 */
            uint32_t reserved_22_23                 :  2; /* [23:22],       rsvd,        0x0 */
            uint32_t clkpll_vg13_sel                :  2; /* [25:24],        r/w,        0x1 */
            uint32_t reserved_26_31                 :  6; /* [31:26],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } clkpll_top_ctrl;

    /* 0x408 : clkpll_cp */
    union {
        struct {
            uint32_t clkpll_sel_cp_bias             :  1; /* [    0],        r/w,        0x1 */
            uint32_t reserved_1_3                   :  3; /* [ 3: 1],       rsvd,        0x0 */
            uint32_t clkpll_icp_5u                  :  2; /* [ 5: 4],        r/w,        0x0 */
            uint32_t clkpll_icp_1u                  :  2; /* [ 7: 6],        r/w,        0x1 */
            uint32_t clkpll_int_frac_sw             :  1; /* [    8],        r/w,        0x1 */
            uint32_t clkpll_cp_startup_en           :  1; /* [    9],        r/w,        0x1 */
            uint32_t clkpll_cp_opamp_en             :  1; /* [   10],        r/w,        0x1 */
            uint32_t reserved_11_31                 : 21; /* [31:11],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } clkpll_cp;

    /* 0x40C : clkpll_rz */
    union {
        struct {
            uint32_t clkpll_c4_en                   :  1; /* [    0],        r/w,        0x0 */
            uint32_t reserved_1_3                   :  3; /* [ 3: 1],       rsvd,        0x0 */
            uint32_t clkpll_r4                      :  2; /* [ 5: 4],        r/w,        0x2 */
            uint32_t reserved_6_7                   :  2; /* [ 7: 6],       rsvd,        0x0 */
            uint32_t clkpll_r4_short                :  1; /* [    8],        r/w,        0x0 */
            uint32_t reserved_9_11                  :  3; /* [11: 9],       rsvd,        0x0 */
            uint32_t clkpll_c3                      :  2; /* [13:12],        r/w,        0x2 */
            uint32_t clkpll_cz                      :  2; /* [15:14],        r/w,        0x2 */
            uint32_t clkpll_rz                      :  3; /* [18:16],        r/w,        0x5 */
            uint32_t reserved_19_31                 : 13; /* [31:19],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } clkpll_rz;

    /* 0x410 : clkpll_fbdv */
    union {
        struct {
            uint32_t clkpll_sel_sample_clk          :  2; /* [ 1: 0],        r/w,        0x1 */
            uint32_t clkpll_sel_fb_clk              :  2; /* [ 3: 2],        r/w,        0x1 */
            uint32_t reserved_4_31                  : 28; /* [31: 4],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } clkpll_fbdv;

    /* 0x414 : clkpll_vco */
    union {
        struct {
            uint32_t clkpll_vco_speed               :  3; /* [ 2: 0],        r/w,        0x7 */
            uint32_t clkpll_shrtr                   :  1; /* [    3],        r/w,        0x0 */
            uint32_t reserved_4_31                  : 28; /* [31: 4],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } clkpll_vco;

    /* 0x418 : clkpll_sdm */
    union {
        struct {
            uint32_t clkpll_sdmin                   : 24; /* [23: 0],        r/w,   0x600000 */
            uint32_t clkpll_dither_sel              :  2; /* [25:24],        r/w,        0x0 */
            uint32_t reserved_26_27                 :  2; /* [27:26],       rsvd,        0x0 */
            uint32_t clkpll_sdm_flag                :  1; /* [   28],        r/w,        0x1 */
            uint32_t clkpll_sdm_bypass              :  1; /* [   29],        r/w,        0x0 */
            uint32_t reserved_30_31                 :  2; /* [31:30],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } clkpll_sdm;

    /* 0x41C : clkpll_output_en */
    union {
        struct {
            uint32_t clkpll_en_480m                 :  1; /* [    0],        r/w,        0x0 */
            uint32_t clkpll_en_240m                 :  1; /* [    1],        r/w,        0x0 */
            uint32_t clkpll_en_192m                 :  1; /* [    2],        r/w,        0x0 */
            uint32_t clkpll_en_160m                 :  1; /* [    3],        r/w,        0x0 */
            uint32_t clkpll_en_120m                 :  1; /* [    4],        r/w,        0x0 */
            uint32_t clkpll_en_96m                  :  1; /* [    5],        r/w,        0x0 */
            uint32_t clkpll_en_80m                  :  1; /* [    6],        r/w,        0x0 */
            uint32_t clkpll_en_48m                  :  1; /* [    7],        r/w,        0x0 */
            uint32_t clkpll_en_32m                  :  1; /* [    8],        r/w,        0x1 */
            uint32_t clkpll_en_div2_480m            :  1; /* [    9],        r/w,        0x0 */
            uint32_t reserved_10_31                 : 22; /* [31:10],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } clkpll_output_en;

};

typedef volatile struct pds_reg pds_reg_t;


#endif  /* __PDS_REG_H__ */
