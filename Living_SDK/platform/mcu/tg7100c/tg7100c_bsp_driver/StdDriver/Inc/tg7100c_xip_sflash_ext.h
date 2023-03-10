/**
  ******************************************************************************
  * @file    tg7100c_xip_sflash_ext.h
  * @version V1.0
  * @date
  * @brief   This file is the standard driver header file
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
#ifndef __TG7100C_XIP_SFLASH_EXT_H__
#define __TG7100C_XIP_SFLASH_EXT_H__

#include "tg7100c_common.h"
#include "tg7100c_sflash.h"
#include "tg7100c_sflash_ext.h"
#include "tg7100c_xip_sflash.h"

/** @addtogroup  TG7100C_Peripheral_Driver
 *  @{
 */

/** @addtogroup  XIP_SFLASH_EXT
 *  @{
 */

/** @defgroup  XIP_SFLASH_EXT_Public_Types
 *  @{
 */

/*@} end of group XIP_SFLASH_EXT_Public_Types */

/** @defgroup  XIP_SFLASH_EXT_Public_Constants
 *  @{
 */

/*@} end of group XIP_SFLASH_EXT_Public_Constants */

/** @defgroup  XIP_SFLASH_EXT_Public_Macros
 *  @{
 */

/*@} end of group XIP_SFLASH_EXT_Public_Macros */

/** @defgroup  XIP_SFLASH_EXT_Public_Functions
 *  @{
 */
BL_Err_Type XIP_SFlash_State_Save_Ext(SPI_Flash_Cfg_Type *pFlashCfg,uint32_t *offset);
BL_Err_Type XIP_SFlash_State_Restore_Ext(SPI_Flash_Cfg_Type *pFlashCfg,uint32_t offset);
BL_Err_Type XIP_SFlash_Erase_Need_Lock_Ext(SPI_Flash_Cfg_Type *pFlashCfg,uint32_t startaddr,
                                           uint32_t endaddr);
BL_Err_Type XIP_SFlash_Write_Need_Lock_Ext(SPI_Flash_Cfg_Type *pFlashCfg,uint32_t addr,uint8_t *data,
                                           uint32_t len);
BL_Err_Type XIP_SFlash_Read_Need_Lock_Ext(SPI_Flash_Cfg_Type *pFlashCfg,uint32_t addr,uint8_t *data,
                                          uint32_t len);
BL_Err_Type XIP_SFlash_Clear_Status_Register_Need_Lock(SPI_Flash_Cfg_Type *pFlashCfg);
BL_Err_Type XIP_SFlash_GetJedecId_Need_Lock_Ext(SPI_Flash_Cfg_Type *pFlashCfg,uint8_t *data);
BL_Err_Type XIP_SFlash_GetDeviceId_Need_Lock_Ext(SPI_Flash_Cfg_Type *pFlashCfg,uint8_t *data);
BL_Err_Type XIP_SFlash_GetUniqueId_Need_Lock_Ext(SPI_Flash_Cfg_Type *pFlashCfg,uint8_t *data,
                                                 uint8_t idLen);
BL_Err_Type XIP_SFlash_RCV_Enable_Need_Lock(SPI_Flash_Cfg_Type *pFlashCfg, uint8_t rCmd, uint8_t wCmd,
                                            uint8_t bitPos);
int XIP_SFlash_Read_With_Lock_Ext(SPI_Flash_Cfg_Type *pFlashCfg,uint32_t addr, uint8_t *dst, int len);
int XIP_SFlash_Write_With_Lock_Ext(SPI_Flash_Cfg_Type *pFlashCfg,uint32_t addr, uint8_t *src, int len);
int XIP_SFlash_Erase_With_Lock_Ext(SPI_Flash_Cfg_Type *pFlashCfg,uint32_t addr, int len);
int XIP_SFlash_Clear_Status_Register_With_Lock(SPI_Flash_Cfg_Type *pFlashCfg);
int XIP_SFlash_RCV_Enable_With_Lock(SPI_Flash_Cfg_Type *pFlashCfg, uint8_t rCmd, uint8_t wCmd, uint8_t bitPos);
BL_Err_Type XIP_SFlash_Init(SPI_Flash_Cfg_Type *pFlashCfg);
int XIP_SFlash_Read(uint32_t addr, uint8_t *dst, int len);
int XIP_SFlash_Write(uint32_t addr, uint8_t *src, int len);
int XIP_SFlash_Erase(uint32_t addr, int len);

/*@} end of group XIP_SFLASH_EXT_Public_Functions */

/*@} end of group XIP_SFLASH_EXT */

/*@} end of group TG7100C_Peripheral_Driver */

#endif /* __TG7100C_XIP_SFLASH_EXT_H__ */
