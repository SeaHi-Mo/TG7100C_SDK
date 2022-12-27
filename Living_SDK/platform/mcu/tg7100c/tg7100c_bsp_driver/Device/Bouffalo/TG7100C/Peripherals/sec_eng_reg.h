/**
  ******************************************************************************
  * @file    sec_eng_reg.h
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
#ifndef  __SEC_ENG_REG_H__
#define  __SEC_ENG_REG_H__

#include "tg7100c.h"

/* 0x0 : se_sha_0_ctrl */
#define SEC_ENG_SE_SHA_0_CTRL_OFFSET                            (0x0)
#define SEC_ENG_SE_SHA_0_BUSY                                   SEC_ENG_SE_SHA_0_BUSY
#define SEC_ENG_SE_SHA_0_BUSY_POS                               (0U)
#define SEC_ENG_SE_SHA_0_BUSY_LEN                               (1U)
#define SEC_ENG_SE_SHA_0_BUSY_MSK                               (((1U<<SEC_ENG_SE_SHA_0_BUSY_LEN)-1)<<SEC_ENG_SE_SHA_0_BUSY_POS)
#define SEC_ENG_SE_SHA_0_BUSY_UMSK                              (~(((1U<<SEC_ENG_SE_SHA_0_BUSY_LEN)-1)<<SEC_ENG_SE_SHA_0_BUSY_POS))
#define SEC_ENG_SE_SHA_0_TRIG_1T                                SEC_ENG_SE_SHA_0_TRIG_1T
#define SEC_ENG_SE_SHA_0_TRIG_1T_POS                            (1U)
#define SEC_ENG_SE_SHA_0_TRIG_1T_LEN                            (1U)
#define SEC_ENG_SE_SHA_0_TRIG_1T_MSK                            (((1U<<SEC_ENG_SE_SHA_0_TRIG_1T_LEN)-1)<<SEC_ENG_SE_SHA_0_TRIG_1T_POS)
#define SEC_ENG_SE_SHA_0_TRIG_1T_UMSK                           (~(((1U<<SEC_ENG_SE_SHA_0_TRIG_1T_LEN)-1)<<SEC_ENG_SE_SHA_0_TRIG_1T_POS))
#define SEC_ENG_SE_SHA_0_MODE                                   SEC_ENG_SE_SHA_0_MODE
#define SEC_ENG_SE_SHA_0_MODE_POS                               (2U)
#define SEC_ENG_SE_SHA_0_MODE_LEN                               (3U)
#define SEC_ENG_SE_SHA_0_MODE_MSK                               (((1U<<SEC_ENG_SE_SHA_0_MODE_LEN)-1)<<SEC_ENG_SE_SHA_0_MODE_POS)
#define SEC_ENG_SE_SHA_0_MODE_UMSK                              (~(((1U<<SEC_ENG_SE_SHA_0_MODE_LEN)-1)<<SEC_ENG_SE_SHA_0_MODE_POS))
#define SEC_ENG_SE_SHA_0_EN                                     SEC_ENG_SE_SHA_0_EN
#define SEC_ENG_SE_SHA_0_EN_POS                                 (5U)
#define SEC_ENG_SE_SHA_0_EN_LEN                                 (1U)
#define SEC_ENG_SE_SHA_0_EN_MSK                                 (((1U<<SEC_ENG_SE_SHA_0_EN_LEN)-1)<<SEC_ENG_SE_SHA_0_EN_POS)
#define SEC_ENG_SE_SHA_0_EN_UMSK                                (~(((1U<<SEC_ENG_SE_SHA_0_EN_LEN)-1)<<SEC_ENG_SE_SHA_0_EN_POS))
#define SEC_ENG_SE_SHA_0_HASH_SEL                               SEC_ENG_SE_SHA_0_HASH_SEL
#define SEC_ENG_SE_SHA_0_HASH_SEL_POS                           (6U)
#define SEC_ENG_SE_SHA_0_HASH_SEL_LEN                           (1U)
#define SEC_ENG_SE_SHA_0_HASH_SEL_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_SEL_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_SEL_POS)
#define SEC_ENG_SE_SHA_0_HASH_SEL_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_SEL_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_SEL_POS))
#define SEC_ENG_SE_SHA_0_INT                                    SEC_ENG_SE_SHA_0_INT
#define SEC_ENG_SE_SHA_0_INT_POS                                (8U)
#define SEC_ENG_SE_SHA_0_INT_LEN                                (1U)
#define SEC_ENG_SE_SHA_0_INT_MSK                                (((1U<<SEC_ENG_SE_SHA_0_INT_LEN)-1)<<SEC_ENG_SE_SHA_0_INT_POS)
#define SEC_ENG_SE_SHA_0_INT_UMSK                               (~(((1U<<SEC_ENG_SE_SHA_0_INT_LEN)-1)<<SEC_ENG_SE_SHA_0_INT_POS))
#define SEC_ENG_SE_SHA_0_INT_CLR_1T                             SEC_ENG_SE_SHA_0_INT_CLR_1T
#define SEC_ENG_SE_SHA_0_INT_CLR_1T_POS                         (9U)
#define SEC_ENG_SE_SHA_0_INT_CLR_1T_LEN                         (1U)
#define SEC_ENG_SE_SHA_0_INT_CLR_1T_MSK                         (((1U<<SEC_ENG_SE_SHA_0_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_SHA_0_INT_CLR_1T_POS)
#define SEC_ENG_SE_SHA_0_INT_CLR_1T_UMSK                        (~(((1U<<SEC_ENG_SE_SHA_0_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_SHA_0_INT_CLR_1T_POS))
#define SEC_ENG_SE_SHA_0_INT_SET_1T                             SEC_ENG_SE_SHA_0_INT_SET_1T
#define SEC_ENG_SE_SHA_0_INT_SET_1T_POS                         (10U)
#define SEC_ENG_SE_SHA_0_INT_SET_1T_LEN                         (1U)
#define SEC_ENG_SE_SHA_0_INT_SET_1T_MSK                         (((1U<<SEC_ENG_SE_SHA_0_INT_SET_1T_LEN)-1)<<SEC_ENG_SE_SHA_0_INT_SET_1T_POS)
#define SEC_ENG_SE_SHA_0_INT_SET_1T_UMSK                        (~(((1U<<SEC_ENG_SE_SHA_0_INT_SET_1T_LEN)-1)<<SEC_ENG_SE_SHA_0_INT_SET_1T_POS))
#define SEC_ENG_SE_SHA_0_INT_MASK                               SEC_ENG_SE_SHA_0_INT_MASK
#define SEC_ENG_SE_SHA_0_INT_MASK_POS                           (11U)
#define SEC_ENG_SE_SHA_0_INT_MASK_LEN                           (1U)
#define SEC_ENG_SE_SHA_0_INT_MASK_MSK                           (((1U<<SEC_ENG_SE_SHA_0_INT_MASK_LEN)-1)<<SEC_ENG_SE_SHA_0_INT_MASK_POS)
#define SEC_ENG_SE_SHA_0_INT_MASK_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_INT_MASK_LEN)-1)<<SEC_ENG_SE_SHA_0_INT_MASK_POS))
#define SEC_ENG_SE_SHA_0_LINK_MODE                              SEC_ENG_SE_SHA_0_LINK_MODE
#define SEC_ENG_SE_SHA_0_LINK_MODE_POS                          (15U)
#define SEC_ENG_SE_SHA_0_LINK_MODE_LEN                          (1U)
#define SEC_ENG_SE_SHA_0_LINK_MODE_MSK                          (((1U<<SEC_ENG_SE_SHA_0_LINK_MODE_LEN)-1)<<SEC_ENG_SE_SHA_0_LINK_MODE_POS)
#define SEC_ENG_SE_SHA_0_LINK_MODE_UMSK                         (~(((1U<<SEC_ENG_SE_SHA_0_LINK_MODE_LEN)-1)<<SEC_ENG_SE_SHA_0_LINK_MODE_POS))
#define SEC_ENG_SE_SHA_0_MSG_LEN                                SEC_ENG_SE_SHA_0_MSG_LEN
#define SEC_ENG_SE_SHA_0_MSG_LEN_POS                            (16U)
#define SEC_ENG_SE_SHA_0_MSG_LEN_LEN                            (16U)
#define SEC_ENG_SE_SHA_0_MSG_LEN_MSK                            (((1U<<SEC_ENG_SE_SHA_0_MSG_LEN_LEN)-1)<<SEC_ENG_SE_SHA_0_MSG_LEN_POS)
#define SEC_ENG_SE_SHA_0_MSG_LEN_UMSK                           (~(((1U<<SEC_ENG_SE_SHA_0_MSG_LEN_LEN)-1)<<SEC_ENG_SE_SHA_0_MSG_LEN_POS))

/* 0x4 : se_sha_0_msa */
#define SEC_ENG_SE_SHA_0_MSA_OFFSET                             (0x4)
#define SEC_ENG_SE_SHA_0_MSA                                    SEC_ENG_SE_SHA_0_MSA
#define SEC_ENG_SE_SHA_0_MSA_POS                                (0U)
#define SEC_ENG_SE_SHA_0_MSA_LEN                                (32U)
#define SEC_ENG_SE_SHA_0_MSA_MSK                                (((1U<<SEC_ENG_SE_SHA_0_MSA_LEN)-1)<<SEC_ENG_SE_SHA_0_MSA_POS)
#define SEC_ENG_SE_SHA_0_MSA_UMSK                               (~(((1U<<SEC_ENG_SE_SHA_0_MSA_LEN)-1)<<SEC_ENG_SE_SHA_0_MSA_POS))

/* 0x8 : se_sha_0_status */
#define SEC_ENG_SE_SHA_0_STATUS_OFFSET                          (0x8)
#define SEC_ENG_SE_SHA_0_STATUS                                 SEC_ENG_SE_SHA_0_STATUS
#define SEC_ENG_SE_SHA_0_STATUS_POS                             (0U)
#define SEC_ENG_SE_SHA_0_STATUS_LEN                             (32U)
#define SEC_ENG_SE_SHA_0_STATUS_MSK                             (((1U<<SEC_ENG_SE_SHA_0_STATUS_LEN)-1)<<SEC_ENG_SE_SHA_0_STATUS_POS)
#define SEC_ENG_SE_SHA_0_STATUS_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_0_STATUS_LEN)-1)<<SEC_ENG_SE_SHA_0_STATUS_POS))

/* 0xC : se_sha_0_endian */
#define SEC_ENG_SE_SHA_0_ENDIAN_OFFSET                          (0xC)
#define SEC_ENG_SE_SHA_0_DOUT_ENDIAN                            SEC_ENG_SE_SHA_0_DOUT_ENDIAN
#define SEC_ENG_SE_SHA_0_DOUT_ENDIAN_POS                        (0U)
#define SEC_ENG_SE_SHA_0_DOUT_ENDIAN_LEN                        (1U)
#define SEC_ENG_SE_SHA_0_DOUT_ENDIAN_MSK                        (((1U<<SEC_ENG_SE_SHA_0_DOUT_ENDIAN_LEN)-1)<<SEC_ENG_SE_SHA_0_DOUT_ENDIAN_POS)
#define SEC_ENG_SE_SHA_0_DOUT_ENDIAN_UMSK                       (~(((1U<<SEC_ENG_SE_SHA_0_DOUT_ENDIAN_LEN)-1)<<SEC_ENG_SE_SHA_0_DOUT_ENDIAN_POS))

/* 0x10 : se_sha_0_hash_l_0 */
#define SEC_ENG_SE_SHA_0_HASH_L_0_OFFSET                        (0x10)
#define SEC_ENG_SE_SHA_0_HASH_L_0                               SEC_ENG_SE_SHA_0_HASH_L_0
#define SEC_ENG_SE_SHA_0_HASH_L_0_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_L_0_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_L_0_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_L_0_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_0_POS)
#define SEC_ENG_SE_SHA_0_HASH_L_0_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_L_0_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_0_POS))

/* 0x14 : se_sha_0_hash_l_1 */
#define SEC_ENG_SE_SHA_0_HASH_L_1_OFFSET                        (0x14)
#define SEC_ENG_SE_SHA_0_HASH_L_1                               SEC_ENG_SE_SHA_0_HASH_L_1
#define SEC_ENG_SE_SHA_0_HASH_L_1_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_L_1_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_L_1_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_L_1_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_1_POS)
#define SEC_ENG_SE_SHA_0_HASH_L_1_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_L_1_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_1_POS))

/* 0x18 : se_sha_0_hash_l_2 */
#define SEC_ENG_SE_SHA_0_HASH_L_2_OFFSET                        (0x18)
#define SEC_ENG_SE_SHA_0_HASH_L_2                               SEC_ENG_SE_SHA_0_HASH_L_2
#define SEC_ENG_SE_SHA_0_HASH_L_2_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_L_2_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_L_2_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_L_2_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_2_POS)
#define SEC_ENG_SE_SHA_0_HASH_L_2_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_L_2_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_2_POS))

/* 0x1C : se_sha_0_hash_l_3 */
#define SEC_ENG_SE_SHA_0_HASH_L_3_OFFSET                        (0x1C)
#define SEC_ENG_SE_SHA_0_HASH_L_3                               SEC_ENG_SE_SHA_0_HASH_L_3
#define SEC_ENG_SE_SHA_0_HASH_L_3_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_L_3_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_L_3_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_L_3_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_3_POS)
#define SEC_ENG_SE_SHA_0_HASH_L_3_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_L_3_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_3_POS))

/* 0x20 : se_sha_0_hash_l_4 */
#define SEC_ENG_SE_SHA_0_HASH_L_4_OFFSET                        (0x20)
#define SEC_ENG_SE_SHA_0_HASH_L_4                               SEC_ENG_SE_SHA_0_HASH_L_4
#define SEC_ENG_SE_SHA_0_HASH_L_4_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_L_4_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_L_4_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_L_4_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_4_POS)
#define SEC_ENG_SE_SHA_0_HASH_L_4_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_L_4_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_4_POS))

/* 0x24 : se_sha_0_hash_l_5 */
#define SEC_ENG_SE_SHA_0_HASH_L_5_OFFSET                        (0x24)
#define SEC_ENG_SE_SHA_0_HASH_L_5                               SEC_ENG_SE_SHA_0_HASH_L_5
#define SEC_ENG_SE_SHA_0_HASH_L_5_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_L_5_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_L_5_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_L_5_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_5_POS)
#define SEC_ENG_SE_SHA_0_HASH_L_5_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_L_5_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_5_POS))

/* 0x28 : se_sha_0_hash_l_6 */
#define SEC_ENG_SE_SHA_0_HASH_L_6_OFFSET                        (0x28)
#define SEC_ENG_SE_SHA_0_HASH_L_6                               SEC_ENG_SE_SHA_0_HASH_L_6
#define SEC_ENG_SE_SHA_0_HASH_L_6_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_L_6_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_L_6_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_L_6_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_6_POS)
#define SEC_ENG_SE_SHA_0_HASH_L_6_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_L_6_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_6_POS))

/* 0x2C : se_sha_0_hash_l_7 */
#define SEC_ENG_SE_SHA_0_HASH_L_7_OFFSET                        (0x2C)
#define SEC_ENG_SE_SHA_0_HASH_L_7                               SEC_ENG_SE_SHA_0_HASH_L_7
#define SEC_ENG_SE_SHA_0_HASH_L_7_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_L_7_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_L_7_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_L_7_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_7_POS)
#define SEC_ENG_SE_SHA_0_HASH_L_7_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_L_7_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_7_POS))

/* 0x30 : se_sha_0_hash_h_0 */
#define SEC_ENG_SE_SHA_0_HASH_H_0_OFFSET                        (0x30)
#define SEC_ENG_SE_SHA_0_HASH_H_0                               SEC_ENG_SE_SHA_0_HASH_H_0
#define SEC_ENG_SE_SHA_0_HASH_H_0_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_H_0_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_H_0_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_H_0_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_0_POS)
#define SEC_ENG_SE_SHA_0_HASH_H_0_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_H_0_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_0_POS))

/* 0x34 : se_sha_0_hash_h_1 */
#define SEC_ENG_SE_SHA_0_HASH_H_1_OFFSET                        (0x34)
#define SEC_ENG_SE_SHA_0_HASH_H_1                               SEC_ENG_SE_SHA_0_HASH_H_1
#define SEC_ENG_SE_SHA_0_HASH_H_1_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_H_1_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_H_1_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_H_1_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_1_POS)
#define SEC_ENG_SE_SHA_0_HASH_H_1_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_H_1_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_1_POS))

/* 0x38 : se_sha_0_hash_h_2 */
#define SEC_ENG_SE_SHA_0_HASH_H_2_OFFSET                        (0x38)
#define SEC_ENG_SE_SHA_0_HASH_H_2                               SEC_ENG_SE_SHA_0_HASH_H_2
#define SEC_ENG_SE_SHA_0_HASH_H_2_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_H_2_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_H_2_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_H_2_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_2_POS)
#define SEC_ENG_SE_SHA_0_HASH_H_2_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_H_2_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_2_POS))

/* 0x3C : se_sha_0_hash_h_3 */
#define SEC_ENG_SE_SHA_0_HASH_H_3_OFFSET                        (0x3C)
#define SEC_ENG_SE_SHA_0_HASH_H_3                               SEC_ENG_SE_SHA_0_HASH_H_3
#define SEC_ENG_SE_SHA_0_HASH_H_3_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_H_3_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_H_3_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_H_3_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_3_POS)
#define SEC_ENG_SE_SHA_0_HASH_H_3_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_H_3_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_3_POS))

/* 0x40 : se_sha_0_hash_h_4 */
#define SEC_ENG_SE_SHA_0_HASH_H_4_OFFSET                        (0x40)
#define SEC_ENG_SE_SHA_0_HASH_H_4                               SEC_ENG_SE_SHA_0_HASH_H_4
#define SEC_ENG_SE_SHA_0_HASH_H_4_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_H_4_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_H_4_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_H_4_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_4_POS)
#define SEC_ENG_SE_SHA_0_HASH_H_4_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_H_4_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_4_POS))

/* 0x44 : se_sha_0_hash_h_5 */
#define SEC_ENG_SE_SHA_0_HASH_H_5_OFFSET                        (0x44)
#define SEC_ENG_SE_SHA_0_HASH_H_5                               SEC_ENG_SE_SHA_0_HASH_H_5
#define SEC_ENG_SE_SHA_0_HASH_H_5_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_H_5_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_H_5_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_H_5_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_5_POS)
#define SEC_ENG_SE_SHA_0_HASH_H_5_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_H_5_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_5_POS))

/* 0x48 : se_sha_0_hash_h_6 */
#define SEC_ENG_SE_SHA_0_HASH_H_6_OFFSET                        (0x48)
#define SEC_ENG_SE_SHA_0_HASH_H_6                               SEC_ENG_SE_SHA_0_HASH_H_6
#define SEC_ENG_SE_SHA_0_HASH_H_6_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_H_6_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_H_6_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_H_6_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_6_POS)
#define SEC_ENG_SE_SHA_0_HASH_H_6_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_H_6_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_6_POS))

/* 0x4C : se_sha_0_hash_h_7 */
#define SEC_ENG_SE_SHA_0_HASH_H_7_OFFSET                        (0x4C)
#define SEC_ENG_SE_SHA_0_HASH_H_7                               SEC_ENG_SE_SHA_0_HASH_H_7
#define SEC_ENG_SE_SHA_0_HASH_H_7_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_H_7_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_H_7_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_H_7_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_7_POS)
#define SEC_ENG_SE_SHA_0_HASH_H_7_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_H_7_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_7_POS))

/* 0x50 : se_sha_0_link */
#define SEC_ENG_SE_SHA_0_LINK_OFFSET                            (0x50)
#define SEC_ENG_SE_SHA_0_LCA                                    SEC_ENG_SE_SHA_0_LCA
#define SEC_ENG_SE_SHA_0_LCA_POS                                (0U)
#define SEC_ENG_SE_SHA_0_LCA_LEN                                (32U)
#define SEC_ENG_SE_SHA_0_LCA_MSK                                (((1U<<SEC_ENG_SE_SHA_0_LCA_LEN)-1)<<SEC_ENG_SE_SHA_0_LCA_POS)
#define SEC_ENG_SE_SHA_0_LCA_UMSK                               (~(((1U<<SEC_ENG_SE_SHA_0_LCA_LEN)-1)<<SEC_ENG_SE_SHA_0_LCA_POS))

/* 0xFC : se_sha_0_ctrl_prot */
#define SEC_ENG_SE_SHA_0_CTRL_PROT_OFFSET                       (0xFC)
#define SEC_ENG_SE_SHA_PROT_EN                                  SEC_ENG_SE_SHA_PROT_EN
#define SEC_ENG_SE_SHA_PROT_EN_POS                              (0U)
#define SEC_ENG_SE_SHA_PROT_EN_LEN                              (1U)
#define SEC_ENG_SE_SHA_PROT_EN_MSK                              (((1U<<SEC_ENG_SE_SHA_PROT_EN_LEN)-1)<<SEC_ENG_SE_SHA_PROT_EN_POS)
#define SEC_ENG_SE_SHA_PROT_EN_UMSK                             (~(((1U<<SEC_ENG_SE_SHA_PROT_EN_LEN)-1)<<SEC_ENG_SE_SHA_PROT_EN_POS))
#define SEC_ENG_SE_SHA_ID0_EN                                   SEC_ENG_SE_SHA_ID0_EN
#define SEC_ENG_SE_SHA_ID0_EN_POS                               (1U)
#define SEC_ENG_SE_SHA_ID0_EN_LEN                               (1U)
#define SEC_ENG_SE_SHA_ID0_EN_MSK                               (((1U<<SEC_ENG_SE_SHA_ID0_EN_LEN)-1)<<SEC_ENG_SE_SHA_ID0_EN_POS)
#define SEC_ENG_SE_SHA_ID0_EN_UMSK                              (~(((1U<<SEC_ENG_SE_SHA_ID0_EN_LEN)-1)<<SEC_ENG_SE_SHA_ID0_EN_POS))
#define SEC_ENG_SE_SHA_ID1_EN                                   SEC_ENG_SE_SHA_ID1_EN
#define SEC_ENG_SE_SHA_ID1_EN_POS                               (2U)
#define SEC_ENG_SE_SHA_ID1_EN_LEN                               (1U)
#define SEC_ENG_SE_SHA_ID1_EN_MSK                               (((1U<<SEC_ENG_SE_SHA_ID1_EN_LEN)-1)<<SEC_ENG_SE_SHA_ID1_EN_POS)
#define SEC_ENG_SE_SHA_ID1_EN_UMSK                              (~(((1U<<SEC_ENG_SE_SHA_ID1_EN_LEN)-1)<<SEC_ENG_SE_SHA_ID1_EN_POS))

/* 0x100 : se_aes_0_ctrl */
#define SEC_ENG_SE_AES_0_CTRL_OFFSET                            (0x100)
#define SEC_ENG_SE_AES_0_BUSY                                   SEC_ENG_SE_AES_0_BUSY
#define SEC_ENG_SE_AES_0_BUSY_POS                               (0U)
#define SEC_ENG_SE_AES_0_BUSY_LEN                               (1U)
#define SEC_ENG_SE_AES_0_BUSY_MSK                               (((1U<<SEC_ENG_SE_AES_0_BUSY_LEN)-1)<<SEC_ENG_SE_AES_0_BUSY_POS)
#define SEC_ENG_SE_AES_0_BUSY_UMSK                              (~(((1U<<SEC_ENG_SE_AES_0_BUSY_LEN)-1)<<SEC_ENG_SE_AES_0_BUSY_POS))
#define SEC_ENG_SE_AES_0_TRIG_1T                                SEC_ENG_SE_AES_0_TRIG_1T
#define SEC_ENG_SE_AES_0_TRIG_1T_POS                            (1U)
#define SEC_ENG_SE_AES_0_TRIG_1T_LEN                            (1U)
#define SEC_ENG_SE_AES_0_TRIG_1T_MSK                            (((1U<<SEC_ENG_SE_AES_0_TRIG_1T_LEN)-1)<<SEC_ENG_SE_AES_0_TRIG_1T_POS)
#define SEC_ENG_SE_AES_0_TRIG_1T_UMSK                           (~(((1U<<SEC_ENG_SE_AES_0_TRIG_1T_LEN)-1)<<SEC_ENG_SE_AES_0_TRIG_1T_POS))
#define SEC_ENG_SE_AES_0_EN                                     SEC_ENG_SE_AES_0_EN
#define SEC_ENG_SE_AES_0_EN_POS                                 (2U)
#define SEC_ENG_SE_AES_0_EN_LEN                                 (1U)
#define SEC_ENG_SE_AES_0_EN_MSK                                 (((1U<<SEC_ENG_SE_AES_0_EN_LEN)-1)<<SEC_ENG_SE_AES_0_EN_POS)
#define SEC_ENG_SE_AES_0_EN_UMSK                                (~(((1U<<SEC_ENG_SE_AES_0_EN_LEN)-1)<<SEC_ENG_SE_AES_0_EN_POS))
#define SEC_ENG_SE_AES_0_MODE                                   SEC_ENG_SE_AES_0_MODE
#define SEC_ENG_SE_AES_0_MODE_POS                               (3U)
#define SEC_ENG_SE_AES_0_MODE_LEN                               (2U)
#define SEC_ENG_SE_AES_0_MODE_MSK                               (((1U<<SEC_ENG_SE_AES_0_MODE_LEN)-1)<<SEC_ENG_SE_AES_0_MODE_POS)
#define SEC_ENG_SE_AES_0_MODE_UMSK                              (~(((1U<<SEC_ENG_SE_AES_0_MODE_LEN)-1)<<SEC_ENG_SE_AES_0_MODE_POS))
#define SEC_ENG_SE_AES_0_DEC_EN                                 SEC_ENG_SE_AES_0_DEC_EN
#define SEC_ENG_SE_AES_0_DEC_EN_POS                             (5U)
#define SEC_ENG_SE_AES_0_DEC_EN_LEN                             (1U)
#define SEC_ENG_SE_AES_0_DEC_EN_MSK                             (((1U<<SEC_ENG_SE_AES_0_DEC_EN_LEN)-1)<<SEC_ENG_SE_AES_0_DEC_EN_POS)
#define SEC_ENG_SE_AES_0_DEC_EN_UMSK                            (~(((1U<<SEC_ENG_SE_AES_0_DEC_EN_LEN)-1)<<SEC_ENG_SE_AES_0_DEC_EN_POS))
#define SEC_ENG_SE_AES_0_DEC_KEY_SEL                            SEC_ENG_SE_AES_0_DEC_KEY_SEL
#define SEC_ENG_SE_AES_0_DEC_KEY_SEL_POS                        (6U)
#define SEC_ENG_SE_AES_0_DEC_KEY_SEL_LEN                        (1U)
#define SEC_ENG_SE_AES_0_DEC_KEY_SEL_MSK                        (((1U<<SEC_ENG_SE_AES_0_DEC_KEY_SEL_LEN)-1)<<SEC_ENG_SE_AES_0_DEC_KEY_SEL_POS)
#define SEC_ENG_SE_AES_0_DEC_KEY_SEL_UMSK                       (~(((1U<<SEC_ENG_SE_AES_0_DEC_KEY_SEL_LEN)-1)<<SEC_ENG_SE_AES_0_DEC_KEY_SEL_POS))
#define SEC_ENG_SE_AES_0_HW_KEY_EN                              SEC_ENG_SE_AES_0_HW_KEY_EN
#define SEC_ENG_SE_AES_0_HW_KEY_EN_POS                          (7U)
#define SEC_ENG_SE_AES_0_HW_KEY_EN_LEN                          (1U)
#define SEC_ENG_SE_AES_0_HW_KEY_EN_MSK                          (((1U<<SEC_ENG_SE_AES_0_HW_KEY_EN_LEN)-1)<<SEC_ENG_SE_AES_0_HW_KEY_EN_POS)
#define SEC_ENG_SE_AES_0_HW_KEY_EN_UMSK                         (~(((1U<<SEC_ENG_SE_AES_0_HW_KEY_EN_LEN)-1)<<SEC_ENG_SE_AES_0_HW_KEY_EN_POS))
#define SEC_ENG_SE_AES_0_INT                                    SEC_ENG_SE_AES_0_INT
#define SEC_ENG_SE_AES_0_INT_POS                                (8U)
#define SEC_ENG_SE_AES_0_INT_LEN                                (1U)
#define SEC_ENG_SE_AES_0_INT_MSK                                (((1U<<SEC_ENG_SE_AES_0_INT_LEN)-1)<<SEC_ENG_SE_AES_0_INT_POS)
#define SEC_ENG_SE_AES_0_INT_UMSK                               (~(((1U<<SEC_ENG_SE_AES_0_INT_LEN)-1)<<SEC_ENG_SE_AES_0_INT_POS))
#define SEC_ENG_SE_AES_0_INT_CLR_1T                             SEC_ENG_SE_AES_0_INT_CLR_1T
#define SEC_ENG_SE_AES_0_INT_CLR_1T_POS                         (9U)
#define SEC_ENG_SE_AES_0_INT_CLR_1T_LEN                         (1U)
#define SEC_ENG_SE_AES_0_INT_CLR_1T_MSK                         (((1U<<SEC_ENG_SE_AES_0_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_AES_0_INT_CLR_1T_POS)
#define SEC_ENG_SE_AES_0_INT_CLR_1T_UMSK                        (~(((1U<<SEC_ENG_SE_AES_0_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_AES_0_INT_CLR_1T_POS))
#define SEC_ENG_SE_AES_0_INT_SET_1T                             SEC_ENG_SE_AES_0_INT_SET_1T
#define SEC_ENG_SE_AES_0_INT_SET_1T_POS                         (10U)
#define SEC_ENG_SE_AES_0_INT_SET_1T_LEN                         (1U)
#define SEC_ENG_SE_AES_0_INT_SET_1T_MSK                         (((1U<<SEC_ENG_SE_AES_0_INT_SET_1T_LEN)-1)<<SEC_ENG_SE_AES_0_INT_SET_1T_POS)
#define SEC_ENG_SE_AES_0_INT_SET_1T_UMSK                        (~(((1U<<SEC_ENG_SE_AES_0_INT_SET_1T_LEN)-1)<<SEC_ENG_SE_AES_0_INT_SET_1T_POS))
#define SEC_ENG_SE_AES_0_INT_MASK                               SEC_ENG_SE_AES_0_INT_MASK
#define SEC_ENG_SE_AES_0_INT_MASK_POS                           (11U)
#define SEC_ENG_SE_AES_0_INT_MASK_LEN                           (1U)
#define SEC_ENG_SE_AES_0_INT_MASK_MSK                           (((1U<<SEC_ENG_SE_AES_0_INT_MASK_LEN)-1)<<SEC_ENG_SE_AES_0_INT_MASK_POS)
#define SEC_ENG_SE_AES_0_INT_MASK_UMSK                          (~(((1U<<SEC_ENG_SE_AES_0_INT_MASK_LEN)-1)<<SEC_ENG_SE_AES_0_INT_MASK_POS))
#define SEC_ENG_SE_AES_0_BLOCK_MODE                             SEC_ENG_SE_AES_0_BLOCK_MODE
#define SEC_ENG_SE_AES_0_BLOCK_MODE_POS                         (12U)
#define SEC_ENG_SE_AES_0_BLOCK_MODE_LEN                         (2U)
#define SEC_ENG_SE_AES_0_BLOCK_MODE_MSK                         (((1U<<SEC_ENG_SE_AES_0_BLOCK_MODE_LEN)-1)<<SEC_ENG_SE_AES_0_BLOCK_MODE_POS)
#define SEC_ENG_SE_AES_0_BLOCK_MODE_UMSK                        (~(((1U<<SEC_ENG_SE_AES_0_BLOCK_MODE_LEN)-1)<<SEC_ENG_SE_AES_0_BLOCK_MODE_POS))
#define SEC_ENG_SE_AES_0_IV_SEL                                 SEC_ENG_SE_AES_0_IV_SEL
#define SEC_ENG_SE_AES_0_IV_SEL_POS                             (14U)
#define SEC_ENG_SE_AES_0_IV_SEL_LEN                             (1U)
#define SEC_ENG_SE_AES_0_IV_SEL_MSK                             (((1U<<SEC_ENG_SE_AES_0_IV_SEL_LEN)-1)<<SEC_ENG_SE_AES_0_IV_SEL_POS)
#define SEC_ENG_SE_AES_0_IV_SEL_UMSK                            (~(((1U<<SEC_ENG_SE_AES_0_IV_SEL_LEN)-1)<<SEC_ENG_SE_AES_0_IV_SEL_POS))
#define SEC_ENG_SE_AES_0_LINK_MODE                              SEC_ENG_SE_AES_0_LINK_MODE
#define SEC_ENG_SE_AES_0_LINK_MODE_POS                          (15U)
#define SEC_ENG_SE_AES_0_LINK_MODE_LEN                          (1U)
#define SEC_ENG_SE_AES_0_LINK_MODE_MSK                          (((1U<<SEC_ENG_SE_AES_0_LINK_MODE_LEN)-1)<<SEC_ENG_SE_AES_0_LINK_MODE_POS)
#define SEC_ENG_SE_AES_0_LINK_MODE_UMSK                         (~(((1U<<SEC_ENG_SE_AES_0_LINK_MODE_LEN)-1)<<SEC_ENG_SE_AES_0_LINK_MODE_POS))
#define SEC_ENG_SE_AES_0_MSG_LEN                                SEC_ENG_SE_AES_0_MSG_LEN
#define SEC_ENG_SE_AES_0_MSG_LEN_POS                            (16U)
#define SEC_ENG_SE_AES_0_MSG_LEN_LEN                            (16U)
#define SEC_ENG_SE_AES_0_MSG_LEN_MSK                            (((1U<<SEC_ENG_SE_AES_0_MSG_LEN_LEN)-1)<<SEC_ENG_SE_AES_0_MSG_LEN_POS)
#define SEC_ENG_SE_AES_0_MSG_LEN_UMSK                           (~(((1U<<SEC_ENG_SE_AES_0_MSG_LEN_LEN)-1)<<SEC_ENG_SE_AES_0_MSG_LEN_POS))

/* 0x104 : se_aes_0_msa */
#define SEC_ENG_SE_AES_0_MSA_OFFSET                             (0x104)
#define SEC_ENG_SE_AES_0_MSA                                    SEC_ENG_SE_AES_0_MSA
#define SEC_ENG_SE_AES_0_MSA_POS                                (0U)
#define SEC_ENG_SE_AES_0_MSA_LEN                                (32U)
#define SEC_ENG_SE_AES_0_MSA_MSK                                (((1U<<SEC_ENG_SE_AES_0_MSA_LEN)-1)<<SEC_ENG_SE_AES_0_MSA_POS)
#define SEC_ENG_SE_AES_0_MSA_UMSK                               (~(((1U<<SEC_ENG_SE_AES_0_MSA_LEN)-1)<<SEC_ENG_SE_AES_0_MSA_POS))

/* 0x108 : se_aes_0_mda */
#define SEC_ENG_SE_AES_0_MDA_OFFSET                             (0x108)
#define SEC_ENG_SE_AES_0_MDA                                    SEC_ENG_SE_AES_0_MDA
#define SEC_ENG_SE_AES_0_MDA_POS                                (0U)
#define SEC_ENG_SE_AES_0_MDA_LEN                                (32U)
#define SEC_ENG_SE_AES_0_MDA_MSK                                (((1U<<SEC_ENG_SE_AES_0_MDA_LEN)-1)<<SEC_ENG_SE_AES_0_MDA_POS)
#define SEC_ENG_SE_AES_0_MDA_UMSK                               (~(((1U<<SEC_ENG_SE_AES_0_MDA_LEN)-1)<<SEC_ENG_SE_AES_0_MDA_POS))

/* 0x10C : se_aes_0_status */
#define SEC_ENG_SE_AES_0_STATUS_OFFSET                          (0x10C)
#define SEC_ENG_SE_AES_0_STATUS                                 SEC_ENG_SE_AES_0_STATUS
#define SEC_ENG_SE_AES_0_STATUS_POS                             (0U)
#define SEC_ENG_SE_AES_0_STATUS_LEN                             (32U)
#define SEC_ENG_SE_AES_0_STATUS_MSK                             (((1U<<SEC_ENG_SE_AES_0_STATUS_LEN)-1)<<SEC_ENG_SE_AES_0_STATUS_POS)
#define SEC_ENG_SE_AES_0_STATUS_UMSK                            (~(((1U<<SEC_ENG_SE_AES_0_STATUS_LEN)-1)<<SEC_ENG_SE_AES_0_STATUS_POS))

/* 0x110 : se_aes_0_iv_0 */
#define SEC_ENG_SE_AES_0_IV_0_OFFSET                            (0x110)
#define SEC_ENG_SE_AES_0_IV_0                                   SEC_ENG_SE_AES_0_IV_0
#define SEC_ENG_SE_AES_0_IV_0_POS                               (0U)
#define SEC_ENG_SE_AES_0_IV_0_LEN                               (32U)
#define SEC_ENG_SE_AES_0_IV_0_MSK                               (((1U<<SEC_ENG_SE_AES_0_IV_0_LEN)-1)<<SEC_ENG_SE_AES_0_IV_0_POS)
#define SEC_ENG_SE_AES_0_IV_0_UMSK                              (~(((1U<<SEC_ENG_SE_AES_0_IV_0_LEN)-1)<<SEC_ENG_SE_AES_0_IV_0_POS))

/* 0x114 : se_aes_0_iv_1 */
#define SEC_ENG_SE_AES_0_IV_1_OFFSET                            (0x114)
#define SEC_ENG_SE_AES_0_IV_1                                   SEC_ENG_SE_AES_0_IV_1
#define SEC_ENG_SE_AES_0_IV_1_POS                               (0U)
#define SEC_ENG_SE_AES_0_IV_1_LEN                               (32U)
#define SEC_ENG_SE_AES_0_IV_1_MSK                               (((1U<<SEC_ENG_SE_AES_0_IV_1_LEN)-1)<<SEC_ENG_SE_AES_0_IV_1_POS)
#define SEC_ENG_SE_AES_0_IV_1_UMSK                              (~(((1U<<SEC_ENG_SE_AES_0_IV_1_LEN)-1)<<SEC_ENG_SE_AES_0_IV_1_POS))

/* 0x118 : se_aes_0_iv_2 */
#define SEC_ENG_SE_AES_0_IV_2_OFFSET                            (0x118)
#define SEC_ENG_SE_AES_0_IV_2                                   SEC_ENG_SE_AES_0_IV_2
#define SEC_ENG_SE_AES_0_IV_2_POS                               (0U)
#define SEC_ENG_SE_AES_0_IV_2_LEN                               (32U)
#define SEC_ENG_SE_AES_0_IV_2_MSK                               (((1U<<SEC_ENG_SE_AES_0_IV_2_LEN)-1)<<SEC_ENG_SE_AES_0_IV_2_POS)
#define SEC_ENG_SE_AES_0_IV_2_UMSK                              (~(((1U<<SEC_ENG_SE_AES_0_IV_2_LEN)-1)<<SEC_ENG_SE_AES_0_IV_2_POS))

/* 0x11C : se_aes_0_iv_3 */
#define SEC_ENG_SE_AES_0_IV_3_OFFSET                            (0x11C)
#define SEC_ENG_SE_AES_0_IV_3                                   SEC_ENG_SE_AES_0_IV_3
#define SEC_ENG_SE_AES_0_IV_3_POS                               (0U)
#define SEC_ENG_SE_AES_0_IV_3_LEN                               (32U)
#define SEC_ENG_SE_AES_0_IV_3_MSK                               (((1U<<SEC_ENG_SE_AES_0_IV_3_LEN)-1)<<SEC_ENG_SE_AES_0_IV_3_POS)
#define SEC_ENG_SE_AES_0_IV_3_UMSK                              (~(((1U<<SEC_ENG_SE_AES_0_IV_3_LEN)-1)<<SEC_ENG_SE_AES_0_IV_3_POS))

/* 0x120 : se_aes_0_key_0 */
#define SEC_ENG_SE_AES_0_KEY_0_OFFSET                           (0x120)
#define SEC_ENG_SE_AES_0_KEY_0                                  SEC_ENG_SE_AES_0_KEY_0
#define SEC_ENG_SE_AES_0_KEY_0_POS                              (0U)
#define SEC_ENG_SE_AES_0_KEY_0_LEN                              (32U)
#define SEC_ENG_SE_AES_0_KEY_0_MSK                              (((1U<<SEC_ENG_SE_AES_0_KEY_0_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_0_POS)
#define SEC_ENG_SE_AES_0_KEY_0_UMSK                             (~(((1U<<SEC_ENG_SE_AES_0_KEY_0_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_0_POS))

/* 0x124 : se_aes_0_key_1 */
#define SEC_ENG_SE_AES_0_KEY_1_OFFSET                           (0x124)
#define SEC_ENG_SE_AES_0_KEY_1                                  SEC_ENG_SE_AES_0_KEY_1
#define SEC_ENG_SE_AES_0_KEY_1_POS                              (0U)
#define SEC_ENG_SE_AES_0_KEY_1_LEN                              (32U)
#define SEC_ENG_SE_AES_0_KEY_1_MSK                              (((1U<<SEC_ENG_SE_AES_0_KEY_1_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_1_POS)
#define SEC_ENG_SE_AES_0_KEY_1_UMSK                             (~(((1U<<SEC_ENG_SE_AES_0_KEY_1_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_1_POS))

/* 0x128 : se_aes_0_key_2 */
#define SEC_ENG_SE_AES_0_KEY_2_OFFSET                           (0x128)
#define SEC_ENG_SE_AES_0_KEY_2                                  SEC_ENG_SE_AES_0_KEY_2
#define SEC_ENG_SE_AES_0_KEY_2_POS                              (0U)
#define SEC_ENG_SE_AES_0_KEY_2_LEN                              (32U)
#define SEC_ENG_SE_AES_0_KEY_2_MSK                              (((1U<<SEC_ENG_SE_AES_0_KEY_2_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_2_POS)
#define SEC_ENG_SE_AES_0_KEY_2_UMSK                             (~(((1U<<SEC_ENG_SE_AES_0_KEY_2_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_2_POS))

/* 0x12C : se_aes_0_key_3 */
#define SEC_ENG_SE_AES_0_KEY_3_OFFSET                           (0x12C)
#define SEC_ENG_SE_AES_0_KEY_3                                  SEC_ENG_SE_AES_0_KEY_3
#define SEC_ENG_SE_AES_0_KEY_3_POS                              (0U)
#define SEC_ENG_SE_AES_0_KEY_3_LEN                              (32U)
#define SEC_ENG_SE_AES_0_KEY_3_MSK                              (((1U<<SEC_ENG_SE_AES_0_KEY_3_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_3_POS)
#define SEC_ENG_SE_AES_0_KEY_3_UMSK                             (~(((1U<<SEC_ENG_SE_AES_0_KEY_3_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_3_POS))

/* 0x130 : se_aes_0_key_4 */
#define SEC_ENG_SE_AES_0_KEY_4_OFFSET                           (0x130)
#define SEC_ENG_SE_AES_0_KEY_4                                  SEC_ENG_SE_AES_0_KEY_4
#define SEC_ENG_SE_AES_0_KEY_4_POS                              (0U)
#define SEC_ENG_SE_AES_0_KEY_4_LEN                              (32U)
#define SEC_ENG_SE_AES_0_KEY_4_MSK                              (((1U<<SEC_ENG_SE_AES_0_KEY_4_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_4_POS)
#define SEC_ENG_SE_AES_0_KEY_4_UMSK                             (~(((1U<<SEC_ENG_SE_AES_0_KEY_4_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_4_POS))

/* 0x134 : se_aes_0_key_5 */
#define SEC_ENG_SE_AES_0_KEY_5_OFFSET                           (0x134)
#define SEC_ENG_SE_AES_0_KEY_5                                  SEC_ENG_SE_AES_0_KEY_5
#define SEC_ENG_SE_AES_0_KEY_5_POS                              (0U)
#define SEC_ENG_SE_AES_0_KEY_5_LEN                              (32U)
#define SEC_ENG_SE_AES_0_KEY_5_MSK                              (((1U<<SEC_ENG_SE_AES_0_KEY_5_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_5_POS)
#define SEC_ENG_SE_AES_0_KEY_5_UMSK                             (~(((1U<<SEC_ENG_SE_AES_0_KEY_5_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_5_POS))

/* 0x138 : se_aes_0_key_6 */
#define SEC_ENG_SE_AES_0_KEY_6_OFFSET                           (0x138)
#define SEC_ENG_SE_AES_0_KEY_6                                  SEC_ENG_SE_AES_0_KEY_6
#define SEC_ENG_SE_AES_0_KEY_6_POS                              (0U)
#define SEC_ENG_SE_AES_0_KEY_6_LEN                              (32U)
#define SEC_ENG_SE_AES_0_KEY_6_MSK                              (((1U<<SEC_ENG_SE_AES_0_KEY_6_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_6_POS)
#define SEC_ENG_SE_AES_0_KEY_6_UMSK                             (~(((1U<<SEC_ENG_SE_AES_0_KEY_6_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_6_POS))

/* 0x13C : se_aes_0_key_7 */
#define SEC_ENG_SE_AES_0_KEY_7_OFFSET                           (0x13C)
#define SEC_ENG_SE_AES_0_KEY_7                                  SEC_ENG_SE_AES_0_KEY_7
#define SEC_ENG_SE_AES_0_KEY_7_POS                              (0U)
#define SEC_ENG_SE_AES_0_KEY_7_LEN                              (32U)
#define SEC_ENG_SE_AES_0_KEY_7_MSK                              (((1U<<SEC_ENG_SE_AES_0_KEY_7_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_7_POS)
#define SEC_ENG_SE_AES_0_KEY_7_UMSK                             (~(((1U<<SEC_ENG_SE_AES_0_KEY_7_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_7_POS))

/* 0x140 : se_aes_0_key_sel_0 */
#define SEC_ENG_SE_AES_0_KEY_SEL_0_OFFSET                       (0x140)
#define SEC_ENG_SE_AES_0_KEY_SEL_0                              SEC_ENG_SE_AES_0_KEY_SEL_0
#define SEC_ENG_SE_AES_0_KEY_SEL_0_POS                          (0U)
#define SEC_ENG_SE_AES_0_KEY_SEL_0_LEN                          (2U)
#define SEC_ENG_SE_AES_0_KEY_SEL_0_MSK                          (((1U<<SEC_ENG_SE_AES_0_KEY_SEL_0_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_SEL_0_POS)
#define SEC_ENG_SE_AES_0_KEY_SEL_0_UMSK                         (~(((1U<<SEC_ENG_SE_AES_0_KEY_SEL_0_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_SEL_0_POS))

/* 0x144 : se_aes_0_key_sel_1 */
#define SEC_ENG_SE_AES_0_KEY_SEL_1_OFFSET                       (0x144)
#define SEC_ENG_SE_AES_0_KEY_SEL_1                              SEC_ENG_SE_AES_0_KEY_SEL_1
#define SEC_ENG_SE_AES_0_KEY_SEL_1_POS                          (0U)
#define SEC_ENG_SE_AES_0_KEY_SEL_1_LEN                          (2U)
#define SEC_ENG_SE_AES_0_KEY_SEL_1_MSK                          (((1U<<SEC_ENG_SE_AES_0_KEY_SEL_1_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_SEL_1_POS)
#define SEC_ENG_SE_AES_0_KEY_SEL_1_UMSK                         (~(((1U<<SEC_ENG_SE_AES_0_KEY_SEL_1_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_SEL_1_POS))

/* 0x148 : se_aes_0_endian */
#define SEC_ENG_SE_AES_0_ENDIAN_OFFSET                          (0x148)
#define SEC_ENG_SE_AES_0_DOUT_ENDIAN                            SEC_ENG_SE_AES_0_DOUT_ENDIAN
#define SEC_ENG_SE_AES_0_DOUT_ENDIAN_POS                        (0U)
#define SEC_ENG_SE_AES_0_DOUT_ENDIAN_LEN                        (1U)
#define SEC_ENG_SE_AES_0_DOUT_ENDIAN_MSK                        (((1U<<SEC_ENG_SE_AES_0_DOUT_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_0_DOUT_ENDIAN_POS)
#define SEC_ENG_SE_AES_0_DOUT_ENDIAN_UMSK                       (~(((1U<<SEC_ENG_SE_AES_0_DOUT_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_0_DOUT_ENDIAN_POS))
#define SEC_ENG_SE_AES_0_DIN_ENDIAN                             SEC_ENG_SE_AES_0_DIN_ENDIAN
#define SEC_ENG_SE_AES_0_DIN_ENDIAN_POS                         (1U)
#define SEC_ENG_SE_AES_0_DIN_ENDIAN_LEN                         (1U)
#define SEC_ENG_SE_AES_0_DIN_ENDIAN_MSK                         (((1U<<SEC_ENG_SE_AES_0_DIN_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_0_DIN_ENDIAN_POS)
#define SEC_ENG_SE_AES_0_DIN_ENDIAN_UMSK                        (~(((1U<<SEC_ENG_SE_AES_0_DIN_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_0_DIN_ENDIAN_POS))
#define SEC_ENG_SE_AES_0_KEY_ENDIAN                             SEC_ENG_SE_AES_0_KEY_ENDIAN
#define SEC_ENG_SE_AES_0_KEY_ENDIAN_POS                         (2U)
#define SEC_ENG_SE_AES_0_KEY_ENDIAN_LEN                         (1U)
#define SEC_ENG_SE_AES_0_KEY_ENDIAN_MSK                         (((1U<<SEC_ENG_SE_AES_0_KEY_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_ENDIAN_POS)
#define SEC_ENG_SE_AES_0_KEY_ENDIAN_UMSK                        (~(((1U<<SEC_ENG_SE_AES_0_KEY_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_ENDIAN_POS))
#define SEC_ENG_SE_AES_0_IV_ENDIAN                              SEC_ENG_SE_AES_0_IV_ENDIAN
#define SEC_ENG_SE_AES_0_IV_ENDIAN_POS                          (3U)
#define SEC_ENG_SE_AES_0_IV_ENDIAN_LEN                          (1U)
#define SEC_ENG_SE_AES_0_IV_ENDIAN_MSK                          (((1U<<SEC_ENG_SE_AES_0_IV_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_0_IV_ENDIAN_POS)
#define SEC_ENG_SE_AES_0_IV_ENDIAN_UMSK                         (~(((1U<<SEC_ENG_SE_AES_0_IV_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_0_IV_ENDIAN_POS))
#define SEC_ENG_SE_AES_0_CTR_LEN                                SEC_ENG_SE_AES_0_CTR_LEN
#define SEC_ENG_SE_AES_0_CTR_LEN_POS                            (30U)
#define SEC_ENG_SE_AES_0_CTR_LEN_LEN                            (2U)
#define SEC_ENG_SE_AES_0_CTR_LEN_MSK                            (((1U<<SEC_ENG_SE_AES_0_CTR_LEN_LEN)-1)<<SEC_ENG_SE_AES_0_CTR_LEN_POS)
#define SEC_ENG_SE_AES_0_CTR_LEN_UMSK                           (~(((1U<<SEC_ENG_SE_AES_0_CTR_LEN_LEN)-1)<<SEC_ENG_SE_AES_0_CTR_LEN_POS))

/* 0x14C : se_aes_0_sboot */
#define SEC_ENG_SE_AES_0_SBOOT_OFFSET                           (0x14C)
#define SEC_ENG_SE_AES_0_SBOOT_KEY_SEL                          SEC_ENG_SE_AES_0_SBOOT_KEY_SEL
#define SEC_ENG_SE_AES_0_SBOOT_KEY_SEL_POS                      (0U)
#define SEC_ENG_SE_AES_0_SBOOT_KEY_SEL_LEN                      (1U)
#define SEC_ENG_SE_AES_0_SBOOT_KEY_SEL_MSK                      (((1U<<SEC_ENG_SE_AES_0_SBOOT_KEY_SEL_LEN)-1)<<SEC_ENG_SE_AES_0_SBOOT_KEY_SEL_POS)
#define SEC_ENG_SE_AES_0_SBOOT_KEY_SEL_UMSK                     (~(((1U<<SEC_ENG_SE_AES_0_SBOOT_KEY_SEL_LEN)-1)<<SEC_ENG_SE_AES_0_SBOOT_KEY_SEL_POS))

/* 0x150 : se_aes_0_link */
#define SEC_ENG_SE_AES_0_LINK_OFFSET                            (0x150)
#define SEC_ENG_SE_AES_0_LCA                                    SEC_ENG_SE_AES_0_LCA
#define SEC_ENG_SE_AES_0_LCA_POS                                (0U)
#define SEC_ENG_SE_AES_0_LCA_LEN                                (32U)
#define SEC_ENG_SE_AES_0_LCA_MSK                                (((1U<<SEC_ENG_SE_AES_0_LCA_LEN)-1)<<SEC_ENG_SE_AES_0_LCA_POS)
#define SEC_ENG_SE_AES_0_LCA_UMSK                               (~(((1U<<SEC_ENG_SE_AES_0_LCA_LEN)-1)<<SEC_ENG_SE_AES_0_LCA_POS))

/* 0x1FC : se_aes_0_ctrl_prot */
#define SEC_ENG_SE_AES_0_CTRL_PROT_OFFSET                       (0x1FC)
#define SEC_ENG_SE_AES_PROT_EN                                  SEC_ENG_SE_AES_PROT_EN
#define SEC_ENG_SE_AES_PROT_EN_POS                              (0U)
#define SEC_ENG_SE_AES_PROT_EN_LEN                              (1U)
#define SEC_ENG_SE_AES_PROT_EN_MSK                              (((1U<<SEC_ENG_SE_AES_PROT_EN_LEN)-1)<<SEC_ENG_SE_AES_PROT_EN_POS)
#define SEC_ENG_SE_AES_PROT_EN_UMSK                             (~(((1U<<SEC_ENG_SE_AES_PROT_EN_LEN)-1)<<SEC_ENG_SE_AES_PROT_EN_POS))
#define SEC_ENG_SE_AES_ID0_EN                                   SEC_ENG_SE_AES_ID0_EN
#define SEC_ENG_SE_AES_ID0_EN_POS                               (1U)
#define SEC_ENG_SE_AES_ID0_EN_LEN                               (1U)
#define SEC_ENG_SE_AES_ID0_EN_MSK                               (((1U<<SEC_ENG_SE_AES_ID0_EN_LEN)-1)<<SEC_ENG_SE_AES_ID0_EN_POS)
#define SEC_ENG_SE_AES_ID0_EN_UMSK                              (~(((1U<<SEC_ENG_SE_AES_ID0_EN_LEN)-1)<<SEC_ENG_SE_AES_ID0_EN_POS))
#define SEC_ENG_SE_AES_ID1_EN                                   SEC_ENG_SE_AES_ID1_EN
#define SEC_ENG_SE_AES_ID1_EN_POS                               (2U)
#define SEC_ENG_SE_AES_ID1_EN_LEN                               (1U)
#define SEC_ENG_SE_AES_ID1_EN_MSK                               (((1U<<SEC_ENG_SE_AES_ID1_EN_LEN)-1)<<SEC_ENG_SE_AES_ID1_EN_POS)
#define SEC_ENG_SE_AES_ID1_EN_UMSK                              (~(((1U<<SEC_ENG_SE_AES_ID1_EN_LEN)-1)<<SEC_ENG_SE_AES_ID1_EN_POS))

/* 0x200 : se_trng_0_ctrl_0 */
#define SEC_ENG_SE_TRNG_0_CTRL_0_OFFSET                         (0x200)
#define SEC_ENG_SE_TRNG_0_BUSY                                  SEC_ENG_SE_TRNG_0_BUSY
#define SEC_ENG_SE_TRNG_0_BUSY_POS                              (0U)
#define SEC_ENG_SE_TRNG_0_BUSY_LEN                              (1U)
#define SEC_ENG_SE_TRNG_0_BUSY_MSK                              (((1U<<SEC_ENG_SE_TRNG_0_BUSY_LEN)-1)<<SEC_ENG_SE_TRNG_0_BUSY_POS)
#define SEC_ENG_SE_TRNG_0_BUSY_UMSK                             (~(((1U<<SEC_ENG_SE_TRNG_0_BUSY_LEN)-1)<<SEC_ENG_SE_TRNG_0_BUSY_POS))
#define SEC_ENG_SE_TRNG_0_TRIG_1T                               SEC_ENG_SE_TRNG_0_TRIG_1T
#define SEC_ENG_SE_TRNG_0_TRIG_1T_POS                           (1U)
#define SEC_ENG_SE_TRNG_0_TRIG_1T_LEN                           (1U)
#define SEC_ENG_SE_TRNG_0_TRIG_1T_MSK                           (((1U<<SEC_ENG_SE_TRNG_0_TRIG_1T_LEN)-1)<<SEC_ENG_SE_TRNG_0_TRIG_1T_POS)
#define SEC_ENG_SE_TRNG_0_TRIG_1T_UMSK                          (~(((1U<<SEC_ENG_SE_TRNG_0_TRIG_1T_LEN)-1)<<SEC_ENG_SE_TRNG_0_TRIG_1T_POS))
#define SEC_ENG_SE_TRNG_0_EN                                    SEC_ENG_SE_TRNG_0_EN
#define SEC_ENG_SE_TRNG_0_EN_POS                                (2U)
#define SEC_ENG_SE_TRNG_0_EN_LEN                                (1U)
#define SEC_ENG_SE_TRNG_0_EN_MSK                                (((1U<<SEC_ENG_SE_TRNG_0_EN_LEN)-1)<<SEC_ENG_SE_TRNG_0_EN_POS)
#define SEC_ENG_SE_TRNG_0_EN_UMSK                               (~(((1U<<SEC_ENG_SE_TRNG_0_EN_LEN)-1)<<SEC_ENG_SE_TRNG_0_EN_POS))
#define SEC_ENG_SE_TRNG_0_DOUT_CLR_1T                           SEC_ENG_SE_TRNG_0_DOUT_CLR_1T
#define SEC_ENG_SE_TRNG_0_DOUT_CLR_1T_POS                       (3U)
#define SEC_ENG_SE_TRNG_0_DOUT_CLR_1T_LEN                       (1U)
#define SEC_ENG_SE_TRNG_0_DOUT_CLR_1T_MSK                       (((1U<<SEC_ENG_SE_TRNG_0_DOUT_CLR_1T_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_CLR_1T_POS)
#define SEC_ENG_SE_TRNG_0_DOUT_CLR_1T_UMSK                      (~(((1U<<SEC_ENG_SE_TRNG_0_DOUT_CLR_1T_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_CLR_1T_POS))
#define SEC_ENG_SE_TRNG_0_HT_ERROR                              SEC_ENG_SE_TRNG_0_HT_ERROR
#define SEC_ENG_SE_TRNG_0_HT_ERROR_POS                          (4U)
#define SEC_ENG_SE_TRNG_0_HT_ERROR_LEN                          (1U)
#define SEC_ENG_SE_TRNG_0_HT_ERROR_MSK                          (((1U<<SEC_ENG_SE_TRNG_0_HT_ERROR_LEN)-1)<<SEC_ENG_SE_TRNG_0_HT_ERROR_POS)
#define SEC_ENG_SE_TRNG_0_HT_ERROR_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_0_HT_ERROR_LEN)-1)<<SEC_ENG_SE_TRNG_0_HT_ERROR_POS))
#define SEC_ENG_SE_TRNG_0_INT                                   SEC_ENG_SE_TRNG_0_INT
#define SEC_ENG_SE_TRNG_0_INT_POS                               (8U)
#define SEC_ENG_SE_TRNG_0_INT_LEN                               (1U)
#define SEC_ENG_SE_TRNG_0_INT_MSK                               (((1U<<SEC_ENG_SE_TRNG_0_INT_LEN)-1)<<SEC_ENG_SE_TRNG_0_INT_POS)
#define SEC_ENG_SE_TRNG_0_INT_UMSK                              (~(((1U<<SEC_ENG_SE_TRNG_0_INT_LEN)-1)<<SEC_ENG_SE_TRNG_0_INT_POS))
#define SEC_ENG_SE_TRNG_0_INT_CLR_1T                            SEC_ENG_SE_TRNG_0_INT_CLR_1T
#define SEC_ENG_SE_TRNG_0_INT_CLR_1T_POS                        (9U)
#define SEC_ENG_SE_TRNG_0_INT_CLR_1T_LEN                        (1U)
#define SEC_ENG_SE_TRNG_0_INT_CLR_1T_MSK                        (((1U<<SEC_ENG_SE_TRNG_0_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_TRNG_0_INT_CLR_1T_POS)
#define SEC_ENG_SE_TRNG_0_INT_CLR_1T_UMSK                       (~(((1U<<SEC_ENG_SE_TRNG_0_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_TRNG_0_INT_CLR_1T_POS))
#define SEC_ENG_SE_TRNG_0_INT_SET_1T                            SEC_ENG_SE_TRNG_0_INT_SET_1T
#define SEC_ENG_SE_TRNG_0_INT_SET_1T_POS                        (10U)
#define SEC_ENG_SE_TRNG_0_INT_SET_1T_LEN                        (1U)
#define SEC_ENG_SE_TRNG_0_INT_SET_1T_MSK                        (((1U<<SEC_ENG_SE_TRNG_0_INT_SET_1T_LEN)-1)<<SEC_ENG_SE_TRNG_0_INT_SET_1T_POS)
#define SEC_ENG_SE_TRNG_0_INT_SET_1T_UMSK                       (~(((1U<<SEC_ENG_SE_TRNG_0_INT_SET_1T_LEN)-1)<<SEC_ENG_SE_TRNG_0_INT_SET_1T_POS))
#define SEC_ENG_SE_TRNG_0_INT_MASK                              SEC_ENG_SE_TRNG_0_INT_MASK
#define SEC_ENG_SE_TRNG_0_INT_MASK_POS                          (11U)
#define SEC_ENG_SE_TRNG_0_INT_MASK_LEN                          (1U)
#define SEC_ENG_SE_TRNG_0_INT_MASK_MSK                          (((1U<<SEC_ENG_SE_TRNG_0_INT_MASK_LEN)-1)<<SEC_ENG_SE_TRNG_0_INT_MASK_POS)
#define SEC_ENG_SE_TRNG_0_INT_MASK_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_0_INT_MASK_LEN)-1)<<SEC_ENG_SE_TRNG_0_INT_MASK_POS))
#define SEC_ENG_SE_TRNG_0_MANUAL_FUN_SEL                        SEC_ENG_SE_TRNG_0_MANUAL_FUN_SEL
#define SEC_ENG_SE_TRNG_0_MANUAL_FUN_SEL_POS                    (13U)
#define SEC_ENG_SE_TRNG_0_MANUAL_FUN_SEL_LEN                    (1U)
#define SEC_ENG_SE_TRNG_0_MANUAL_FUN_SEL_MSK                    (((1U<<SEC_ENG_SE_TRNG_0_MANUAL_FUN_SEL_LEN)-1)<<SEC_ENG_SE_TRNG_0_MANUAL_FUN_SEL_POS)
#define SEC_ENG_SE_TRNG_0_MANUAL_FUN_SEL_UMSK                   (~(((1U<<SEC_ENG_SE_TRNG_0_MANUAL_FUN_SEL_LEN)-1)<<SEC_ENG_SE_TRNG_0_MANUAL_FUN_SEL_POS))
#define SEC_ENG_SE_TRNG_0_MANUAL_RESEED                         SEC_ENG_SE_TRNG_0_MANUAL_RESEED
#define SEC_ENG_SE_TRNG_0_MANUAL_RESEED_POS                     (14U)
#define SEC_ENG_SE_TRNG_0_MANUAL_RESEED_LEN                     (1U)
#define SEC_ENG_SE_TRNG_0_MANUAL_RESEED_MSK                     (((1U<<SEC_ENG_SE_TRNG_0_MANUAL_RESEED_LEN)-1)<<SEC_ENG_SE_TRNG_0_MANUAL_RESEED_POS)
#define SEC_ENG_SE_TRNG_0_MANUAL_RESEED_UMSK                    (~(((1U<<SEC_ENG_SE_TRNG_0_MANUAL_RESEED_LEN)-1)<<SEC_ENG_SE_TRNG_0_MANUAL_RESEED_POS))
#define SEC_ENG_SE_TRNG_0_MANUAL_EN                             SEC_ENG_SE_TRNG_0_MANUAL_EN
#define SEC_ENG_SE_TRNG_0_MANUAL_EN_POS                         (15U)
#define SEC_ENG_SE_TRNG_0_MANUAL_EN_LEN                         (1U)
#define SEC_ENG_SE_TRNG_0_MANUAL_EN_MSK                         (((1U<<SEC_ENG_SE_TRNG_0_MANUAL_EN_LEN)-1)<<SEC_ENG_SE_TRNG_0_MANUAL_EN_POS)
#define SEC_ENG_SE_TRNG_0_MANUAL_EN_UMSK                        (~(((1U<<SEC_ENG_SE_TRNG_0_MANUAL_EN_LEN)-1)<<SEC_ENG_SE_TRNG_0_MANUAL_EN_POS))

/* 0x204 : se_trng_0_status */
#define SEC_ENG_SE_TRNG_0_STATUS_OFFSET                         (0x204)
#define SEC_ENG_SE_TRNG_0_STATUS                                SEC_ENG_SE_TRNG_0_STATUS
#define SEC_ENG_SE_TRNG_0_STATUS_POS                            (0U)
#define SEC_ENG_SE_TRNG_0_STATUS_LEN                            (32U)
#define SEC_ENG_SE_TRNG_0_STATUS_MSK                            (((1U<<SEC_ENG_SE_TRNG_0_STATUS_LEN)-1)<<SEC_ENG_SE_TRNG_0_STATUS_POS)
#define SEC_ENG_SE_TRNG_0_STATUS_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_0_STATUS_LEN)-1)<<SEC_ENG_SE_TRNG_0_STATUS_POS))

/* 0x208 : se_trng_0_dout_0 */
#define SEC_ENG_SE_TRNG_0_DOUT_0_OFFSET                         (0x208)
#define SEC_ENG_SE_TRNG_0_DOUT_0                                SEC_ENG_SE_TRNG_0_DOUT_0
#define SEC_ENG_SE_TRNG_0_DOUT_0_POS                            (0U)
#define SEC_ENG_SE_TRNG_0_DOUT_0_LEN                            (32U)
#define SEC_ENG_SE_TRNG_0_DOUT_0_MSK                            (((1U<<SEC_ENG_SE_TRNG_0_DOUT_0_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_0_POS)
#define SEC_ENG_SE_TRNG_0_DOUT_0_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_0_DOUT_0_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_0_POS))

/* 0x20C : se_trng_0_dout_1 */
#define SEC_ENG_SE_TRNG_0_DOUT_1_OFFSET                         (0x20C)
#define SEC_ENG_SE_TRNG_0_DOUT_1                                SEC_ENG_SE_TRNG_0_DOUT_1
#define SEC_ENG_SE_TRNG_0_DOUT_1_POS                            (0U)
#define SEC_ENG_SE_TRNG_0_DOUT_1_LEN                            (32U)
#define SEC_ENG_SE_TRNG_0_DOUT_1_MSK                            (((1U<<SEC_ENG_SE_TRNG_0_DOUT_1_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_1_POS)
#define SEC_ENG_SE_TRNG_0_DOUT_1_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_0_DOUT_1_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_1_POS))

/* 0x210 : se_trng_0_dout_2 */
#define SEC_ENG_SE_TRNG_0_DOUT_2_OFFSET                         (0x210)
#define SEC_ENG_SE_TRNG_0_DOUT_2                                SEC_ENG_SE_TRNG_0_DOUT_2
#define SEC_ENG_SE_TRNG_0_DOUT_2_POS                            (0U)
#define SEC_ENG_SE_TRNG_0_DOUT_2_LEN                            (32U)
#define SEC_ENG_SE_TRNG_0_DOUT_2_MSK                            (((1U<<SEC_ENG_SE_TRNG_0_DOUT_2_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_2_POS)
#define SEC_ENG_SE_TRNG_0_DOUT_2_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_0_DOUT_2_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_2_POS))

/* 0x214 : se_trng_0_dout_3 */
#define SEC_ENG_SE_TRNG_0_DOUT_3_OFFSET                         (0x214)
#define SEC_ENG_SE_TRNG_0_DOUT_3                                SEC_ENG_SE_TRNG_0_DOUT_3
#define SEC_ENG_SE_TRNG_0_DOUT_3_POS                            (0U)
#define SEC_ENG_SE_TRNG_0_DOUT_3_LEN                            (32U)
#define SEC_ENG_SE_TRNG_0_DOUT_3_MSK                            (((1U<<SEC_ENG_SE_TRNG_0_DOUT_3_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_3_POS)
#define SEC_ENG_SE_TRNG_0_DOUT_3_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_0_DOUT_3_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_3_POS))

/* 0x218 : se_trng_0_dout_4 */
#define SEC_ENG_SE_TRNG_0_DOUT_4_OFFSET                         (0x218)
#define SEC_ENG_SE_TRNG_0_DOUT_4                                SEC_ENG_SE_TRNG_0_DOUT_4
#define SEC_ENG_SE_TRNG_0_DOUT_4_POS                            (0U)
#define SEC_ENG_SE_TRNG_0_DOUT_4_LEN                            (32U)
#define SEC_ENG_SE_TRNG_0_DOUT_4_MSK                            (((1U<<SEC_ENG_SE_TRNG_0_DOUT_4_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_4_POS)
#define SEC_ENG_SE_TRNG_0_DOUT_4_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_0_DOUT_4_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_4_POS))

/* 0x21C : se_trng_0_dout_5 */
#define SEC_ENG_SE_TRNG_0_DOUT_5_OFFSET                         (0x21C)
#define SEC_ENG_SE_TRNG_0_DOUT_5                                SEC_ENG_SE_TRNG_0_DOUT_5
#define SEC_ENG_SE_TRNG_0_DOUT_5_POS                            (0U)
#define SEC_ENG_SE_TRNG_0_DOUT_5_LEN                            (32U)
#define SEC_ENG_SE_TRNG_0_DOUT_5_MSK                            (((1U<<SEC_ENG_SE_TRNG_0_DOUT_5_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_5_POS)
#define SEC_ENG_SE_TRNG_0_DOUT_5_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_0_DOUT_5_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_5_POS))

/* 0x220 : se_trng_0_dout_6 */
#define SEC_ENG_SE_TRNG_0_DOUT_6_OFFSET                         (0x220)
#define SEC_ENG_SE_TRNG_0_DOUT_6                                SEC_ENG_SE_TRNG_0_DOUT_6
#define SEC_ENG_SE_TRNG_0_DOUT_6_POS                            (0U)
#define SEC_ENG_SE_TRNG_0_DOUT_6_LEN                            (32U)
#define SEC_ENG_SE_TRNG_0_DOUT_6_MSK                            (((1U<<SEC_ENG_SE_TRNG_0_DOUT_6_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_6_POS)
#define SEC_ENG_SE_TRNG_0_DOUT_6_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_0_DOUT_6_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_6_POS))

/* 0x224 : se_trng_0_dout_7 */
#define SEC_ENG_SE_TRNG_0_DOUT_7_OFFSET                         (0x224)
#define SEC_ENG_SE_TRNG_0_DOUT_7                                SEC_ENG_SE_TRNG_0_DOUT_7
#define SEC_ENG_SE_TRNG_0_DOUT_7_POS                            (0U)
#define SEC_ENG_SE_TRNG_0_DOUT_7_LEN                            (32U)
#define SEC_ENG_SE_TRNG_0_DOUT_7_MSK                            (((1U<<SEC_ENG_SE_TRNG_0_DOUT_7_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_7_POS)
#define SEC_ENG_SE_TRNG_0_DOUT_7_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_0_DOUT_7_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_7_POS))

/* 0x228 : se_trng_0_test */
#define SEC_ENG_SE_TRNG_0_TEST_OFFSET                           (0x228)
#define SEC_ENG_SE_TRNG_0_TEST_EN                               SEC_ENG_SE_TRNG_0_TEST_EN
#define SEC_ENG_SE_TRNG_0_TEST_EN_POS                           (0U)
#define SEC_ENG_SE_TRNG_0_TEST_EN_LEN                           (1U)
#define SEC_ENG_SE_TRNG_0_TEST_EN_MSK                           (((1U<<SEC_ENG_SE_TRNG_0_TEST_EN_LEN)-1)<<SEC_ENG_SE_TRNG_0_TEST_EN_POS)
#define SEC_ENG_SE_TRNG_0_TEST_EN_UMSK                          (~(((1U<<SEC_ENG_SE_TRNG_0_TEST_EN_LEN)-1)<<SEC_ENG_SE_TRNG_0_TEST_EN_POS))
#define SEC_ENG_SE_TRNG_0_CP_TEST_EN                            SEC_ENG_SE_TRNG_0_CP_TEST_EN
#define SEC_ENG_SE_TRNG_0_CP_TEST_EN_POS                        (1U)
#define SEC_ENG_SE_TRNG_0_CP_TEST_EN_LEN                        (1U)
#define SEC_ENG_SE_TRNG_0_CP_TEST_EN_MSK                        (((1U<<SEC_ENG_SE_TRNG_0_CP_TEST_EN_LEN)-1)<<SEC_ENG_SE_TRNG_0_CP_TEST_EN_POS)
#define SEC_ENG_SE_TRNG_0_CP_TEST_EN_UMSK                       (~(((1U<<SEC_ENG_SE_TRNG_0_CP_TEST_EN_LEN)-1)<<SEC_ENG_SE_TRNG_0_CP_TEST_EN_POS))
#define SEC_ENG_SE_TRNG_0_CP_BYPASS                             SEC_ENG_SE_TRNG_0_CP_BYPASS
#define SEC_ENG_SE_TRNG_0_CP_BYPASS_POS                         (2U)
#define SEC_ENG_SE_TRNG_0_CP_BYPASS_LEN                         (1U)
#define SEC_ENG_SE_TRNG_0_CP_BYPASS_MSK                         (((1U<<SEC_ENG_SE_TRNG_0_CP_BYPASS_LEN)-1)<<SEC_ENG_SE_TRNG_0_CP_BYPASS_POS)
#define SEC_ENG_SE_TRNG_0_CP_BYPASS_UMSK                        (~(((1U<<SEC_ENG_SE_TRNG_0_CP_BYPASS_LEN)-1)<<SEC_ENG_SE_TRNG_0_CP_BYPASS_POS))
#define SEC_ENG_SE_TRNG_0_HT_DIS                                SEC_ENG_SE_TRNG_0_HT_DIS
#define SEC_ENG_SE_TRNG_0_HT_DIS_POS                            (3U)
#define SEC_ENG_SE_TRNG_0_HT_DIS_LEN                            (1U)
#define SEC_ENG_SE_TRNG_0_HT_DIS_MSK                            (((1U<<SEC_ENG_SE_TRNG_0_HT_DIS_LEN)-1)<<SEC_ENG_SE_TRNG_0_HT_DIS_POS)
#define SEC_ENG_SE_TRNG_0_HT_DIS_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_0_HT_DIS_LEN)-1)<<SEC_ENG_SE_TRNG_0_HT_DIS_POS))
#define SEC_ENG_SE_TRNG_0_HT_ALARM_N                            SEC_ENG_SE_TRNG_0_HT_ALARM_N
#define SEC_ENG_SE_TRNG_0_HT_ALARM_N_POS                        (4U)
#define SEC_ENG_SE_TRNG_0_HT_ALARM_N_LEN                        (8U)
#define SEC_ENG_SE_TRNG_0_HT_ALARM_N_MSK                        (((1U<<SEC_ENG_SE_TRNG_0_HT_ALARM_N_LEN)-1)<<SEC_ENG_SE_TRNG_0_HT_ALARM_N_POS)
#define SEC_ENG_SE_TRNG_0_HT_ALARM_N_UMSK                       (~(((1U<<SEC_ENG_SE_TRNG_0_HT_ALARM_N_LEN)-1)<<SEC_ENG_SE_TRNG_0_HT_ALARM_N_POS))

/* 0x22C : se_trng_0_ctrl_1 */
#define SEC_ENG_SE_TRNG_0_CTRL_1_OFFSET                         (0x22C)
#define SEC_ENG_SE_TRNG_0_RESEED_N_LSB                          SEC_ENG_SE_TRNG_0_RESEED_N_LSB
#define SEC_ENG_SE_TRNG_0_RESEED_N_LSB_POS                      (0U)
#define SEC_ENG_SE_TRNG_0_RESEED_N_LSB_LEN                      (32U)
#define SEC_ENG_SE_TRNG_0_RESEED_N_LSB_MSK                      (((1U<<SEC_ENG_SE_TRNG_0_RESEED_N_LSB_LEN)-1)<<SEC_ENG_SE_TRNG_0_RESEED_N_LSB_POS)
#define SEC_ENG_SE_TRNG_0_RESEED_N_LSB_UMSK                     (~(((1U<<SEC_ENG_SE_TRNG_0_RESEED_N_LSB_LEN)-1)<<SEC_ENG_SE_TRNG_0_RESEED_N_LSB_POS))

/* 0x230 : se_trng_0_ctrl_2 */
#define SEC_ENG_SE_TRNG_0_CTRL_2_OFFSET                         (0x230)
#define SEC_ENG_SE_TRNG_0_RESEED_N_MSB                          SEC_ENG_SE_TRNG_0_RESEED_N_MSB
#define SEC_ENG_SE_TRNG_0_RESEED_N_MSB_POS                      (0U)
#define SEC_ENG_SE_TRNG_0_RESEED_N_MSB_LEN                      (16U)
#define SEC_ENG_SE_TRNG_0_RESEED_N_MSB_MSK                      (((1U<<SEC_ENG_SE_TRNG_0_RESEED_N_MSB_LEN)-1)<<SEC_ENG_SE_TRNG_0_RESEED_N_MSB_POS)
#define SEC_ENG_SE_TRNG_0_RESEED_N_MSB_UMSK                     (~(((1U<<SEC_ENG_SE_TRNG_0_RESEED_N_MSB_LEN)-1)<<SEC_ENG_SE_TRNG_0_RESEED_N_MSB_POS))

/* 0x234 : se_trng_0_ctrl_3 */
#define SEC_ENG_SE_TRNG_0_CTRL_3_OFFSET                         (0x234)
#define SEC_ENG_SE_TRNG_0_CP_RATIO                              SEC_ENG_SE_TRNG_0_CP_RATIO
#define SEC_ENG_SE_TRNG_0_CP_RATIO_POS                          (0U)
#define SEC_ENG_SE_TRNG_0_CP_RATIO_LEN                          (8U)
#define SEC_ENG_SE_TRNG_0_CP_RATIO_MSK                          (((1U<<SEC_ENG_SE_TRNG_0_CP_RATIO_LEN)-1)<<SEC_ENG_SE_TRNG_0_CP_RATIO_POS)
#define SEC_ENG_SE_TRNG_0_CP_RATIO_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_0_CP_RATIO_LEN)-1)<<SEC_ENG_SE_TRNG_0_CP_RATIO_POS))
#define SEC_ENG_SE_TRNG_0_HT_RCT_C                              SEC_ENG_SE_TRNG_0_HT_RCT_C
#define SEC_ENG_SE_TRNG_0_HT_RCT_C_POS                          (8U)
#define SEC_ENG_SE_TRNG_0_HT_RCT_C_LEN                          (8U)
#define SEC_ENG_SE_TRNG_0_HT_RCT_C_MSK                          (((1U<<SEC_ENG_SE_TRNG_0_HT_RCT_C_LEN)-1)<<SEC_ENG_SE_TRNG_0_HT_RCT_C_POS)
#define SEC_ENG_SE_TRNG_0_HT_RCT_C_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_0_HT_RCT_C_LEN)-1)<<SEC_ENG_SE_TRNG_0_HT_RCT_C_POS))
#define SEC_ENG_SE_TRNG_0_HT_APT_C                              SEC_ENG_SE_TRNG_0_HT_APT_C
#define SEC_ENG_SE_TRNG_0_HT_APT_C_POS                          (16U)
#define SEC_ENG_SE_TRNG_0_HT_APT_C_LEN                          (10U)
#define SEC_ENG_SE_TRNG_0_HT_APT_C_MSK                          (((1U<<SEC_ENG_SE_TRNG_0_HT_APT_C_LEN)-1)<<SEC_ENG_SE_TRNG_0_HT_APT_C_POS)
#define SEC_ENG_SE_TRNG_0_HT_APT_C_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_0_HT_APT_C_LEN)-1)<<SEC_ENG_SE_TRNG_0_HT_APT_C_POS))
#define SEC_ENG_SE_TRNG_0_HT_OD_EN                              SEC_ENG_SE_TRNG_0_HT_OD_EN
#define SEC_ENG_SE_TRNG_0_HT_OD_EN_POS                          (26U)
#define SEC_ENG_SE_TRNG_0_HT_OD_EN_LEN                          (1U)
#define SEC_ENG_SE_TRNG_0_HT_OD_EN_MSK                          (((1U<<SEC_ENG_SE_TRNG_0_HT_OD_EN_LEN)-1)<<SEC_ENG_SE_TRNG_0_HT_OD_EN_POS)
#define SEC_ENG_SE_TRNG_0_HT_OD_EN_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_0_HT_OD_EN_LEN)-1)<<SEC_ENG_SE_TRNG_0_HT_OD_EN_POS))
#define SEC_ENG_SE_TRNG_0_ROSC_DIS                              SEC_ENG_SE_TRNG_0_ROSC_DIS
#define SEC_ENG_SE_TRNG_0_ROSC_DIS_POS                          (31U)
#define SEC_ENG_SE_TRNG_0_ROSC_DIS_LEN                          (1U)
#define SEC_ENG_SE_TRNG_0_ROSC_DIS_MSK                          (((1U<<SEC_ENG_SE_TRNG_0_ROSC_DIS_LEN)-1)<<SEC_ENG_SE_TRNG_0_ROSC_DIS_POS)
#define SEC_ENG_SE_TRNG_0_ROSC_DIS_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_0_ROSC_DIS_LEN)-1)<<SEC_ENG_SE_TRNG_0_ROSC_DIS_POS))

/* 0x240 : se_trng_0_test_out_0 */
#define SEC_ENG_SE_TRNG_0_TEST_OUT_0_OFFSET                     (0x240)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_0                            SEC_ENG_SE_TRNG_0_TEST_OUT_0
#define SEC_ENG_SE_TRNG_0_TEST_OUT_0_POS                        (0U)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_0_LEN                        (32U)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_0_MSK                        (((1U<<SEC_ENG_SE_TRNG_0_TEST_OUT_0_LEN)-1)<<SEC_ENG_SE_TRNG_0_TEST_OUT_0_POS)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_0_UMSK                       (~(((1U<<SEC_ENG_SE_TRNG_0_TEST_OUT_0_LEN)-1)<<SEC_ENG_SE_TRNG_0_TEST_OUT_0_POS))

/* 0x244 : se_trng_0_test_out_1 */
#define SEC_ENG_SE_TRNG_0_TEST_OUT_1_OFFSET                     (0x244)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_1                            SEC_ENG_SE_TRNG_0_TEST_OUT_1
#define SEC_ENG_SE_TRNG_0_TEST_OUT_1_POS                        (0U)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_1_LEN                        (32U)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_1_MSK                        (((1U<<SEC_ENG_SE_TRNG_0_TEST_OUT_1_LEN)-1)<<SEC_ENG_SE_TRNG_0_TEST_OUT_1_POS)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_1_UMSK                       (~(((1U<<SEC_ENG_SE_TRNG_0_TEST_OUT_1_LEN)-1)<<SEC_ENG_SE_TRNG_0_TEST_OUT_1_POS))

/* 0x248 : se_trng_0_test_out_2 */
#define SEC_ENG_SE_TRNG_0_TEST_OUT_2_OFFSET                     (0x248)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_2                            SEC_ENG_SE_TRNG_0_TEST_OUT_2
#define SEC_ENG_SE_TRNG_0_TEST_OUT_2_POS                        (0U)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_2_LEN                        (32U)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_2_MSK                        (((1U<<SEC_ENG_SE_TRNG_0_TEST_OUT_2_LEN)-1)<<SEC_ENG_SE_TRNG_0_TEST_OUT_2_POS)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_2_UMSK                       (~(((1U<<SEC_ENG_SE_TRNG_0_TEST_OUT_2_LEN)-1)<<SEC_ENG_SE_TRNG_0_TEST_OUT_2_POS))

/* 0x24C : se_trng_0_test_out_3 */
#define SEC_ENG_SE_TRNG_0_TEST_OUT_3_OFFSET                     (0x24C)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_3                            SEC_ENG_SE_TRNG_0_TEST_OUT_3
#define SEC_ENG_SE_TRNG_0_TEST_OUT_3_POS                        (0U)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_3_LEN                        (32U)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_3_MSK                        (((1U<<SEC_ENG_SE_TRNG_0_TEST_OUT_3_LEN)-1)<<SEC_ENG_SE_TRNG_0_TEST_OUT_3_POS)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_3_UMSK                       (~(((1U<<SEC_ENG_SE_TRNG_0_TEST_OUT_3_LEN)-1)<<SEC_ENG_SE_TRNG_0_TEST_OUT_3_POS))

/* 0x2FC : se_trng_0_ctrl_prot */
#define SEC_ENG_SE_TRNG_0_CTRL_PROT_OFFSET                      (0x2FC)
#define SEC_ENG_SE_TRNG_PROT_EN                                 SEC_ENG_SE_TRNG_PROT_EN
#define SEC_ENG_SE_TRNG_PROT_EN_POS                             (0U)
#define SEC_ENG_SE_TRNG_PROT_EN_LEN                             (1U)
#define SEC_ENG_SE_TRNG_PROT_EN_MSK                             (((1U<<SEC_ENG_SE_TRNG_PROT_EN_LEN)-1)<<SEC_ENG_SE_TRNG_PROT_EN_POS)
#define SEC_ENG_SE_TRNG_PROT_EN_UMSK                            (~(((1U<<SEC_ENG_SE_TRNG_PROT_EN_LEN)-1)<<SEC_ENG_SE_TRNG_PROT_EN_POS))
#define SEC_ENG_SE_TRNG_ID0_EN                                  SEC_ENG_SE_TRNG_ID0_EN
#define SEC_ENG_SE_TRNG_ID0_EN_POS                              (1U)
#define SEC_ENG_SE_TRNG_ID0_EN_LEN                              (1U)
#define SEC_ENG_SE_TRNG_ID0_EN_MSK                              (((1U<<SEC_ENG_SE_TRNG_ID0_EN_LEN)-1)<<SEC_ENG_SE_TRNG_ID0_EN_POS)
#define SEC_ENG_SE_TRNG_ID0_EN_UMSK                             (~(((1U<<SEC_ENG_SE_TRNG_ID0_EN_LEN)-1)<<SEC_ENG_SE_TRNG_ID0_EN_POS))
#define SEC_ENG_SE_TRNG_ID1_EN                                  SEC_ENG_SE_TRNG_ID1_EN
#define SEC_ENG_SE_TRNG_ID1_EN_POS                              (2U)
#define SEC_ENG_SE_TRNG_ID1_EN_LEN                              (1U)
#define SEC_ENG_SE_TRNG_ID1_EN_MSK                              (((1U<<SEC_ENG_SE_TRNG_ID1_EN_LEN)-1)<<SEC_ENG_SE_TRNG_ID1_EN_POS)
#define SEC_ENG_SE_TRNG_ID1_EN_UMSK                             (~(((1U<<SEC_ENG_SE_TRNG_ID1_EN_LEN)-1)<<SEC_ENG_SE_TRNG_ID1_EN_POS))

/* 0x300 : se_pka_0_ctrl_0 */
#define SEC_ENG_SE_PKA_0_CTRL_0_OFFSET                          (0x300)
#define SEC_ENG_SE_PKA_0_DONE                                   SEC_ENG_SE_PKA_0_DONE
#define SEC_ENG_SE_PKA_0_DONE_POS                               (0U)
#define SEC_ENG_SE_PKA_0_DONE_LEN                               (1U)
#define SEC_ENG_SE_PKA_0_DONE_MSK                               (((1U<<SEC_ENG_SE_PKA_0_DONE_LEN)-1)<<SEC_ENG_SE_PKA_0_DONE_POS)
#define SEC_ENG_SE_PKA_0_DONE_UMSK                              (~(((1U<<SEC_ENG_SE_PKA_0_DONE_LEN)-1)<<SEC_ENG_SE_PKA_0_DONE_POS))
#define SEC_ENG_SE_PKA_0_DONE_CLR_1T                            SEC_ENG_SE_PKA_0_DONE_CLR_1T
#define SEC_ENG_SE_PKA_0_DONE_CLR_1T_POS                        (1U)
#define SEC_ENG_SE_PKA_0_DONE_CLR_1T_LEN                        (1U)
#define SEC_ENG_SE_PKA_0_DONE_CLR_1T_MSK                        (((1U<<SEC_ENG_SE_PKA_0_DONE_CLR_1T_LEN)-1)<<SEC_ENG_SE_PKA_0_DONE_CLR_1T_POS)
#define SEC_ENG_SE_PKA_0_DONE_CLR_1T_UMSK                       (~(((1U<<SEC_ENG_SE_PKA_0_DONE_CLR_1T_LEN)-1)<<SEC_ENG_SE_PKA_0_DONE_CLR_1T_POS))
#define SEC_ENG_SE_PKA_0_BUSY                                   SEC_ENG_SE_PKA_0_BUSY
#define SEC_ENG_SE_PKA_0_BUSY_POS                               (2U)
#define SEC_ENG_SE_PKA_0_BUSY_LEN                               (1U)
#define SEC_ENG_SE_PKA_0_BUSY_MSK                               (((1U<<SEC_ENG_SE_PKA_0_BUSY_LEN)-1)<<SEC_ENG_SE_PKA_0_BUSY_POS)
#define SEC_ENG_SE_PKA_0_BUSY_UMSK                              (~(((1U<<SEC_ENG_SE_PKA_0_BUSY_LEN)-1)<<SEC_ENG_SE_PKA_0_BUSY_POS))
#define SEC_ENG_SE_PKA_0_EN                                     SEC_ENG_SE_PKA_0_EN
#define SEC_ENG_SE_PKA_0_EN_POS                                 (3U)
#define SEC_ENG_SE_PKA_0_EN_LEN                                 (1U)
#define SEC_ENG_SE_PKA_0_EN_MSK                                 (((1U<<SEC_ENG_SE_PKA_0_EN_LEN)-1)<<SEC_ENG_SE_PKA_0_EN_POS)
#define SEC_ENG_SE_PKA_0_EN_UMSK                                (~(((1U<<SEC_ENG_SE_PKA_0_EN_LEN)-1)<<SEC_ENG_SE_PKA_0_EN_POS))
#define SEC_ENG_SE_PKA_0_PROT_MD                                SEC_ENG_SE_PKA_0_PROT_MD
#define SEC_ENG_SE_PKA_0_PROT_MD_POS                            (4U)
#define SEC_ENG_SE_PKA_0_PROT_MD_LEN                            (4U)
#define SEC_ENG_SE_PKA_0_PROT_MD_MSK                            (((1U<<SEC_ENG_SE_PKA_0_PROT_MD_LEN)-1)<<SEC_ENG_SE_PKA_0_PROT_MD_POS)
#define SEC_ENG_SE_PKA_0_PROT_MD_UMSK                           (~(((1U<<SEC_ENG_SE_PKA_0_PROT_MD_LEN)-1)<<SEC_ENG_SE_PKA_0_PROT_MD_POS))
#define SEC_ENG_SE_PKA_0_INT                                    SEC_ENG_SE_PKA_0_INT
#define SEC_ENG_SE_PKA_0_INT_POS                                (8U)
#define SEC_ENG_SE_PKA_0_INT_LEN                                (1U)
#define SEC_ENG_SE_PKA_0_INT_MSK                                (((1U<<SEC_ENG_SE_PKA_0_INT_LEN)-1)<<SEC_ENG_SE_PKA_0_INT_POS)
#define SEC_ENG_SE_PKA_0_INT_UMSK                               (~(((1U<<SEC_ENG_SE_PKA_0_INT_LEN)-1)<<SEC_ENG_SE_PKA_0_INT_POS))
#define SEC_ENG_SE_PKA_0_INT_CLR_1T                             SEC_ENG_SE_PKA_0_INT_CLR_1T
#define SEC_ENG_SE_PKA_0_INT_CLR_1T_POS                         (9U)
#define SEC_ENG_SE_PKA_0_INT_CLR_1T_LEN                         (1U)
#define SEC_ENG_SE_PKA_0_INT_CLR_1T_MSK                         (((1U<<SEC_ENG_SE_PKA_0_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_PKA_0_INT_CLR_1T_POS)
#define SEC_ENG_SE_PKA_0_INT_CLR_1T_UMSK                        (~(((1U<<SEC_ENG_SE_PKA_0_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_PKA_0_INT_CLR_1T_POS))
#define SEC_ENG_SE_PKA_0_INT_SET                                SEC_ENG_SE_PKA_0_INT_SET
#define SEC_ENG_SE_PKA_0_INT_SET_POS                            (10U)
#define SEC_ENG_SE_PKA_0_INT_SET_LEN                            (1U)
#define SEC_ENG_SE_PKA_0_INT_SET_MSK                            (((1U<<SEC_ENG_SE_PKA_0_INT_SET_LEN)-1)<<SEC_ENG_SE_PKA_0_INT_SET_POS)
#define SEC_ENG_SE_PKA_0_INT_SET_UMSK                           (~(((1U<<SEC_ENG_SE_PKA_0_INT_SET_LEN)-1)<<SEC_ENG_SE_PKA_0_INT_SET_POS))
#define SEC_ENG_SE_PKA_0_INT_MASK                               SEC_ENG_SE_PKA_0_INT_MASK
#define SEC_ENG_SE_PKA_0_INT_MASK_POS                           (11U)
#define SEC_ENG_SE_PKA_0_INT_MASK_LEN                           (1U)
#define SEC_ENG_SE_PKA_0_INT_MASK_MSK                           (((1U<<SEC_ENG_SE_PKA_0_INT_MASK_LEN)-1)<<SEC_ENG_SE_PKA_0_INT_MASK_POS)
#define SEC_ENG_SE_PKA_0_INT_MASK_UMSK                          (~(((1U<<SEC_ENG_SE_PKA_0_INT_MASK_LEN)-1)<<SEC_ENG_SE_PKA_0_INT_MASK_POS))
#define SEC_ENG_SE_PKA_0_ENDIAN                                 SEC_ENG_SE_PKA_0_ENDIAN
#define SEC_ENG_SE_PKA_0_ENDIAN_POS                             (12U)
#define SEC_ENG_SE_PKA_0_ENDIAN_LEN                             (1U)
#define SEC_ENG_SE_PKA_0_ENDIAN_MSK                             (((1U<<SEC_ENG_SE_PKA_0_ENDIAN_LEN)-1)<<SEC_ENG_SE_PKA_0_ENDIAN_POS)
#define SEC_ENG_SE_PKA_0_ENDIAN_UMSK                            (~(((1U<<SEC_ENG_SE_PKA_0_ENDIAN_LEN)-1)<<SEC_ENG_SE_PKA_0_ENDIAN_POS))
#define SEC_ENG_SE_PKA_0_RAM_CLR_MD                             SEC_ENG_SE_PKA_0_RAM_CLR_MD
#define SEC_ENG_SE_PKA_0_RAM_CLR_MD_POS                         (13U)
#define SEC_ENG_SE_PKA_0_RAM_CLR_MD_LEN                         (1U)
#define SEC_ENG_SE_PKA_0_RAM_CLR_MD_MSK                         (((1U<<SEC_ENG_SE_PKA_0_RAM_CLR_MD_LEN)-1)<<SEC_ENG_SE_PKA_0_RAM_CLR_MD_POS)
#define SEC_ENG_SE_PKA_0_RAM_CLR_MD_UMSK                        (~(((1U<<SEC_ENG_SE_PKA_0_RAM_CLR_MD_LEN)-1)<<SEC_ENG_SE_PKA_0_RAM_CLR_MD_POS))
#define SEC_ENG_SE_PKA_0_STATUS_CLR_1T                          SEC_ENG_SE_PKA_0_STATUS_CLR_1T
#define SEC_ENG_SE_PKA_0_STATUS_CLR_1T_POS                      (16U)
#define SEC_ENG_SE_PKA_0_STATUS_CLR_1T_LEN                      (1U)
#define SEC_ENG_SE_PKA_0_STATUS_CLR_1T_MSK                      (((1U<<SEC_ENG_SE_PKA_0_STATUS_CLR_1T_LEN)-1)<<SEC_ENG_SE_PKA_0_STATUS_CLR_1T_POS)
#define SEC_ENG_SE_PKA_0_STATUS_CLR_1T_UMSK                     (~(((1U<<SEC_ENG_SE_PKA_0_STATUS_CLR_1T_LEN)-1)<<SEC_ENG_SE_PKA_0_STATUS_CLR_1T_POS))
#define SEC_ENG_SE_PKA_0_STATUS                                 SEC_ENG_SE_PKA_0_STATUS
#define SEC_ENG_SE_PKA_0_STATUS_POS                             (17U)
#define SEC_ENG_SE_PKA_0_STATUS_LEN                             (15U)
#define SEC_ENG_SE_PKA_0_STATUS_MSK                             (((1U<<SEC_ENG_SE_PKA_0_STATUS_LEN)-1)<<SEC_ENG_SE_PKA_0_STATUS_POS)
#define SEC_ENG_SE_PKA_0_STATUS_UMSK                            (~(((1U<<SEC_ENG_SE_PKA_0_STATUS_LEN)-1)<<SEC_ENG_SE_PKA_0_STATUS_POS))

/* 0x30C : se_pka_0_seed */
#define SEC_ENG_SE_PKA_0_SEED_OFFSET                            (0x30C)
#define SEC_ENG_SE_PKA_0_SEED                                   SEC_ENG_SE_PKA_0_SEED
#define SEC_ENG_SE_PKA_0_SEED_POS                               (0U)
#define SEC_ENG_SE_PKA_0_SEED_LEN                               (32U)
#define SEC_ENG_SE_PKA_0_SEED_MSK                               (((1U<<SEC_ENG_SE_PKA_0_SEED_LEN)-1)<<SEC_ENG_SE_PKA_0_SEED_POS)
#define SEC_ENG_SE_PKA_0_SEED_UMSK                              (~(((1U<<SEC_ENG_SE_PKA_0_SEED_LEN)-1)<<SEC_ENG_SE_PKA_0_SEED_POS))

/* 0x310 : se_pka_0_ctrl_1 */
#define SEC_ENG_SE_PKA_0_CTRL_1_OFFSET                          (0x310)
#define SEC_ENG_SE_PKA_0_HBURST                                 SEC_ENG_SE_PKA_0_HBURST
#define SEC_ENG_SE_PKA_0_HBURST_POS                             (0U)
#define SEC_ENG_SE_PKA_0_HBURST_LEN                             (3U)
#define SEC_ENG_SE_PKA_0_HBURST_MSK                             (((1U<<SEC_ENG_SE_PKA_0_HBURST_LEN)-1)<<SEC_ENG_SE_PKA_0_HBURST_POS)
#define SEC_ENG_SE_PKA_0_HBURST_UMSK                            (~(((1U<<SEC_ENG_SE_PKA_0_HBURST_LEN)-1)<<SEC_ENG_SE_PKA_0_HBURST_POS))
#define SEC_ENG_SE_PKA_0_HBYPASS                                SEC_ENG_SE_PKA_0_HBYPASS
#define SEC_ENG_SE_PKA_0_HBYPASS_POS                            (3U)
#define SEC_ENG_SE_PKA_0_HBYPASS_LEN                            (1U)
#define SEC_ENG_SE_PKA_0_HBYPASS_MSK                            (((1U<<SEC_ENG_SE_PKA_0_HBYPASS_LEN)-1)<<SEC_ENG_SE_PKA_0_HBYPASS_POS)
#define SEC_ENG_SE_PKA_0_HBYPASS_UMSK                           (~(((1U<<SEC_ENG_SE_PKA_0_HBYPASS_LEN)-1)<<SEC_ENG_SE_PKA_0_HBYPASS_POS))

/* 0x340 : se_pka_0_rw */
#define SEC_ENG_SE_PKA_0_RW_OFFSET                              (0x340)

/* 0x360 : se_pka_0_rw_burst */
#define SEC_ENG_SE_PKA_0_RW_BURST_OFFSET                        (0x360)

/* 0x3FC : se_pka_0_ctrl_prot */
#define SEC_ENG_SE_PKA_0_CTRL_PROT_OFFSET                       (0x3FC)
#define SEC_ENG_SE_PKA_PROT_EN                                  SEC_ENG_SE_PKA_PROT_EN
#define SEC_ENG_SE_PKA_PROT_EN_POS                              (0U)
#define SEC_ENG_SE_PKA_PROT_EN_LEN                              (1U)
#define SEC_ENG_SE_PKA_PROT_EN_MSK                              (((1U<<SEC_ENG_SE_PKA_PROT_EN_LEN)-1)<<SEC_ENG_SE_PKA_PROT_EN_POS)
#define SEC_ENG_SE_PKA_PROT_EN_UMSK                             (~(((1U<<SEC_ENG_SE_PKA_PROT_EN_LEN)-1)<<SEC_ENG_SE_PKA_PROT_EN_POS))
#define SEC_ENG_SE_PKA_ID0_EN                                   SEC_ENG_SE_PKA_ID0_EN
#define SEC_ENG_SE_PKA_ID0_EN_POS                               (1U)
#define SEC_ENG_SE_PKA_ID0_EN_LEN                               (1U)
#define SEC_ENG_SE_PKA_ID0_EN_MSK                               (((1U<<SEC_ENG_SE_PKA_ID0_EN_LEN)-1)<<SEC_ENG_SE_PKA_ID0_EN_POS)
#define SEC_ENG_SE_PKA_ID0_EN_UMSK                              (~(((1U<<SEC_ENG_SE_PKA_ID0_EN_LEN)-1)<<SEC_ENG_SE_PKA_ID0_EN_POS))
#define SEC_ENG_SE_PKA_ID1_EN                                   SEC_ENG_SE_PKA_ID1_EN
#define SEC_ENG_SE_PKA_ID1_EN_POS                               (2U)
#define SEC_ENG_SE_PKA_ID1_EN_LEN                               (1U)
#define SEC_ENG_SE_PKA_ID1_EN_MSK                               (((1U<<SEC_ENG_SE_PKA_ID1_EN_LEN)-1)<<SEC_ENG_SE_PKA_ID1_EN_POS)
#define SEC_ENG_SE_PKA_ID1_EN_UMSK                              (~(((1U<<SEC_ENG_SE_PKA_ID1_EN_LEN)-1)<<SEC_ENG_SE_PKA_ID1_EN_POS))

/* 0x400 : se_cdet_0_ctrl_0 */
#define SEC_ENG_SE_CDET_0_CTRL_0_OFFSET                         (0x400)
#define SEC_ENG_SE_CDET_0_EN                                    SEC_ENG_SE_CDET_0_EN
#define SEC_ENG_SE_CDET_0_EN_POS                                (0U)
#define SEC_ENG_SE_CDET_0_EN_LEN                                (1U)
#define SEC_ENG_SE_CDET_0_EN_MSK                                (((1U<<SEC_ENG_SE_CDET_0_EN_LEN)-1)<<SEC_ENG_SE_CDET_0_EN_POS)
#define SEC_ENG_SE_CDET_0_EN_UMSK                               (~(((1U<<SEC_ENG_SE_CDET_0_EN_LEN)-1)<<SEC_ENG_SE_CDET_0_EN_POS))
#define SEC_ENG_SE_CDET_0_ERROR                                 SEC_ENG_SE_CDET_0_ERROR
#define SEC_ENG_SE_CDET_0_ERROR_POS                             (1U)
#define SEC_ENG_SE_CDET_0_ERROR_LEN                             (1U)
#define SEC_ENG_SE_CDET_0_ERROR_MSK                             (((1U<<SEC_ENG_SE_CDET_0_ERROR_LEN)-1)<<SEC_ENG_SE_CDET_0_ERROR_POS)
#define SEC_ENG_SE_CDET_0_ERROR_UMSK                            (~(((1U<<SEC_ENG_SE_CDET_0_ERROR_LEN)-1)<<SEC_ENG_SE_CDET_0_ERROR_POS))
#define SEC_ENG_SE_CDET_0_STATUS                                SEC_ENG_SE_CDET_0_STATUS
#define SEC_ENG_SE_CDET_0_STATUS_POS                            (2U)
#define SEC_ENG_SE_CDET_0_STATUS_LEN                            (14U)
#define SEC_ENG_SE_CDET_0_STATUS_MSK                            (((1U<<SEC_ENG_SE_CDET_0_STATUS_LEN)-1)<<SEC_ENG_SE_CDET_0_STATUS_POS)
#define SEC_ENG_SE_CDET_0_STATUS_UMSK                           (~(((1U<<SEC_ENG_SE_CDET_0_STATUS_LEN)-1)<<SEC_ENG_SE_CDET_0_STATUS_POS))
#define SEC_ENG_SE_CDET_0_G_LOOP_MAX                            SEC_ENG_SE_CDET_0_G_LOOP_MAX
#define SEC_ENG_SE_CDET_0_G_LOOP_MAX_POS                        (16U)
#define SEC_ENG_SE_CDET_0_G_LOOP_MAX_LEN                        (8U)
#define SEC_ENG_SE_CDET_0_G_LOOP_MAX_MSK                        (((1U<<SEC_ENG_SE_CDET_0_G_LOOP_MAX_LEN)-1)<<SEC_ENG_SE_CDET_0_G_LOOP_MAX_POS)
#define SEC_ENG_SE_CDET_0_G_LOOP_MAX_UMSK                       (~(((1U<<SEC_ENG_SE_CDET_0_G_LOOP_MAX_LEN)-1)<<SEC_ENG_SE_CDET_0_G_LOOP_MAX_POS))
#define SEC_ENG_SE_CDET_0_G_LOOP_MIN                            SEC_ENG_SE_CDET_0_G_LOOP_MIN
#define SEC_ENG_SE_CDET_0_G_LOOP_MIN_POS                        (24U)
#define SEC_ENG_SE_CDET_0_G_LOOP_MIN_LEN                        (8U)
#define SEC_ENG_SE_CDET_0_G_LOOP_MIN_MSK                        (((1U<<SEC_ENG_SE_CDET_0_G_LOOP_MIN_LEN)-1)<<SEC_ENG_SE_CDET_0_G_LOOP_MIN_POS)
#define SEC_ENG_SE_CDET_0_G_LOOP_MIN_UMSK                       (~(((1U<<SEC_ENG_SE_CDET_0_G_LOOP_MIN_LEN)-1)<<SEC_ENG_SE_CDET_0_G_LOOP_MIN_POS))

/* 0x404 : se_cdet_0_ctrl_1 */
#define SEC_ENG_SE_CDET_0_CTRL_1_OFFSET                         (0x404)
#define SEC_ENG_SE_CDET_0_T_LOOP_N                              SEC_ENG_SE_CDET_0_T_LOOP_N
#define SEC_ENG_SE_CDET_0_T_LOOP_N_POS                          (0U)
#define SEC_ENG_SE_CDET_0_T_LOOP_N_LEN                          (8U)
#define SEC_ENG_SE_CDET_0_T_LOOP_N_MSK                          (((1U<<SEC_ENG_SE_CDET_0_T_LOOP_N_LEN)-1)<<SEC_ENG_SE_CDET_0_T_LOOP_N_POS)
#define SEC_ENG_SE_CDET_0_T_LOOP_N_UMSK                         (~(((1U<<SEC_ENG_SE_CDET_0_T_LOOP_N_LEN)-1)<<SEC_ENG_SE_CDET_0_T_LOOP_N_POS))
#define SEC_ENG_SE_CDET_0_T_DLY_N                               SEC_ENG_SE_CDET_0_T_DLY_N
#define SEC_ENG_SE_CDET_0_T_DLY_N_POS                           (8U)
#define SEC_ENG_SE_CDET_0_T_DLY_N_LEN                           (8U)
#define SEC_ENG_SE_CDET_0_T_DLY_N_MSK                           (((1U<<SEC_ENG_SE_CDET_0_T_DLY_N_LEN)-1)<<SEC_ENG_SE_CDET_0_T_DLY_N_POS)
#define SEC_ENG_SE_CDET_0_T_DLY_N_UMSK                          (~(((1U<<SEC_ENG_SE_CDET_0_T_DLY_N_LEN)-1)<<SEC_ENG_SE_CDET_0_T_DLY_N_POS))
#define SEC_ENG_SE_CDET_0_G_SLP_N                               SEC_ENG_SE_CDET_0_G_SLP_N
#define SEC_ENG_SE_CDET_0_G_SLP_N_POS                           (16U)
#define SEC_ENG_SE_CDET_0_G_SLP_N_LEN                           (8U)
#define SEC_ENG_SE_CDET_0_G_SLP_N_MSK                           (((1U<<SEC_ENG_SE_CDET_0_G_SLP_N_LEN)-1)<<SEC_ENG_SE_CDET_0_G_SLP_N_POS)
#define SEC_ENG_SE_CDET_0_G_SLP_N_UMSK                          (~(((1U<<SEC_ENG_SE_CDET_0_G_SLP_N_LEN)-1)<<SEC_ENG_SE_CDET_0_G_SLP_N_POS))

/* 0x4FC : se_cdet_0_ctrl_prot */
#define SEC_ENG_SE_CDET_0_CTRL_PROT_OFFSET                      (0x4FC)
#define SEC_ENG_SE_CDET_PROT_EN                                 SEC_ENG_SE_CDET_PROT_EN
#define SEC_ENG_SE_CDET_PROT_EN_POS                             (0U)
#define SEC_ENG_SE_CDET_PROT_EN_LEN                             (1U)
#define SEC_ENG_SE_CDET_PROT_EN_MSK                             (((1U<<SEC_ENG_SE_CDET_PROT_EN_LEN)-1)<<SEC_ENG_SE_CDET_PROT_EN_POS)
#define SEC_ENG_SE_CDET_PROT_EN_UMSK                            (~(((1U<<SEC_ENG_SE_CDET_PROT_EN_LEN)-1)<<SEC_ENG_SE_CDET_PROT_EN_POS))
#define SEC_ENG_SE_CDET_ID0_EN                                  SEC_ENG_SE_CDET_ID0_EN
#define SEC_ENG_SE_CDET_ID0_EN_POS                              (1U)
#define SEC_ENG_SE_CDET_ID0_EN_LEN                              (1U)
#define SEC_ENG_SE_CDET_ID0_EN_MSK                              (((1U<<SEC_ENG_SE_CDET_ID0_EN_LEN)-1)<<SEC_ENG_SE_CDET_ID0_EN_POS)
#define SEC_ENG_SE_CDET_ID0_EN_UMSK                             (~(((1U<<SEC_ENG_SE_CDET_ID0_EN_LEN)-1)<<SEC_ENG_SE_CDET_ID0_EN_POS))
#define SEC_ENG_SE_CDET_ID1_EN                                  SEC_ENG_SE_CDET_ID1_EN
#define SEC_ENG_SE_CDET_ID1_EN_POS                              (2U)
#define SEC_ENG_SE_CDET_ID1_EN_LEN                              (1U)
#define SEC_ENG_SE_CDET_ID1_EN_MSK                              (((1U<<SEC_ENG_SE_CDET_ID1_EN_LEN)-1)<<SEC_ENG_SE_CDET_ID1_EN_POS)
#define SEC_ENG_SE_CDET_ID1_EN_UMSK                             (~(((1U<<SEC_ENG_SE_CDET_ID1_EN_LEN)-1)<<SEC_ENG_SE_CDET_ID1_EN_POS))

/* 0x500 : se_gmac_0_ctrl_0 */
#define SEC_ENG_SE_GMAC_0_CTRL_0_OFFSET                         (0x500)
#define SEC_ENG_SE_GMAC_0_BUSY                                  SEC_ENG_SE_GMAC_0_BUSY
#define SEC_ENG_SE_GMAC_0_BUSY_POS                              (0U)
#define SEC_ENG_SE_GMAC_0_BUSY_LEN                              (1U)
#define SEC_ENG_SE_GMAC_0_BUSY_MSK                              (((1U<<SEC_ENG_SE_GMAC_0_BUSY_LEN)-1)<<SEC_ENG_SE_GMAC_0_BUSY_POS)
#define SEC_ENG_SE_GMAC_0_BUSY_UMSK                             (~(((1U<<SEC_ENG_SE_GMAC_0_BUSY_LEN)-1)<<SEC_ENG_SE_GMAC_0_BUSY_POS))
#define SEC_ENG_SE_GMAC_0_TRIG_1T                               SEC_ENG_SE_GMAC_0_TRIG_1T
#define SEC_ENG_SE_GMAC_0_TRIG_1T_POS                           (1U)
#define SEC_ENG_SE_GMAC_0_TRIG_1T_LEN                           (1U)
#define SEC_ENG_SE_GMAC_0_TRIG_1T_MSK                           (((1U<<SEC_ENG_SE_GMAC_0_TRIG_1T_LEN)-1)<<SEC_ENG_SE_GMAC_0_TRIG_1T_POS)
#define SEC_ENG_SE_GMAC_0_TRIG_1T_UMSK                          (~(((1U<<SEC_ENG_SE_GMAC_0_TRIG_1T_LEN)-1)<<SEC_ENG_SE_GMAC_0_TRIG_1T_POS))
#define SEC_ENG_SE_GMAC_0_EN                                    SEC_ENG_SE_GMAC_0_EN
#define SEC_ENG_SE_GMAC_0_EN_POS                                (2U)
#define SEC_ENG_SE_GMAC_0_EN_LEN                                (1U)
#define SEC_ENG_SE_GMAC_0_EN_MSK                                (((1U<<SEC_ENG_SE_GMAC_0_EN_LEN)-1)<<SEC_ENG_SE_GMAC_0_EN_POS)
#define SEC_ENG_SE_GMAC_0_EN_UMSK                               (~(((1U<<SEC_ENG_SE_GMAC_0_EN_LEN)-1)<<SEC_ENG_SE_GMAC_0_EN_POS))
#define SEC_ENG_SE_GMAC_0_INT                                   SEC_ENG_SE_GMAC_0_INT
#define SEC_ENG_SE_GMAC_0_INT_POS                               (8U)
#define SEC_ENG_SE_GMAC_0_INT_LEN                               (1U)
#define SEC_ENG_SE_GMAC_0_INT_MSK                               (((1U<<SEC_ENG_SE_GMAC_0_INT_LEN)-1)<<SEC_ENG_SE_GMAC_0_INT_POS)
#define SEC_ENG_SE_GMAC_0_INT_UMSK                              (~(((1U<<SEC_ENG_SE_GMAC_0_INT_LEN)-1)<<SEC_ENG_SE_GMAC_0_INT_POS))
#define SEC_ENG_SE_GMAC_0_INT_CLR_1T                            SEC_ENG_SE_GMAC_0_INT_CLR_1T
#define SEC_ENG_SE_GMAC_0_INT_CLR_1T_POS                        (9U)
#define SEC_ENG_SE_GMAC_0_INT_CLR_1T_LEN                        (1U)
#define SEC_ENG_SE_GMAC_0_INT_CLR_1T_MSK                        (((1U<<SEC_ENG_SE_GMAC_0_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_GMAC_0_INT_CLR_1T_POS)
#define SEC_ENG_SE_GMAC_0_INT_CLR_1T_UMSK                       (~(((1U<<SEC_ENG_SE_GMAC_0_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_GMAC_0_INT_CLR_1T_POS))
#define SEC_ENG_SE_GMAC_0_INT_SET_1T                            SEC_ENG_SE_GMAC_0_INT_SET_1T
#define SEC_ENG_SE_GMAC_0_INT_SET_1T_POS                        (10U)
#define SEC_ENG_SE_GMAC_0_INT_SET_1T_LEN                        (1U)
#define SEC_ENG_SE_GMAC_0_INT_SET_1T_MSK                        (((1U<<SEC_ENG_SE_GMAC_0_INT_SET_1T_LEN)-1)<<SEC_ENG_SE_GMAC_0_INT_SET_1T_POS)
#define SEC_ENG_SE_GMAC_0_INT_SET_1T_UMSK                       (~(((1U<<SEC_ENG_SE_GMAC_0_INT_SET_1T_LEN)-1)<<SEC_ENG_SE_GMAC_0_INT_SET_1T_POS))
#define SEC_ENG_SE_GMAC_0_INT_MASK                              SEC_ENG_SE_GMAC_0_INT_MASK
#define SEC_ENG_SE_GMAC_0_INT_MASK_POS                          (11U)
#define SEC_ENG_SE_GMAC_0_INT_MASK_LEN                          (1U)
#define SEC_ENG_SE_GMAC_0_INT_MASK_MSK                          (((1U<<SEC_ENG_SE_GMAC_0_INT_MASK_LEN)-1)<<SEC_ENG_SE_GMAC_0_INT_MASK_POS)
#define SEC_ENG_SE_GMAC_0_INT_MASK_UMSK                         (~(((1U<<SEC_ENG_SE_GMAC_0_INT_MASK_LEN)-1)<<SEC_ENG_SE_GMAC_0_INT_MASK_POS))
#define SEC_ENG_SE_GMAC_0_T_ENDIAN                              SEC_ENG_SE_GMAC_0_T_ENDIAN
#define SEC_ENG_SE_GMAC_0_T_ENDIAN_POS                          (12U)
#define SEC_ENG_SE_GMAC_0_T_ENDIAN_LEN                          (1U)
#define SEC_ENG_SE_GMAC_0_T_ENDIAN_MSK                          (((1U<<SEC_ENG_SE_GMAC_0_T_ENDIAN_LEN)-1)<<SEC_ENG_SE_GMAC_0_T_ENDIAN_POS)
#define SEC_ENG_SE_GMAC_0_T_ENDIAN_UMSK                         (~(((1U<<SEC_ENG_SE_GMAC_0_T_ENDIAN_LEN)-1)<<SEC_ENG_SE_GMAC_0_T_ENDIAN_POS))
#define SEC_ENG_SE_GMAC_0_H_ENDIAN                              SEC_ENG_SE_GMAC_0_H_ENDIAN
#define SEC_ENG_SE_GMAC_0_H_ENDIAN_POS                          (13U)
#define SEC_ENG_SE_GMAC_0_H_ENDIAN_LEN                          (1U)
#define SEC_ENG_SE_GMAC_0_H_ENDIAN_MSK                          (((1U<<SEC_ENG_SE_GMAC_0_H_ENDIAN_LEN)-1)<<SEC_ENG_SE_GMAC_0_H_ENDIAN_POS)
#define SEC_ENG_SE_GMAC_0_H_ENDIAN_UMSK                         (~(((1U<<SEC_ENG_SE_GMAC_0_H_ENDIAN_LEN)-1)<<SEC_ENG_SE_GMAC_0_H_ENDIAN_POS))
#define SEC_ENG_SE_GMAC_0_X_ENDIAN                              SEC_ENG_SE_GMAC_0_X_ENDIAN
#define SEC_ENG_SE_GMAC_0_X_ENDIAN_POS                          (14U)
#define SEC_ENG_SE_GMAC_0_X_ENDIAN_LEN                          (1U)
#define SEC_ENG_SE_GMAC_0_X_ENDIAN_MSK                          (((1U<<SEC_ENG_SE_GMAC_0_X_ENDIAN_LEN)-1)<<SEC_ENG_SE_GMAC_0_X_ENDIAN_POS)
#define SEC_ENG_SE_GMAC_0_X_ENDIAN_UMSK                         (~(((1U<<SEC_ENG_SE_GMAC_0_X_ENDIAN_LEN)-1)<<SEC_ENG_SE_GMAC_0_X_ENDIAN_POS))

/* 0x504 : se_gmac_0_lca */
#define SEC_ENG_SE_GMAC_0_LCA_OFFSET                            (0x504)
#define SEC_ENG_SE_GMAC_0_LCA                                   SEC_ENG_SE_GMAC_0_LCA
#define SEC_ENG_SE_GMAC_0_LCA_POS                               (0U)
#define SEC_ENG_SE_GMAC_0_LCA_LEN                               (32U)
#define SEC_ENG_SE_GMAC_0_LCA_MSK                               (((1U<<SEC_ENG_SE_GMAC_0_LCA_LEN)-1)<<SEC_ENG_SE_GMAC_0_LCA_POS)
#define SEC_ENG_SE_GMAC_0_LCA_UMSK                              (~(((1U<<SEC_ENG_SE_GMAC_0_LCA_LEN)-1)<<SEC_ENG_SE_GMAC_0_LCA_POS))

/* 0x508 : se_gmac_0_status */
#define SEC_ENG_SE_GMAC_0_STATUS_OFFSET                         (0x508)
#define SEC_ENG_SE_GMAC_0_STATUS                                SEC_ENG_SE_GMAC_0_STATUS
#define SEC_ENG_SE_GMAC_0_STATUS_POS                            (0U)
#define SEC_ENG_SE_GMAC_0_STATUS_LEN                            (32U)
#define SEC_ENG_SE_GMAC_0_STATUS_MSK                            (((1U<<SEC_ENG_SE_GMAC_0_STATUS_LEN)-1)<<SEC_ENG_SE_GMAC_0_STATUS_POS)
#define SEC_ENG_SE_GMAC_0_STATUS_UMSK                           (~(((1U<<SEC_ENG_SE_GMAC_0_STATUS_LEN)-1)<<SEC_ENG_SE_GMAC_0_STATUS_POS))

/* 0x5FC : se_gmac_0_ctrl_prot */
#define SEC_ENG_SE_GMAC_0_CTRL_PROT_OFFSET                      (0x5FC)
#define SEC_ENG_SE_GMAC_PROT_EN                                 SEC_ENG_SE_GMAC_PROT_EN
#define SEC_ENG_SE_GMAC_PROT_EN_POS                             (0U)
#define SEC_ENG_SE_GMAC_PROT_EN_LEN                             (1U)
#define SEC_ENG_SE_GMAC_PROT_EN_MSK                             (((1U<<SEC_ENG_SE_GMAC_PROT_EN_LEN)-1)<<SEC_ENG_SE_GMAC_PROT_EN_POS)
#define SEC_ENG_SE_GMAC_PROT_EN_UMSK                            (~(((1U<<SEC_ENG_SE_GMAC_PROT_EN_LEN)-1)<<SEC_ENG_SE_GMAC_PROT_EN_POS))
#define SEC_ENG_SE_GMAC_ID0_EN                                  SEC_ENG_SE_GMAC_ID0_EN
#define SEC_ENG_SE_GMAC_ID0_EN_POS                              (1U)
#define SEC_ENG_SE_GMAC_ID0_EN_LEN                              (1U)
#define SEC_ENG_SE_GMAC_ID0_EN_MSK                              (((1U<<SEC_ENG_SE_GMAC_ID0_EN_LEN)-1)<<SEC_ENG_SE_GMAC_ID0_EN_POS)
#define SEC_ENG_SE_GMAC_ID0_EN_UMSK                             (~(((1U<<SEC_ENG_SE_GMAC_ID0_EN_LEN)-1)<<SEC_ENG_SE_GMAC_ID0_EN_POS))
#define SEC_ENG_SE_GMAC_ID1_EN                                  SEC_ENG_SE_GMAC_ID1_EN
#define SEC_ENG_SE_GMAC_ID1_EN_POS                              (2U)
#define SEC_ENG_SE_GMAC_ID1_EN_LEN                              (1U)
#define SEC_ENG_SE_GMAC_ID1_EN_MSK                              (((1U<<SEC_ENG_SE_GMAC_ID1_EN_LEN)-1)<<SEC_ENG_SE_GMAC_ID1_EN_POS)
#define SEC_ENG_SE_GMAC_ID1_EN_UMSK                             (~(((1U<<SEC_ENG_SE_GMAC_ID1_EN_LEN)-1)<<SEC_ENG_SE_GMAC_ID1_EN_POS))

/* 0xF00 : se_ctrl_prot_rd */
#define SEC_ENG_SE_CTRL_PROT_RD_OFFSET                          (0xF00)
#define SEC_ENG_SE_SHA_PROT_EN_RD                               SEC_ENG_SE_SHA_PROT_EN_RD
#define SEC_ENG_SE_SHA_PROT_EN_RD_POS                           (0U)
#define SEC_ENG_SE_SHA_PROT_EN_RD_LEN                           (1U)
#define SEC_ENG_SE_SHA_PROT_EN_RD_MSK                           (((1U<<SEC_ENG_SE_SHA_PROT_EN_RD_LEN)-1)<<SEC_ENG_SE_SHA_PROT_EN_RD_POS)
#define SEC_ENG_SE_SHA_PROT_EN_RD_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_PROT_EN_RD_LEN)-1)<<SEC_ENG_SE_SHA_PROT_EN_RD_POS))
#define SEC_ENG_SE_SHA_ID0_EN_RD                                SEC_ENG_SE_SHA_ID0_EN_RD
#define SEC_ENG_SE_SHA_ID0_EN_RD_POS                            (1U)
#define SEC_ENG_SE_SHA_ID0_EN_RD_LEN                            (1U)
#define SEC_ENG_SE_SHA_ID0_EN_RD_MSK                            (((1U<<SEC_ENG_SE_SHA_ID0_EN_RD_LEN)-1)<<SEC_ENG_SE_SHA_ID0_EN_RD_POS)
#define SEC_ENG_SE_SHA_ID0_EN_RD_UMSK                           (~(((1U<<SEC_ENG_SE_SHA_ID0_EN_RD_LEN)-1)<<SEC_ENG_SE_SHA_ID0_EN_RD_POS))
#define SEC_ENG_SE_SHA_ID1_EN_RD                                SEC_ENG_SE_SHA_ID1_EN_RD
#define SEC_ENG_SE_SHA_ID1_EN_RD_POS                            (2U)
#define SEC_ENG_SE_SHA_ID1_EN_RD_LEN                            (1U)
#define SEC_ENG_SE_SHA_ID1_EN_RD_MSK                            (((1U<<SEC_ENG_SE_SHA_ID1_EN_RD_LEN)-1)<<SEC_ENG_SE_SHA_ID1_EN_RD_POS)
#define SEC_ENG_SE_SHA_ID1_EN_RD_UMSK                           (~(((1U<<SEC_ENG_SE_SHA_ID1_EN_RD_LEN)-1)<<SEC_ENG_SE_SHA_ID1_EN_RD_POS))
#define SEC_ENG_SE_AES_PROT_EN_RD                               SEC_ENG_SE_AES_PROT_EN_RD
#define SEC_ENG_SE_AES_PROT_EN_RD_POS                           (4U)
#define SEC_ENG_SE_AES_PROT_EN_RD_LEN                           (1U)
#define SEC_ENG_SE_AES_PROT_EN_RD_MSK                           (((1U<<SEC_ENG_SE_AES_PROT_EN_RD_LEN)-1)<<SEC_ENG_SE_AES_PROT_EN_RD_POS)
#define SEC_ENG_SE_AES_PROT_EN_RD_UMSK                          (~(((1U<<SEC_ENG_SE_AES_PROT_EN_RD_LEN)-1)<<SEC_ENG_SE_AES_PROT_EN_RD_POS))
#define SEC_ENG_SE_AES_ID0_EN_RD                                SEC_ENG_SE_AES_ID0_EN_RD
#define SEC_ENG_SE_AES_ID0_EN_RD_POS                            (5U)
#define SEC_ENG_SE_AES_ID0_EN_RD_LEN                            (1U)
#define SEC_ENG_SE_AES_ID0_EN_RD_MSK                            (((1U<<SEC_ENG_SE_AES_ID0_EN_RD_LEN)-1)<<SEC_ENG_SE_AES_ID0_EN_RD_POS)
#define SEC_ENG_SE_AES_ID0_EN_RD_UMSK                           (~(((1U<<SEC_ENG_SE_AES_ID0_EN_RD_LEN)-1)<<SEC_ENG_SE_AES_ID0_EN_RD_POS))
#define SEC_ENG_SE_AES_ID1_EN_RD                                SEC_ENG_SE_AES_ID1_EN_RD
#define SEC_ENG_SE_AES_ID1_EN_RD_POS                            (6U)
#define SEC_ENG_SE_AES_ID1_EN_RD_LEN                            (1U)
#define SEC_ENG_SE_AES_ID1_EN_RD_MSK                            (((1U<<SEC_ENG_SE_AES_ID1_EN_RD_LEN)-1)<<SEC_ENG_SE_AES_ID1_EN_RD_POS)
#define SEC_ENG_SE_AES_ID1_EN_RD_UMSK                           (~(((1U<<SEC_ENG_SE_AES_ID1_EN_RD_LEN)-1)<<SEC_ENG_SE_AES_ID1_EN_RD_POS))
#define SEC_ENG_SE_TRNG_PROT_EN_RD                              SEC_ENG_SE_TRNG_PROT_EN_RD
#define SEC_ENG_SE_TRNG_PROT_EN_RD_POS                          (8U)
#define SEC_ENG_SE_TRNG_PROT_EN_RD_LEN                          (1U)
#define SEC_ENG_SE_TRNG_PROT_EN_RD_MSK                          (((1U<<SEC_ENG_SE_TRNG_PROT_EN_RD_LEN)-1)<<SEC_ENG_SE_TRNG_PROT_EN_RD_POS)
#define SEC_ENG_SE_TRNG_PROT_EN_RD_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_PROT_EN_RD_LEN)-1)<<SEC_ENG_SE_TRNG_PROT_EN_RD_POS))
#define SEC_ENG_SE_TRNG_ID0_EN_RD                               SEC_ENG_SE_TRNG_ID0_EN_RD
#define SEC_ENG_SE_TRNG_ID0_EN_RD_POS                           (9U)
#define SEC_ENG_SE_TRNG_ID0_EN_RD_LEN                           (1U)
#define SEC_ENG_SE_TRNG_ID0_EN_RD_MSK                           (((1U<<SEC_ENG_SE_TRNG_ID0_EN_RD_LEN)-1)<<SEC_ENG_SE_TRNG_ID0_EN_RD_POS)
#define SEC_ENG_SE_TRNG_ID0_EN_RD_UMSK                          (~(((1U<<SEC_ENG_SE_TRNG_ID0_EN_RD_LEN)-1)<<SEC_ENG_SE_TRNG_ID0_EN_RD_POS))
#define SEC_ENG_SE_TRNG_ID1_EN_RD                               SEC_ENG_SE_TRNG_ID1_EN_RD
#define SEC_ENG_SE_TRNG_ID1_EN_RD_POS                           (10U)
#define SEC_ENG_SE_TRNG_ID1_EN_RD_LEN                           (1U)
#define SEC_ENG_SE_TRNG_ID1_EN_RD_MSK                           (((1U<<SEC_ENG_SE_TRNG_ID1_EN_RD_LEN)-1)<<SEC_ENG_SE_TRNG_ID1_EN_RD_POS)
#define SEC_ENG_SE_TRNG_ID1_EN_RD_UMSK                          (~(((1U<<SEC_ENG_SE_TRNG_ID1_EN_RD_LEN)-1)<<SEC_ENG_SE_TRNG_ID1_EN_RD_POS))
#define SEC_ENG_SE_PKA_PROT_EN_RD                               SEC_ENG_SE_PKA_PROT_EN_RD
#define SEC_ENG_SE_PKA_PROT_EN_RD_POS                           (12U)
#define SEC_ENG_SE_PKA_PROT_EN_RD_LEN                           (1U)
#define SEC_ENG_SE_PKA_PROT_EN_RD_MSK                           (((1U<<SEC_ENG_SE_PKA_PROT_EN_RD_LEN)-1)<<SEC_ENG_SE_PKA_PROT_EN_RD_POS)
#define SEC_ENG_SE_PKA_PROT_EN_RD_UMSK                          (~(((1U<<SEC_ENG_SE_PKA_PROT_EN_RD_LEN)-1)<<SEC_ENG_SE_PKA_PROT_EN_RD_POS))
#define SEC_ENG_SE_PKA_ID0_EN_RD                                SEC_ENG_SE_PKA_ID0_EN_RD
#define SEC_ENG_SE_PKA_ID0_EN_RD_POS                            (13U)
#define SEC_ENG_SE_PKA_ID0_EN_RD_LEN                            (1U)
#define SEC_ENG_SE_PKA_ID0_EN_RD_MSK                            (((1U<<SEC_ENG_SE_PKA_ID0_EN_RD_LEN)-1)<<SEC_ENG_SE_PKA_ID0_EN_RD_POS)
#define SEC_ENG_SE_PKA_ID0_EN_RD_UMSK                           (~(((1U<<SEC_ENG_SE_PKA_ID0_EN_RD_LEN)-1)<<SEC_ENG_SE_PKA_ID0_EN_RD_POS))
#define SEC_ENG_SE_PKA_ID1_EN_RD                                SEC_ENG_SE_PKA_ID1_EN_RD
#define SEC_ENG_SE_PKA_ID1_EN_RD_POS                            (14U)
#define SEC_ENG_SE_PKA_ID1_EN_RD_LEN                            (1U)
#define SEC_ENG_SE_PKA_ID1_EN_RD_MSK                            (((1U<<SEC_ENG_SE_PKA_ID1_EN_RD_LEN)-1)<<SEC_ENG_SE_PKA_ID1_EN_RD_POS)
#define SEC_ENG_SE_PKA_ID1_EN_RD_UMSK                           (~(((1U<<SEC_ENG_SE_PKA_ID1_EN_RD_LEN)-1)<<SEC_ENG_SE_PKA_ID1_EN_RD_POS))
#define SEC_ENG_SE_CDET_PROT_EN_RD                              SEC_ENG_SE_CDET_PROT_EN_RD
#define SEC_ENG_SE_CDET_PROT_EN_RD_POS                          (16U)
#define SEC_ENG_SE_CDET_PROT_EN_RD_LEN                          (1U)
#define SEC_ENG_SE_CDET_PROT_EN_RD_MSK                          (((1U<<SEC_ENG_SE_CDET_PROT_EN_RD_LEN)-1)<<SEC_ENG_SE_CDET_PROT_EN_RD_POS)
#define SEC_ENG_SE_CDET_PROT_EN_RD_UMSK                         (~(((1U<<SEC_ENG_SE_CDET_PROT_EN_RD_LEN)-1)<<SEC_ENG_SE_CDET_PROT_EN_RD_POS))
#define SEC_ENG_SE_CDET_ID0_EN_RD                               SEC_ENG_SE_CDET_ID0_EN_RD
#define SEC_ENG_SE_CDET_ID0_EN_RD_POS                           (17U)
#define SEC_ENG_SE_CDET_ID0_EN_RD_LEN                           (1U)
#define SEC_ENG_SE_CDET_ID0_EN_RD_MSK                           (((1U<<SEC_ENG_SE_CDET_ID0_EN_RD_LEN)-1)<<SEC_ENG_SE_CDET_ID0_EN_RD_POS)
#define SEC_ENG_SE_CDET_ID0_EN_RD_UMSK                          (~(((1U<<SEC_ENG_SE_CDET_ID0_EN_RD_LEN)-1)<<SEC_ENG_SE_CDET_ID0_EN_RD_POS))
#define SEC_ENG_SE_CDET_ID1_EN_RD                               SEC_ENG_SE_CDET_ID1_EN_RD
#define SEC_ENG_SE_CDET_ID1_EN_RD_POS                           (18U)
#define SEC_ENG_SE_CDET_ID1_EN_RD_LEN                           (1U)
#define SEC_ENG_SE_CDET_ID1_EN_RD_MSK                           (((1U<<SEC_ENG_SE_CDET_ID1_EN_RD_LEN)-1)<<SEC_ENG_SE_CDET_ID1_EN_RD_POS)
#define SEC_ENG_SE_CDET_ID1_EN_RD_UMSK                          (~(((1U<<SEC_ENG_SE_CDET_ID1_EN_RD_LEN)-1)<<SEC_ENG_SE_CDET_ID1_EN_RD_POS))
#define SEC_ENG_SE_GMAC_PROT_EN_RD                              SEC_ENG_SE_GMAC_PROT_EN_RD
#define SEC_ENG_SE_GMAC_PROT_EN_RD_POS                          (20U)
#define SEC_ENG_SE_GMAC_PROT_EN_RD_LEN                          (1U)
#define SEC_ENG_SE_GMAC_PROT_EN_RD_MSK                          (((1U<<SEC_ENG_SE_GMAC_PROT_EN_RD_LEN)-1)<<SEC_ENG_SE_GMAC_PROT_EN_RD_POS)
#define SEC_ENG_SE_GMAC_PROT_EN_RD_UMSK                         (~(((1U<<SEC_ENG_SE_GMAC_PROT_EN_RD_LEN)-1)<<SEC_ENG_SE_GMAC_PROT_EN_RD_POS))
#define SEC_ENG_SE_GMAC_ID0_EN_RD                               SEC_ENG_SE_GMAC_ID0_EN_RD
#define SEC_ENG_SE_GMAC_ID0_EN_RD_POS                           (21U)
#define SEC_ENG_SE_GMAC_ID0_EN_RD_LEN                           (1U)
#define SEC_ENG_SE_GMAC_ID0_EN_RD_MSK                           (((1U<<SEC_ENG_SE_GMAC_ID0_EN_RD_LEN)-1)<<SEC_ENG_SE_GMAC_ID0_EN_RD_POS)
#define SEC_ENG_SE_GMAC_ID0_EN_RD_UMSK                          (~(((1U<<SEC_ENG_SE_GMAC_ID0_EN_RD_LEN)-1)<<SEC_ENG_SE_GMAC_ID0_EN_RD_POS))
#define SEC_ENG_SE_GMAC_ID1_EN_RD                               SEC_ENG_SE_GMAC_ID1_EN_RD
#define SEC_ENG_SE_GMAC_ID1_EN_RD_POS                           (22U)
#define SEC_ENG_SE_GMAC_ID1_EN_RD_LEN                           (1U)
#define SEC_ENG_SE_GMAC_ID1_EN_RD_MSK                           (((1U<<SEC_ENG_SE_GMAC_ID1_EN_RD_LEN)-1)<<SEC_ENG_SE_GMAC_ID1_EN_RD_POS)
#define SEC_ENG_SE_GMAC_ID1_EN_RD_UMSK                          (~(((1U<<SEC_ENG_SE_GMAC_ID1_EN_RD_LEN)-1)<<SEC_ENG_SE_GMAC_ID1_EN_RD_POS))
#define SEC_ENG_SE_DBG_DIS                                      SEC_ENG_SE_DBG_DIS
#define SEC_ENG_SE_DBG_DIS_POS                                  (31U)
#define SEC_ENG_SE_DBG_DIS_LEN                                  (1U)
#define SEC_ENG_SE_DBG_DIS_MSK                                  (((1U<<SEC_ENG_SE_DBG_DIS_LEN)-1)<<SEC_ENG_SE_DBG_DIS_POS)
#define SEC_ENG_SE_DBG_DIS_UMSK                                 (~(((1U<<SEC_ENG_SE_DBG_DIS_LEN)-1)<<SEC_ENG_SE_DBG_DIS_POS))

/* 0xF04 : se_ctrl_reserved_0 */
#define SEC_ENG_SE_CTRL_RESERVED_0_OFFSET                       (0xF04)
#define SEC_ENG_SE_CTRL_RESERVED_0                              SEC_ENG_SE_CTRL_RESERVED_0
#define SEC_ENG_SE_CTRL_RESERVED_0_POS                          (0U)
#define SEC_ENG_SE_CTRL_RESERVED_0_LEN                          (32U)
#define SEC_ENG_SE_CTRL_RESERVED_0_MSK                          (((1U<<SEC_ENG_SE_CTRL_RESERVED_0_LEN)-1)<<SEC_ENG_SE_CTRL_RESERVED_0_POS)
#define SEC_ENG_SE_CTRL_RESERVED_0_UMSK                         (~(((1U<<SEC_ENG_SE_CTRL_RESERVED_0_LEN)-1)<<SEC_ENG_SE_CTRL_RESERVED_0_POS))

/* 0xF08 : se_ctrl_reserved_1 */
#define SEC_ENG_SE_CTRL_RESERVED_1_OFFSET                       (0xF08)
#define SEC_ENG_SE_CTRL_RESERVED_1                              SEC_ENG_SE_CTRL_RESERVED_1
#define SEC_ENG_SE_CTRL_RESERVED_1_POS                          (0U)
#define SEC_ENG_SE_CTRL_RESERVED_1_LEN                          (32U)
#define SEC_ENG_SE_CTRL_RESERVED_1_MSK                          (((1U<<SEC_ENG_SE_CTRL_RESERVED_1_LEN)-1)<<SEC_ENG_SE_CTRL_RESERVED_1_POS)
#define SEC_ENG_SE_CTRL_RESERVED_1_UMSK                         (~(((1U<<SEC_ENG_SE_CTRL_RESERVED_1_LEN)-1)<<SEC_ENG_SE_CTRL_RESERVED_1_POS))

/* 0xF0C : se_ctrl_reserved_2 */
#define SEC_ENG_SE_CTRL_RESERVED_2_OFFSET                       (0xF0C)
#define SEC_ENG_SE_CTRL_RESERVED_2                              SEC_ENG_SE_CTRL_RESERVED_2
#define SEC_ENG_SE_CTRL_RESERVED_2_POS                          (0U)
#define SEC_ENG_SE_CTRL_RESERVED_2_LEN                          (32U)
#define SEC_ENG_SE_CTRL_RESERVED_2_MSK                          (((1U<<SEC_ENG_SE_CTRL_RESERVED_2_LEN)-1)<<SEC_ENG_SE_CTRL_RESERVED_2_POS)
#define SEC_ENG_SE_CTRL_RESERVED_2_UMSK                         (~(((1U<<SEC_ENG_SE_CTRL_RESERVED_2_LEN)-1)<<SEC_ENG_SE_CTRL_RESERVED_2_POS))


struct  sec_eng_reg {
    /* 0x0 : se_sha_0_ctrl */
    union {
        struct {
            uint32_t se_sha_0_busy                  :  1; /* [    0],          r,        0x0 */
            uint32_t se_sha_0_trig_1t               :  1; /* [    1],        w1p,        0x0 */
            uint32_t se_sha_0_mode                  :  3; /* [ 4: 2],        r/w,        0x0 */
            uint32_t se_sha_0_en                    :  1; /* [    5],        r/w,        0x0 */
            uint32_t se_sha_0_hash_sel              :  1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7                     :  1; /* [    7],       rsvd,        0x0 */
            uint32_t se_sha_0_int                   :  1; /* [    8],          r,        0x0 */
            uint32_t se_sha_0_int_clr_1t            :  1; /* [    9],        w1p,        0x0 */
            uint32_t se_sha_0_int_set_1t            :  1; /* [   10],        w1p,        0x0 */
            uint32_t se_sha_0_int_mask              :  1; /* [   11],        r/w,        0x0 */
            uint32_t reserved_12_14                 :  3; /* [14:12],       rsvd,        0x0 */
            uint32_t se_sha_0_link_mode             :  1; /* [   15],        r/w,        0x0 */
            uint32_t se_sha_0_msg_len               : 16; /* [31:16],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_0_ctrl;

    /* 0x4 : se_sha_0_msa */
    union {
        struct {
            uint32_t se_sha_0_msa                   : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_0_msa;

    /* 0x8 : se_sha_0_status */
    union {
        struct {
            uint32_t se_sha_0_status                : 32; /* [31: 0],          r,       0x41 */
        }BF;
        uint32_t WORD;
    } se_sha_0_status;

    /* 0xC : se_sha_0_endian */
    union {
        struct {
            uint32_t se_sha_0_dout_endian           :  1; /* [    0],        r/w,        0x1 */
            uint32_t reserved_1_31                  : 31; /* [31: 1],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_0_endian;

    /* 0x10 : se_sha_0_hash_l_0 */
    union {
        struct {
            uint32_t se_sha_0_hash_l_0              : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_0_hash_l_0;

    /* 0x14 : se_sha_0_hash_l_1 */
    union {
        struct {
            uint32_t se_sha_0_hash_l_1              : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_0_hash_l_1;

    /* 0x18 : se_sha_0_hash_l_2 */
    union {
        struct {
            uint32_t se_sha_0_hash_l_2              : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_0_hash_l_2;

    /* 0x1C : se_sha_0_hash_l_3 */
    union {
        struct {
            uint32_t se_sha_0_hash_l_3              : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_0_hash_l_3;

    /* 0x20 : se_sha_0_hash_l_4 */
    union {
        struct {
            uint32_t se_sha_0_hash_l_4              : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_0_hash_l_4;

    /* 0x24 : se_sha_0_hash_l_5 */
    union {
        struct {
            uint32_t se_sha_0_hash_l_5              : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_0_hash_l_5;

    /* 0x28 : se_sha_0_hash_l_6 */
    union {
        struct {
            uint32_t se_sha_0_hash_l_6              : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_0_hash_l_6;

    /* 0x2C : se_sha_0_hash_l_7 */
    union {
        struct {
            uint32_t se_sha_0_hash_l_7              : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_0_hash_l_7;

    /* 0x30 : se_sha_0_hash_h_0 */
    union {
        struct {
            uint32_t se_sha_0_hash_h_0              : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_0_hash_h_0;

    /* 0x34 : se_sha_0_hash_h_1 */
    union {
        struct {
            uint32_t se_sha_0_hash_h_1              : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_0_hash_h_1;

    /* 0x38 : se_sha_0_hash_h_2 */
    union {
        struct {
            uint32_t se_sha_0_hash_h_2              : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_0_hash_h_2;

    /* 0x3C : se_sha_0_hash_h_3 */
    union {
        struct {
            uint32_t se_sha_0_hash_h_3              : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_0_hash_h_3;

    /* 0x40 : se_sha_0_hash_h_4 */
    union {
        struct {
            uint32_t se_sha_0_hash_h_4              : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_0_hash_h_4;

    /* 0x44 : se_sha_0_hash_h_5 */
    union {
        struct {
            uint32_t se_sha_0_hash_h_5              : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_0_hash_h_5;

    /* 0x48 : se_sha_0_hash_h_6 */
    union {
        struct {
            uint32_t se_sha_0_hash_h_6              : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_0_hash_h_6;

    /* 0x4C : se_sha_0_hash_h_7 */
    union {
        struct {
            uint32_t se_sha_0_hash_h_7              : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_0_hash_h_7;

    /* 0x50 : se_sha_0_link */
    union {
        struct {
            uint32_t se_sha_0_lca                   : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_0_link;

    /* 0x54  reserved */
    uint8_t RESERVED0x54[168];

    /* 0xFC : se_sha_0_ctrl_prot */
    union {
        struct {
            uint32_t se_sha_prot_en                 :  1; /* [    0],        r/w,        0x1 */
            uint32_t se_sha_id0_en                  :  1; /* [    1],        r/w,        0x1 */
            uint32_t se_sha_id1_en                  :  1; /* [    2],        r/w,        0x1 */
            uint32_t reserved_3_31                  : 29; /* [31: 3],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_0_ctrl_prot;

    /* 0x100 : se_aes_0_ctrl */
    union {
        struct {
            uint32_t se_aes_0_busy                  :  1; /* [    0],          r,        0x0 */
            uint32_t se_aes_0_trig_1t               :  1; /* [    1],        w1p,        0x0 */
            uint32_t se_aes_0_en                    :  1; /* [    2],        r/w,        0x0 */
            uint32_t se_aes_0_mode                  :  2; /* [ 4: 3],        r/w,        0x0 */
            uint32_t se_aes_0_dec_en                :  1; /* [    5],        r/w,        0x0 */
            uint32_t se_aes_0_dec_key_sel           :  1; /* [    6],        r/w,        0x0 */
            uint32_t se_aes_0_hw_key_en             :  1; /* [    7],        r/w,        0x0 */
            uint32_t se_aes_0_int                   :  1; /* [    8],          r,        0x0 */
            uint32_t se_aes_0_int_clr_1t            :  1; /* [    9],        w1p,        0x0 */
            uint32_t se_aes_0_int_set_1t            :  1; /* [   10],        w1p,        0x0 */
            uint32_t se_aes_0_int_mask              :  1; /* [   11],        r/w,        0x0 */
            uint32_t se_aes_0_block_mode            :  2; /* [13:12],        r/w,        0x0 */
            uint32_t se_aes_0_iv_sel                :  1; /* [   14],        r/w,        0x0 */
            uint32_t se_aes_0_link_mode             :  1; /* [   15],        r/w,        0x0 */
            uint32_t se_aes_0_msg_len               : 16; /* [31:16],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_0_ctrl;

    /* 0x104 : se_aes_0_msa */
    union {
        struct {
            uint32_t se_aes_0_msa                   : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_0_msa;

    /* 0x108 : se_aes_0_mda */
    union {
        struct {
            uint32_t se_aes_0_mda                   : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_0_mda;

    /* 0x10C : se_aes_0_status */
    union {
        struct {
            uint32_t se_aes_0_status                : 32; /* [31: 0],          r,      0x100 */
        }BF;
        uint32_t WORD;
    } se_aes_0_status;

    /* 0x110 : se_aes_0_iv_0 */
    union {
        struct {
            uint32_t se_aes_0_iv_0                  : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_0_iv_0;

    /* 0x114 : se_aes_0_iv_1 */
    union {
        struct {
            uint32_t se_aes_0_iv_1                  : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_0_iv_1;

    /* 0x118 : se_aes_0_iv_2 */
    union {
        struct {
            uint32_t se_aes_0_iv_2                  : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_0_iv_2;

    /* 0x11C : se_aes_0_iv_3 */
    union {
        struct {
            uint32_t se_aes_0_iv_3                  : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_0_iv_3;

    /* 0x120 : se_aes_0_key_0 */
    union {
        struct {
            uint32_t se_aes_0_key_0                 : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_0_key_0;

    /* 0x124 : se_aes_0_key_1 */
    union {
        struct {
            uint32_t se_aes_0_key_1                 : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_0_key_1;

    /* 0x128 : se_aes_0_key_2 */
    union {
        struct {
            uint32_t se_aes_0_key_2                 : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_0_key_2;

    /* 0x12C : se_aes_0_key_3 */
    union {
        struct {
            uint32_t se_aes_0_key_3                 : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_0_key_3;

    /* 0x130 : se_aes_0_key_4 */
    union {
        struct {
            uint32_t se_aes_0_key_4                 : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_0_key_4;

    /* 0x134 : se_aes_0_key_5 */
    union {
        struct {
            uint32_t se_aes_0_key_5                 : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_0_key_5;

    /* 0x138 : se_aes_0_key_6 */
    union {
        struct {
            uint32_t se_aes_0_key_6                 : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_0_key_6;

    /* 0x13C : se_aes_0_key_7 */
    union {
        struct {
            uint32_t se_aes_0_key_7                 : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_0_key_7;

    /* 0x140 : se_aes_0_key_sel_0 */
    union {
        struct {
            uint32_t se_aes_0_key_sel_0             :  2; /* [ 1: 0],        r/w,        0x0 */
            uint32_t reserved_2_31                  : 30; /* [31: 2],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_0_key_sel_0;

    /* 0x144 : se_aes_0_key_sel_1 */
    union {
        struct {
            uint32_t se_aes_0_key_sel_1             :  2; /* [ 1: 0],        r/w,        0x0 */
            uint32_t reserved_2_31                  : 30; /* [31: 2],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_0_key_sel_1;

    /* 0x148 : se_aes_0_endian */
    union {
        struct {
            uint32_t se_aes_0_dout_endian           :  1; /* [    0],        r/w,        0x1 */
            uint32_t se_aes_0_din_endian            :  1; /* [    1],        r/w,        0x1 */
            uint32_t se_aes_0_key_endian            :  1; /* [    2],        r/w,        0x1 */
            uint32_t se_aes_0_iv_endian             :  1; /* [    3],        r/w,        0x1 */
            uint32_t reserved_4_29                  : 26; /* [29: 4],       rsvd,        0x0 */
            uint32_t se_aes_0_ctr_len               :  2; /* [31:30],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_0_endian;

    /* 0x14C : se_aes_0_sboot */
    union {
        struct {
            uint32_t se_aes_0_sboot_key_sel         :  1; /* [    0],        r/w,        0x0 */
            uint32_t reserved_1_31                  : 31; /* [31: 1],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_0_sboot;

    /* 0x150 : se_aes_0_link */
    union {
        struct {
            uint32_t se_aes_0_lca                   : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_0_link;

    /* 0x154  reserved */
    uint8_t RESERVED0x154[168];

    /* 0x1FC : se_aes_0_ctrl_prot */
    union {
        struct {
            uint32_t se_aes_prot_en                 :  1; /* [    0],        r/w,        0x1 */
            uint32_t se_aes_id0_en                  :  1; /* [    1],        r/w,        0x1 */
            uint32_t se_aes_id1_en                  :  1; /* [    2],        r/w,        0x1 */
            uint32_t reserved_3_31                  : 29; /* [31: 3],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_0_ctrl_prot;

    /* 0x200 : se_trng_0_ctrl_0 */
    union {
        struct {
            uint32_t se_trng_0_busy                 :  1; /* [    0],          r,        0x0 */
            uint32_t se_trng_0_trig_1t              :  1; /* [    1],        w1p,        0x0 */
            uint32_t se_trng_0_en                   :  1; /* [    2],        r/w,        0x0 */
            uint32_t se_trng_0_dout_clr_1t          :  1; /* [    3],        w1p,        0x0 */
            uint32_t se_trng_0_ht_error             :  1; /* [    4],          r,        0x0 */
            uint32_t reserved_5_7                   :  3; /* [ 7: 5],       rsvd,        0x0 */
            uint32_t se_trng_0_int                  :  1; /* [    8],          r,        0x0 */
            uint32_t se_trng_0_int_clr_1t           :  1; /* [    9],        w1p,        0x0 */
            uint32_t se_trng_0_int_set_1t           :  1; /* [   10],        w1p,        0x0 */
            uint32_t se_trng_0_int_mask             :  1; /* [   11],        r/w,        0x0 */
            uint32_t reserved_12                    :  1; /* [   12],       rsvd,        0x0 */
            uint32_t se_trng_0_manual_fun_sel       :  1; /* [   13],        r/w,        0x0 */
            uint32_t se_trng_0_manual_reseed        :  1; /* [   14],        r/w,        0x0 */
            uint32_t se_trng_0_manual_en            :  1; /* [   15],        r/w,        0x0 */
            uint32_t reserved_16_31                 : 16; /* [31:16],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_0_ctrl_0;

    /* 0x204 : se_trng_0_status */
    union {
        struct {
            uint32_t se_trng_0_status               : 32; /* [31: 0],          r,   0x100020 */
        }BF;
        uint32_t WORD;
    } se_trng_0_status;

    /* 0x208 : se_trng_0_dout_0 */
    union {
        struct {
            uint32_t se_trng_0_dout_0               : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_0_dout_0;

    /* 0x20C : se_trng_0_dout_1 */
    union {
        struct {
            uint32_t se_trng_0_dout_1               : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_0_dout_1;

    /* 0x210 : se_trng_0_dout_2 */
    union {
        struct {
            uint32_t se_trng_0_dout_2               : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_0_dout_2;

    /* 0x214 : se_trng_0_dout_3 */
    union {
        struct {
            uint32_t se_trng_0_dout_3               : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_0_dout_3;

    /* 0x218 : se_trng_0_dout_4 */
    union {
        struct {
            uint32_t se_trng_0_dout_4               : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_0_dout_4;

    /* 0x21C : se_trng_0_dout_5 */
    union {
        struct {
            uint32_t se_trng_0_dout_5               : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_0_dout_5;

    /* 0x220 : se_trng_0_dout_6 */
    union {
        struct {
            uint32_t se_trng_0_dout_6               : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_0_dout_6;

    /* 0x224 : se_trng_0_dout_7 */
    union {
        struct {
            uint32_t se_trng_0_dout_7               : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_0_dout_7;

    /* 0x228 : se_trng_0_test */
    union {
        struct {
            uint32_t se_trng_0_test_en              :  1; /* [    0],        r/w,        0x0 */
            uint32_t se_trng_0_cp_test_en           :  1; /* [    1],        r/w,        0x0 */
            uint32_t se_trng_0_cp_bypass            :  1; /* [    2],        r/w,        0x0 */
            uint32_t se_trng_0_ht_dis               :  1; /* [    3],        r/w,        0x0 */
            uint32_t se_trng_0_ht_alarm_n           :  8; /* [11: 4],        r/w,        0x0 */
            uint32_t reserved_12_31                 : 20; /* [31:12],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_0_test;

    /* 0x22C : se_trng_0_ctrl_1 */
    union {
        struct {
            uint32_t se_trng_0_reseed_n_lsb         : 32; /* [31: 0],        r/w,     0xffff */
        }BF;
        uint32_t WORD;
    } se_trng_0_ctrl_1;

    /* 0x230 : se_trng_0_ctrl_2 */
    union {
        struct {
            uint32_t se_trng_0_reseed_n_msb         : 16; /* [15: 0],        r/w,       0xff */
            uint32_t reserved_16_31                 : 16; /* [31:16],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_0_ctrl_2;

    /* 0x234 : se_trng_0_ctrl_3 */
    union {
        struct {
            uint32_t se_trng_0_cp_ratio             :  8; /* [ 7: 0],        r/w,        0x3 */
            uint32_t se_trng_0_ht_rct_c             :  8; /* [15: 8],        r/w,       0x42 */
            uint32_t se_trng_0_ht_apt_c             : 10; /* [25:16],        r/w,      0x37a */
            uint32_t se_trng_0_ht_od_en             :  1; /* [   26],        r/w,        0x0 */
            uint32_t reserved_27_30                 :  4; /* [30:27],       rsvd,        0x0 */
            uint32_t se_trng_0_rosc_dis             :  1; /* [   31],        r/w,        0x1 */
        }BF;
        uint32_t WORD;
    } se_trng_0_ctrl_3;

    /* 0x238  reserved */
    uint8_t RESERVED0x238[8];

    /* 0x240 : se_trng_0_test_out_0 */
    union {
        struct {
            uint32_t se_trng_0_test_out_0           : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_0_test_out_0;

    /* 0x244 : se_trng_0_test_out_1 */
    union {
        struct {
            uint32_t se_trng_0_test_out_1           : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_0_test_out_1;

    /* 0x248 : se_trng_0_test_out_2 */
    union {
        struct {
            uint32_t se_trng_0_test_out_2           : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_0_test_out_2;

    /* 0x24C : se_trng_0_test_out_3 */
    union {
        struct {
            uint32_t se_trng_0_test_out_3           : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_0_test_out_3;

    /* 0x250  reserved */
    uint8_t RESERVED0x250[172];

    /* 0x2FC : se_trng_0_ctrl_prot */
    union {
        struct {
            uint32_t se_trng_prot_en                :  1; /* [    0],        r/w,        0x1 */
            uint32_t se_trng_id0_en                 :  1; /* [    1],        r/w,        0x1 */
            uint32_t se_trng_id1_en                 :  1; /* [    2],        r/w,        0x1 */
            uint32_t reserved_3_31                  : 29; /* [31: 3],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_0_ctrl_prot;

    /* 0x300 : se_pka_0_ctrl_0 */
    union {
        struct {
            uint32_t se_pka_0_done                  :  1; /* [    0],          r,        0x0 */
            uint32_t se_pka_0_done_clr_1t           :  1; /* [    1],        w1p,        0x0 */
            uint32_t se_pka_0_busy                  :  1; /* [    2],          r,        0x0 */
            uint32_t se_pka_0_en                    :  1; /* [    3],        r/w,        0x0 */
            uint32_t se_pka_0_prot_md               :  4; /* [ 7: 4],        r/w,        0x0 */
            uint32_t se_pka_0_int                   :  1; /* [    8],          r,        0x0 */
            uint32_t se_pka_0_int_clr_1t            :  1; /* [    9],        w1p,        0x0 */
            uint32_t se_pka_0_int_set               :  1; /* [   10],        r/w,        0x0 */
            uint32_t se_pka_0_int_mask              :  1; /* [   11],        r/w,        0x0 */
            uint32_t se_pka_0_endian                :  1; /* [   12],        r/w,        0x0 */
            uint32_t se_pka_0_ram_clr_md            :  1; /* [   13],        r/w,        0x0 */
            uint32_t reserved_14_15                 :  2; /* [15:14],       rsvd,        0x0 */
            uint32_t se_pka_0_status_clr_1t         :  1; /* [   16],        w1p,        0x0 */
            uint32_t se_pka_0_status                : 15; /* [31:17],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_pka_0_ctrl_0;

    /* 0x304  reserved */
    uint8_t RESERVED0x304[8];

    /* 0x30C : se_pka_0_seed */
    union {
        struct {
            uint32_t se_pka_0_seed                  : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_pka_0_seed;

    /* 0x310 : se_pka_0_ctrl_1 */
    union {
        struct {
            uint32_t se_pka_0_hburst                :  3; /* [ 2: 0],        r/w,        0x5 */
            uint32_t se_pka_0_hbypass               :  1; /* [    3],        r/w,        0x0 */
            uint32_t reserved_4_31                  : 28; /* [31: 4],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } se_pka_0_ctrl_1;

    /* 0x314  reserved */
    uint8_t RESERVED0x314[44];

    /* 0x340 : se_pka_0_rw */
    union {
        struct {
            uint32_t reserved_0_31                  : 32; /* [31: 0],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } se_pka_0_rw;

    /* 0x344  reserved */
    uint8_t RESERVED0x344[28];

    /* 0x360 : se_pka_0_rw_burst */
    union {
        struct {
            uint32_t reserved_0_31                  : 32; /* [31: 0],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } se_pka_0_rw_burst;

    /* 0x364  reserved */
    uint8_t RESERVED0x364[152];

    /* 0x3FC : se_pka_0_ctrl_prot */
    union {
        struct {
            uint32_t se_pka_prot_en                 :  1; /* [    0],        r/w,        0x1 */
            uint32_t se_pka_id0_en                  :  1; /* [    1],        r/w,        0x1 */
            uint32_t se_pka_id1_en                  :  1; /* [    2],        r/w,        0x1 */
            uint32_t reserved_3_31                  : 29; /* [31: 3],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } se_pka_0_ctrl_prot;

    /* 0x400 : se_cdet_0_ctrl_0 */
    union {
        struct {
            uint32_t se_cdet_0_en                   :  1; /* [    0],        r/w,        0x0 */
            uint32_t se_cdet_0_error                :  1; /* [    1],          r,        0x0 */
            uint32_t se_cdet_0_status               : 14; /* [15: 2],          r,        0x1 */
            uint32_t se_cdet_0_g_loop_max           :  8; /* [23:16],        r/w,       0x64 */
            uint32_t se_cdet_0_g_loop_min           :  8; /* [31:24],        r/w,       0x21 */
        }BF;
        uint32_t WORD;
    } se_cdet_0_ctrl_0;

    /* 0x404 : se_cdet_0_ctrl_1 */
    union {
        struct {
            uint32_t se_cdet_0_t_loop_n             :  8; /* [ 7: 0],        r/w,       0x32 */
            uint32_t se_cdet_0_t_dly_n              :  8; /* [15: 8],        r/w,        0x3 */
            uint32_t se_cdet_0_g_slp_n              :  8; /* [23:16],        r/w,       0xff */
            uint32_t reserved_24_31                 :  8; /* [31:24],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } se_cdet_0_ctrl_1;

    /* 0x408  reserved */
    uint8_t RESERVED0x408[244];

    /* 0x4FC : se_cdet_0_ctrl_prot */
    union {
        struct {
            uint32_t se_cdet_prot_en                :  1; /* [    0],        r/w,        0x1 */
            uint32_t se_cdet_id0_en                 :  1; /* [    1],        r/w,        0x1 */
            uint32_t se_cdet_id1_en                 :  1; /* [    2],        r/w,        0x1 */
            uint32_t reserved_3_31                  : 29; /* [31: 3],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } se_cdet_0_ctrl_prot;

    /* 0x500 : se_gmac_0_ctrl_0 */
    union {
        struct {
            uint32_t se_gmac_0_busy                 :  1; /* [    0],          r,        0x0 */
            uint32_t se_gmac_0_trig_1t              :  1; /* [    1],        w1p,        0x0 */
            uint32_t se_gmac_0_en                   :  1; /* [    2],        r/w,        0x0 */
            uint32_t reserved_3_7                   :  5; /* [ 7: 3],       rsvd,        0x0 */
            uint32_t se_gmac_0_int                  :  1; /* [    8],          r,        0x0 */
            uint32_t se_gmac_0_int_clr_1t           :  1; /* [    9],        w1p,        0x0 */
            uint32_t se_gmac_0_int_set_1t           :  1; /* [   10],        w1p,        0x0 */
            uint32_t se_gmac_0_int_mask             :  1; /* [   11],        r/w,        0x0 */
            uint32_t se_gmac_0_t_endian             :  1; /* [   12],        r/w,        0x1 */
            uint32_t se_gmac_0_h_endian             :  1; /* [   13],        r/w,        0x1 */
            uint32_t se_gmac_0_x_endian             :  1; /* [   14],        r/w,        0x1 */
            uint32_t reserved_15_31                 : 17; /* [31:15],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } se_gmac_0_ctrl_0;

    /* 0x504 : se_gmac_0_lca */
    union {
        struct {
            uint32_t se_gmac_0_lca                  : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_gmac_0_lca;

    /* 0x508 : se_gmac_0_status */
    union {
        struct {
            uint32_t se_gmac_0_status               : 32; /* [31: 0],          r, 0xf1000000L */
        }BF;
        uint32_t WORD;
    } se_gmac_0_status;

    /* 0x50c  reserved */
    uint8_t RESERVED0x50c[240];

    /* 0x5FC : se_gmac_0_ctrl_prot */
    union {
        struct {
            uint32_t se_gmac_prot_en                :  1; /* [    0],        r/w,        0x1 */
            uint32_t se_gmac_id0_en                 :  1; /* [    1],        r/w,        0x1 */
            uint32_t se_gmac_id1_en                 :  1; /* [    2],        r/w,        0x1 */
            uint32_t reserved_3_31                  : 29; /* [31: 3],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } se_gmac_0_ctrl_prot;

    /* 0x600  reserved */
    uint8_t RESERVED0x600[2304];

    /* 0xF00 : se_ctrl_prot_rd */
    union {
        struct {
            uint32_t se_sha_prot_en_rd              :  1; /* [    0],          r,        0x1 */
            uint32_t se_sha_id0_en_rd               :  1; /* [    1],          r,        0x1 */
            uint32_t se_sha_id1_en_rd               :  1; /* [    2],          r,        0x1 */
            uint32_t reserved_3                     :  1; /* [    3],       rsvd,        0x0 */
            uint32_t se_aes_prot_en_rd              :  1; /* [    4],          r,        0x1 */
            uint32_t se_aes_id0_en_rd               :  1; /* [    5],          r,        0x1 */
            uint32_t se_aes_id1_en_rd               :  1; /* [    6],          r,        0x1 */
            uint32_t reserved_7                     :  1; /* [    7],       rsvd,        0x0 */
            uint32_t se_trng_prot_en_rd             :  1; /* [    8],          r,        0x1 */
            uint32_t se_trng_id0_en_rd              :  1; /* [    9],          r,        0x1 */
            uint32_t se_trng_id1_en_rd              :  1; /* [   10],          r,        0x1 */
            uint32_t reserved_11                    :  1; /* [   11],       rsvd,        0x0 */
            uint32_t se_pka_prot_en_rd              :  1; /* [   12],          r,        0x1 */
            uint32_t se_pka_id0_en_rd               :  1; /* [   13],          r,        0x1 */
            uint32_t se_pka_id1_en_rd               :  1; /* [   14],          r,        0x1 */
            uint32_t reserved_15                    :  1; /* [   15],       rsvd,        0x0 */
            uint32_t se_cdet_prot_en_rd             :  1; /* [   16],          r,        0x1 */
            uint32_t se_cdet_id0_en_rd              :  1; /* [   17],          r,        0x1 */
            uint32_t se_cdet_id1_en_rd              :  1; /* [   18],          r,        0x1 */
            uint32_t reserved_19                    :  1; /* [   19],       rsvd,        0x0 */
            uint32_t se_gmac_prot_en_rd             :  1; /* [   20],          r,        0x1 */
            uint32_t se_gmac_id0_en_rd              :  1; /* [   21],          r,        0x1 */
            uint32_t se_gmac_id1_en_rd              :  1; /* [   22],          r,        0x1 */
            uint32_t reserved_23_30                 :  8; /* [30:23],       rsvd,        0x0 */
            uint32_t se_dbg_dis                     :  1; /* [   31],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_ctrl_prot_rd;

    /* 0xF04 : se_ctrl_reserved_0 */
    union {
        struct {
            uint32_t se_ctrl_reserved_0             : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_ctrl_reserved_0;

    /* 0xF08 : se_ctrl_reserved_1 */
    union {
        struct {
            uint32_t se_ctrl_reserved_1             : 32; /* [31: 0],        r/w, 0xffffffffL */
        }BF;
        uint32_t WORD;
    } se_ctrl_reserved_1;

    /* 0xF0C : se_ctrl_reserved_2 */
    union {
        struct {
            uint32_t se_ctrl_reserved_2             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_ctrl_reserved_2;

};

typedef volatile struct sec_eng_reg sec_eng_reg_t;


/*Following is reg patch*/

/* 0x0 : se_sha_ctrl */
#define SEC_ENG_SE_SHA_CTRL_OFFSET                              (0x0)
#define SEC_ENG_SE_SHA_BUSY                                     SEC_ENG_SE_SHA_BUSY
#define SEC_ENG_SE_SHA_BUSY_POS                                 (0U)
#define SEC_ENG_SE_SHA_BUSY_LEN                                 (1U)
#define SEC_ENG_SE_SHA_BUSY_MSK                                 (((1U<<SEC_ENG_SE_SHA_BUSY_LEN)-1)<<SEC_ENG_SE_SHA_BUSY_POS)
#define SEC_ENG_SE_SHA_BUSY_UMSK                                (~(((1U<<SEC_ENG_SE_SHA_BUSY_LEN)-1)<<SEC_ENG_SE_SHA_BUSY_POS))
#define SEC_ENG_SE_SHA_TRIG_1T                                  SEC_ENG_SE_SHA_TRIG_1T
#define SEC_ENG_SE_SHA_TRIG_1T_POS                              (1U)
#define SEC_ENG_SE_SHA_TRIG_1T_LEN                              (1U)
#define SEC_ENG_SE_SHA_TRIG_1T_MSK                              (((1U<<SEC_ENG_SE_SHA_TRIG_1T_LEN)-1)<<SEC_ENG_SE_SHA_TRIG_1T_POS)
#define SEC_ENG_SE_SHA_TRIG_1T_UMSK                             (~(((1U<<SEC_ENG_SE_SHA_TRIG_1T_LEN)-1)<<SEC_ENG_SE_SHA_TRIG_1T_POS))
#define SEC_ENG_SE_SHA_MODE                                     SEC_ENG_SE_SHA_MODE
#define SEC_ENG_SE_SHA_MODE_POS                                 (2U)
#define SEC_ENG_SE_SHA_MODE_LEN                                 (3U)
#define SEC_ENG_SE_SHA_MODE_MSK                                 (((1U<<SEC_ENG_SE_SHA_MODE_LEN)-1)<<SEC_ENG_SE_SHA_MODE_POS)
#define SEC_ENG_SE_SHA_MODE_UMSK                                (~(((1U<<SEC_ENG_SE_SHA_MODE_LEN)-1)<<SEC_ENG_SE_SHA_MODE_POS))
#define SEC_ENG_SE_SHA_EN                                       SEC_ENG_SE_SHA_EN
#define SEC_ENG_SE_SHA_EN_POS                                   (5U)
#define SEC_ENG_SE_SHA_EN_LEN                                   (1U)
#define SEC_ENG_SE_SHA_EN_MSK                                   (((1U<<SEC_ENG_SE_SHA_EN_LEN)-1)<<SEC_ENG_SE_SHA_EN_POS)
#define SEC_ENG_SE_SHA_EN_UMSK                                  (~(((1U<<SEC_ENG_SE_SHA_EN_LEN)-1)<<SEC_ENG_SE_SHA_EN_POS))
#define SEC_ENG_SE_SHA_HASH_SEL                                 SEC_ENG_SE_SHA_HASH_SEL
#define SEC_ENG_SE_SHA_HASH_SEL_POS                             (6U)
#define SEC_ENG_SE_SHA_HASH_SEL_LEN                             (1U)
#define SEC_ENG_SE_SHA_HASH_SEL_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_SEL_LEN)-1)<<SEC_ENG_SE_SHA_HASH_SEL_POS)
#define SEC_ENG_SE_SHA_HASH_SEL_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_SEL_LEN)-1)<<SEC_ENG_SE_SHA_HASH_SEL_POS))
#define SEC_ENG_SE_SHA_INT                                      SEC_ENG_SE_SHA_INT
#define SEC_ENG_SE_SHA_INT_POS                                  (8U)
#define SEC_ENG_SE_SHA_INT_LEN                                  (1U)
#define SEC_ENG_SE_SHA_INT_MSK                                  (((1U<<SEC_ENG_SE_SHA_INT_LEN)-1)<<SEC_ENG_SE_SHA_INT_POS)
#define SEC_ENG_SE_SHA_INT_UMSK                                 (~(((1U<<SEC_ENG_SE_SHA_INT_LEN)-1)<<SEC_ENG_SE_SHA_INT_POS))
#define SEC_ENG_SE_SHA_INT_CLR_1T                               SEC_ENG_SE_SHA_INT_CLR_1T
#define SEC_ENG_SE_SHA_INT_CLR_1T_POS                           (9U)
#define SEC_ENG_SE_SHA_INT_CLR_1T_LEN                           (1U)
#define SEC_ENG_SE_SHA_INT_CLR_1T_MSK                           (((1U<<SEC_ENG_SE_SHA_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_SHA_INT_CLR_1T_POS)
#define SEC_ENG_SE_SHA_INT_CLR_1T_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_SHA_INT_CLR_1T_POS))
#define SEC_ENG_SE_SHA_INT_SET_1T                               SEC_ENG_SE_SHA_INT_SET_1T
#define SEC_ENG_SE_SHA_INT_SET_1T_POS                           (10U)
#define SEC_ENG_SE_SHA_INT_SET_1T_LEN                           (1U)
#define SEC_ENG_SE_SHA_INT_SET_1T_MSK                           (((1U<<SEC_ENG_SE_SHA_INT_SET_1T_LEN)-1)<<SEC_ENG_SE_SHA_INT_SET_1T_POS)
#define SEC_ENG_SE_SHA_INT_SET_1T_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_INT_SET_1T_LEN)-1)<<SEC_ENG_SE_SHA_INT_SET_1T_POS))
#define SEC_ENG_SE_SHA_INT_MASK                                 SEC_ENG_SE_SHA_INT_MASK
#define SEC_ENG_SE_SHA_INT_MASK_POS                             (11U)
#define SEC_ENG_SE_SHA_INT_MASK_LEN                             (1U)
#define SEC_ENG_SE_SHA_INT_MASK_MSK                             (((1U<<SEC_ENG_SE_SHA_INT_MASK_LEN)-1)<<SEC_ENG_SE_SHA_INT_MASK_POS)
#define SEC_ENG_SE_SHA_INT_MASK_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_INT_MASK_LEN)-1)<<SEC_ENG_SE_SHA_INT_MASK_POS))
#define SEC_ENG_SE_SHA_LINK_MODE                                SEC_ENG_SE_SHA_LINK_MODE
#define SEC_ENG_SE_SHA_LINK_MODE_POS                            (15U)
#define SEC_ENG_SE_SHA_LINK_MODE_LEN                            (1U)
#define SEC_ENG_SE_SHA_LINK_MODE_MSK                            (((1U<<SEC_ENG_SE_SHA_LINK_MODE_LEN)-1)<<SEC_ENG_SE_SHA_LINK_MODE_POS)
#define SEC_ENG_SE_SHA_LINK_MODE_UMSK                           (~(((1U<<SEC_ENG_SE_SHA_LINK_MODE_LEN)-1)<<SEC_ENG_SE_SHA_LINK_MODE_POS))
#define SEC_ENG_SE_SHA_MSG_LEN                                  SEC_ENG_SE_SHA_MSG_LEN
#define SEC_ENG_SE_SHA_MSG_LEN_POS                              (16U)
#define SEC_ENG_SE_SHA_MSG_LEN_LEN                              (16U)
#define SEC_ENG_SE_SHA_MSG_LEN_MSK                              (((1U<<SEC_ENG_SE_SHA_MSG_LEN_LEN)-1)<<SEC_ENG_SE_SHA_MSG_LEN_POS)
#define SEC_ENG_SE_SHA_MSG_LEN_UMSK                             (~(((1U<<SEC_ENG_SE_SHA_MSG_LEN_LEN)-1)<<SEC_ENG_SE_SHA_MSG_LEN_POS))

/* 0x4 : se_sha_msa */
#define SEC_ENG_SE_SHA_MSA_OFFSET                               (0x4)
#define SEC_ENG_SE_SHA_MSA                                      SEC_ENG_SE_SHA_MSA
#define SEC_ENG_SE_SHA_MSA_POS                                  (0U)
#define SEC_ENG_SE_SHA_MSA_LEN                                  (32U)
#define SEC_ENG_SE_SHA_MSA_MSK                                  (((1U<<SEC_ENG_SE_SHA_MSA_LEN)-1)<<SEC_ENG_SE_SHA_MSA_POS)
#define SEC_ENG_SE_SHA_MSA_UMSK                                 (~(((1U<<SEC_ENG_SE_SHA_MSA_LEN)-1)<<SEC_ENG_SE_SHA_MSA_POS))

/* 0x8 : se_sha_status */
#define SEC_ENG_SE_SHA_STATUS_OFFSET                            (0x8)
#define SEC_ENG_SE_SHA_STATUS                                   SEC_ENG_SE_SHA_STATUS
#define SEC_ENG_SE_SHA_STATUS_POS                               (0U)
#define SEC_ENG_SE_SHA_STATUS_LEN                               (32U)
#define SEC_ENG_SE_SHA_STATUS_MSK                               (((1U<<SEC_ENG_SE_SHA_STATUS_LEN)-1)<<SEC_ENG_SE_SHA_STATUS_POS)
#define SEC_ENG_SE_SHA_STATUS_UMSK                              (~(((1U<<SEC_ENG_SE_SHA_STATUS_LEN)-1)<<SEC_ENG_SE_SHA_STATUS_POS))

/* 0xc : se_sha_endian */
#define SEC_ENG_SE_SHA_ENDIAN_OFFSET                            (0xc)
#define SEC_ENG_SE_SHA_DOUT_ENDIAN                              SEC_ENG_SE_SHA_DOUT_ENDIAN
#define SEC_ENG_SE_SHA_DOUT_ENDIAN_POS                          (0U)
#define SEC_ENG_SE_SHA_DOUT_ENDIAN_LEN                          (1U)
#define SEC_ENG_SE_SHA_DOUT_ENDIAN_MSK                          (((1U<<SEC_ENG_SE_SHA_DOUT_ENDIAN_LEN)-1)<<SEC_ENG_SE_SHA_DOUT_ENDIAN_POS)
#define SEC_ENG_SE_SHA_DOUT_ENDIAN_UMSK                         (~(((1U<<SEC_ENG_SE_SHA_DOUT_ENDIAN_LEN)-1)<<SEC_ENG_SE_SHA_DOUT_ENDIAN_POS))

/* 0x10 : se_sha_hash_l_0 */
#define SEC_ENG_SE_SHA_HASH_L_0_OFFSET                          (0x10)
#define SEC_ENG_SE_SHA_HASH_L_0                                 SEC_ENG_SE_SHA_HASH_L_0
#define SEC_ENG_SE_SHA_HASH_L_0_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_L_0_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_L_0_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_L_0_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_0_POS)
#define SEC_ENG_SE_SHA_HASH_L_0_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_L_0_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_0_POS))

/* 0x14 : se_sha_hash_l_1 */
#define SEC_ENG_SE_SHA_HASH_L_1_OFFSET                          (0x14)
#define SEC_ENG_SE_SHA_HASH_L_1                                 SEC_ENG_SE_SHA_HASH_L_1
#define SEC_ENG_SE_SHA_HASH_L_1_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_L_1_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_L_1_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_L_1_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_1_POS)
#define SEC_ENG_SE_SHA_HASH_L_1_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_L_1_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_1_POS))

/* 0x18 : se_sha_hash_l_2 */
#define SEC_ENG_SE_SHA_HASH_L_2_OFFSET                          (0x18)
#define SEC_ENG_SE_SHA_HASH_L_2                                 SEC_ENG_SE_SHA_HASH_L_2
#define SEC_ENG_SE_SHA_HASH_L_2_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_L_2_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_L_2_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_L_2_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_2_POS)
#define SEC_ENG_SE_SHA_HASH_L_2_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_L_2_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_2_POS))

/* 0x1c : se_sha_hash_l_3 */
#define SEC_ENG_SE_SHA_HASH_L_3_OFFSET                          (0x1c)
#define SEC_ENG_SE_SHA_HASH_L_3                                 SEC_ENG_SE_SHA_HASH_L_3
#define SEC_ENG_SE_SHA_HASH_L_3_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_L_3_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_L_3_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_L_3_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_3_POS)
#define SEC_ENG_SE_SHA_HASH_L_3_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_L_3_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_3_POS))

/* 0x20 : se_sha_hash_l_4 */
#define SEC_ENG_SE_SHA_HASH_L_4_OFFSET                          (0x20)
#define SEC_ENG_SE_SHA_HASH_L_4                                 SEC_ENG_SE_SHA_HASH_L_4
#define SEC_ENG_SE_SHA_HASH_L_4_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_L_4_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_L_4_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_L_4_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_4_POS)
#define SEC_ENG_SE_SHA_HASH_L_4_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_L_4_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_4_POS))

/* 0x24 : se_sha_hash_l_5 */
#define SEC_ENG_SE_SHA_HASH_L_5_OFFSET                          (0x24)
#define SEC_ENG_SE_SHA_HASH_L_5                                 SEC_ENG_SE_SHA_HASH_L_5
#define SEC_ENG_SE_SHA_HASH_L_5_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_L_5_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_L_5_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_L_5_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_5_POS)
#define SEC_ENG_SE_SHA_HASH_L_5_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_L_5_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_5_POS))

/* 0x28 : se_sha_hash_l_6 */
#define SEC_ENG_SE_SHA_HASH_L_6_OFFSET                          (0x28)
#define SEC_ENG_SE_SHA_HASH_L_6                                 SEC_ENG_SE_SHA_HASH_L_6
#define SEC_ENG_SE_SHA_HASH_L_6_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_L_6_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_L_6_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_L_6_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_6_POS)
#define SEC_ENG_SE_SHA_HASH_L_6_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_L_6_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_6_POS))

/* 0x2c : se_sha_hash_l_7 */
#define SEC_ENG_SE_SHA_HASH_L_7_OFFSET                          (0x2c)
#define SEC_ENG_SE_SHA_HASH_L_7                                 SEC_ENG_SE_SHA_HASH_L_7
#define SEC_ENG_SE_SHA_HASH_L_7_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_L_7_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_L_7_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_L_7_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_7_POS)
#define SEC_ENG_SE_SHA_HASH_L_7_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_L_7_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_7_POS))

/* 0x30 : se_sha_hash_h_0 */
#define SEC_ENG_SE_SHA_HASH_H_0_OFFSET                          (0x30)
#define SEC_ENG_SE_SHA_HASH_H_0                                 SEC_ENG_SE_SHA_HASH_H_0
#define SEC_ENG_SE_SHA_HASH_H_0_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_H_0_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_H_0_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_H_0_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_0_POS)
#define SEC_ENG_SE_SHA_HASH_H_0_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_H_0_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_0_POS))

/* 0x34 : se_sha_hash_h_1 */
#define SEC_ENG_SE_SHA_HASH_H_1_OFFSET                          (0x34)
#define SEC_ENG_SE_SHA_HASH_H_1                                 SEC_ENG_SE_SHA_HASH_H_1
#define SEC_ENG_SE_SHA_HASH_H_1_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_H_1_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_H_1_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_H_1_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_1_POS)
#define SEC_ENG_SE_SHA_HASH_H_1_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_H_1_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_1_POS))

/* 0x38 : se_sha_hash_h_2 */
#define SEC_ENG_SE_SHA_HASH_H_2_OFFSET                          (0x38)
#define SEC_ENG_SE_SHA_HASH_H_2                                 SEC_ENG_SE_SHA_HASH_H_2
#define SEC_ENG_SE_SHA_HASH_H_2_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_H_2_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_H_2_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_H_2_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_2_POS)
#define SEC_ENG_SE_SHA_HASH_H_2_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_H_2_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_2_POS))

/* 0x3c : se_sha_hash_h_3 */
#define SEC_ENG_SE_SHA_HASH_H_3_OFFSET                          (0x3c)
#define SEC_ENG_SE_SHA_HASH_H_3                                 SEC_ENG_SE_SHA_HASH_H_3
#define SEC_ENG_SE_SHA_HASH_H_3_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_H_3_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_H_3_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_H_3_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_3_POS)
#define SEC_ENG_SE_SHA_HASH_H_3_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_H_3_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_3_POS))

/* 0x40 : se_sha_hash_h_4 */
#define SEC_ENG_SE_SHA_HASH_H_4_OFFSET                          (0x40)
#define SEC_ENG_SE_SHA_HASH_H_4                                 SEC_ENG_SE_SHA_HASH_H_4
#define SEC_ENG_SE_SHA_HASH_H_4_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_H_4_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_H_4_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_H_4_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_4_POS)
#define SEC_ENG_SE_SHA_HASH_H_4_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_H_4_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_4_POS))

/* 0x44 : se_sha_hash_h_5 */
#define SEC_ENG_SE_SHA_HASH_H_5_OFFSET                          (0x44)
#define SEC_ENG_SE_SHA_HASH_H_5                                 SEC_ENG_SE_SHA_HASH_H_5
#define SEC_ENG_SE_SHA_HASH_H_5_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_H_5_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_H_5_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_H_5_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_5_POS)
#define SEC_ENG_SE_SHA_HASH_H_5_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_H_5_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_5_POS))

/* 0x48 : se_sha_hash_h_6 */
#define SEC_ENG_SE_SHA_HASH_H_6_OFFSET                          (0x48)
#define SEC_ENG_SE_SHA_HASH_H_6                                 SEC_ENG_SE_SHA_HASH_H_6
#define SEC_ENG_SE_SHA_HASH_H_6_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_H_6_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_H_6_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_H_6_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_6_POS)
#define SEC_ENG_SE_SHA_HASH_H_6_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_H_6_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_6_POS))

/* 0x4c : se_sha_hash_h_7 */
#define SEC_ENG_SE_SHA_HASH_H_7_OFFSET                          (0x4c)
#define SEC_ENG_SE_SHA_HASH_H_7                                 SEC_ENG_SE_SHA_HASH_H_7
#define SEC_ENG_SE_SHA_HASH_H_7_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_H_7_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_H_7_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_H_7_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_7_POS)
#define SEC_ENG_SE_SHA_HASH_H_7_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_H_7_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_7_POS))

/* 0x50 : se_sha_link */
#define SEC_ENG_SE_SHA_LINK_OFFSET                              (0x50)
#define SEC_ENG_SE_SHA_LCA                                      SEC_ENG_SE_SHA_LCA
#define SEC_ENG_SE_SHA_LCA_POS                                  (0U)
#define SEC_ENG_SE_SHA_LCA_LEN                                  (32U)
#define SEC_ENG_SE_SHA_LCA_MSK                                  (((1U<<SEC_ENG_SE_SHA_LCA_LEN)-1)<<SEC_ENG_SE_SHA_LCA_POS)
#define SEC_ENG_SE_SHA_LCA_UMSK                                 (~(((1U<<SEC_ENG_SE_SHA_LCA_LEN)-1)<<SEC_ENG_SE_SHA_LCA_POS))

/* 0xfc : se_sha_ctrl_prot */
#define SEC_ENG_SE_SHA_CTRL_PROT_OFFSET                         (0xfc)
#define SEC_ENG_SE_SHA_PROT_EN                                  SEC_ENG_SE_SHA_PROT_EN
#define SEC_ENG_SE_SHA_PROT_EN_POS                              (0U)
#define SEC_ENG_SE_SHA_PROT_EN_LEN                              (1U)
#define SEC_ENG_SE_SHA_PROT_EN_MSK                              (((1U<<SEC_ENG_SE_SHA_PROT_EN_LEN)-1)<<SEC_ENG_SE_SHA_PROT_EN_POS)
#define SEC_ENG_SE_SHA_PROT_EN_UMSK                             (~(((1U<<SEC_ENG_SE_SHA_PROT_EN_LEN)-1)<<SEC_ENG_SE_SHA_PROT_EN_POS))
#define SEC_ENG_SE_SHA_ID0_EN                                   SEC_ENG_SE_SHA_ID0_EN
#define SEC_ENG_SE_SHA_ID0_EN_POS                               (1U)
#define SEC_ENG_SE_SHA_ID0_EN_LEN                               (1U)
#define SEC_ENG_SE_SHA_ID0_EN_MSK                               (((1U<<SEC_ENG_SE_SHA_ID0_EN_LEN)-1)<<SEC_ENG_SE_SHA_ID0_EN_POS)
#define SEC_ENG_SE_SHA_ID0_EN_UMSK                              (~(((1U<<SEC_ENG_SE_SHA_ID0_EN_LEN)-1)<<SEC_ENG_SE_SHA_ID0_EN_POS))
#define SEC_ENG_SE_SHA_ID1_EN                                   SEC_ENG_SE_SHA_ID1_EN
#define SEC_ENG_SE_SHA_ID1_EN_POS                               (2U)
#define SEC_ENG_SE_SHA_ID1_EN_LEN                               (1U)
#define SEC_ENG_SE_SHA_ID1_EN_MSK                               (((1U<<SEC_ENG_SE_SHA_ID1_EN_LEN)-1)<<SEC_ENG_SE_SHA_ID1_EN_POS)
#define SEC_ENG_SE_SHA_ID1_EN_UMSK                              (~(((1U<<SEC_ENG_SE_SHA_ID1_EN_LEN)-1)<<SEC_ENG_SE_SHA_ID1_EN_POS))


struct  sec_eng_sha_reg {
    /* 0x0 : se_sha_ctrl */
    union {
        struct {
            uint32_t se_sha_busy                    :  1; /* [    0],          r,        0x0 */
            uint32_t se_sha_trig_1t                 :  1; /* [    1],        w1p,        0x0 */
            uint32_t se_sha_mode                    :  3; /* [ 4: 2],        r/w,        0x0 */
            uint32_t se_sha_en                      :  1; /* [    5],        r/w,        0x0 */
            uint32_t se_sha_hash_sel                :  1; /* [    6],        r/w,        0x0 */
            uint32_t reserved_7                     :  1; /* [    7],       rsvd,        0x0 */
            uint32_t se_sha_int                     :  1; /* [    8],          r,        0x0 */
            uint32_t se_sha_int_clr_1t              :  1; /* [    9],        w1p,        0x0 */
            uint32_t se_sha_int_set_1t              :  1; /* [   10],        w1p,        0x0 */
            uint32_t se_sha_int_mask                :  1; /* [   11],        r/w,        0x0 */
            uint32_t reserved_12_14                 :  3; /* [14:12],       rsvd,        0x0 */
            uint32_t se_sha_link_mode               :  1; /* [   15],        r/w,        0x0 */
            uint32_t se_sha_msg_len                 : 16; /* [31:16],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_ctrl;

    /* 0x4 : se_sha_msa */
    union {
        struct {
            uint32_t se_sha_msa                     : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_msa;

    /* 0x8 : se_sha_status */
    union {
        struct {
            uint32_t se_sha_status                  : 32; /* [31: 0],          r,       0x41 */
        }BF;
        uint32_t WORD;
    } se_sha_status;

    /* 0xc : se_sha_endian */
    union {
        struct {
            uint32_t se_sha_dout_endian             :  1; /* [    0],        r/w,        0x1 */
            uint32_t reserved_1_31                  : 31; /* [31: 1],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_endian;

    /* 0x10 : se_sha_hash_l_0 */
    union {
        struct {
            uint32_t se_sha_hash_l_0                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_hash_l_0;

    /* 0x14 : se_sha_hash_l_1 */
    union {
        struct {
            uint32_t se_sha_hash_l_1                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_hash_l_1;

    /* 0x18 : se_sha_hash_l_2 */
    union {
        struct {
            uint32_t se_sha_hash_l_2                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_hash_l_2;

    /* 0x1c : se_sha_hash_l_3 */
    union {
        struct {
            uint32_t se_sha_hash_l_3                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_hash_l_3;

    /* 0x20 : se_sha_hash_l_4 */
    union {
        struct {
            uint32_t se_sha_hash_l_4                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_hash_l_4;

    /* 0x24 : se_sha_hash_l_5 */
    union {
        struct {
            uint32_t se_sha_hash_l_5                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_hash_l_5;

    /* 0x28 : se_sha_hash_l_6 */
    union {
        struct {
            uint32_t se_sha_hash_l_6                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_hash_l_6;

    /* 0x2c : se_sha_hash_l_7 */
    union {
        struct {
            uint32_t se_sha_hash_l_7                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_hash_l_7;

    /* 0x30 : se_sha_hash_h_0 */
    union {
        struct {
            uint32_t se_sha_hash_h_0                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_hash_h_0;

    /* 0x34 : se_sha_hash_h_1 */
    union {
        struct {
            uint32_t se_sha_hash_h_1                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_hash_h_1;

    /* 0x38 : se_sha_hash_h_2 */
    union {
        struct {
            uint32_t se_sha_hash_h_2                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_hash_h_2;

    /* 0x3c : se_sha_hash_h_3 */
    union {
        struct {
            uint32_t se_sha_hash_h_3                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_hash_h_3;

    /* 0x40 : se_sha_hash_h_4 */
    union {
        struct {
            uint32_t se_sha_hash_h_4                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_hash_h_4;

    /* 0x44 : se_sha_hash_h_5 */
    union {
        struct {
            uint32_t se_sha_hash_h_5                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_hash_h_5;

    /* 0x48 : se_sha_hash_h_6 */
    union {
        struct {
            uint32_t se_sha_hash_h_6                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_hash_h_6;

    /* 0x4c : se_sha_hash_h_7 */
    union {
        struct {
            uint32_t se_sha_hash_h_7                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_hash_h_7;

    /* 0x50 : se_sha_link */
    union {
        struct {
            uint32_t se_sha_lca                     : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_link;

    /* 0x54  reserved */
    uint8_t RESERVED0x54[168];

    /* 0xfc : se_sha_ctrl_prot */
    union {
        struct {
            uint32_t se_sha_prot_en                 :  1; /* [    0],        r/w,        0x1 */
            uint32_t se_sha_id0_en                  :  1; /* [    1],        r/w,        0x1 */
            uint32_t se_sha_id1_en                  :  1; /* [    2],        r/w,        0x1 */
            uint32_t reserved_3_31                  : 29; /* [31: 3],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } se_sha_ctrl_prot;

};

typedef volatile struct sec_eng_sha_reg sec_eng_sha_reg_t;

#define SEC_ENG_SHA_OFFSET     0x000


/*Following is reg patch*/

/* 0x0 : se_aes_ctrl */
#define SEC_ENG_SE_AES_CTRL_OFFSET                              (0x0)
#define SEC_ENG_SE_AES_BUSY                                     SEC_ENG_SE_AES_BUSY
#define SEC_ENG_SE_AES_BUSY_POS                                 (0U)
#define SEC_ENG_SE_AES_BUSY_LEN                                 (1U)
#define SEC_ENG_SE_AES_BUSY_MSK                                 (((1U<<SEC_ENG_SE_AES_BUSY_LEN)-1)<<SEC_ENG_SE_AES_BUSY_POS)
#define SEC_ENG_SE_AES_BUSY_UMSK                                (~(((1U<<SEC_ENG_SE_AES_BUSY_LEN)-1)<<SEC_ENG_SE_AES_BUSY_POS))
#define SEC_ENG_SE_AES_TRIG_1T                                  SEC_ENG_SE_AES_TRIG_1T
#define SEC_ENG_SE_AES_TRIG_1T_POS                              (1U)
#define SEC_ENG_SE_AES_TRIG_1T_LEN                              (1U)
#define SEC_ENG_SE_AES_TRIG_1T_MSK                              (((1U<<SEC_ENG_SE_AES_TRIG_1T_LEN)-1)<<SEC_ENG_SE_AES_TRIG_1T_POS)
#define SEC_ENG_SE_AES_TRIG_1T_UMSK                             (~(((1U<<SEC_ENG_SE_AES_TRIG_1T_LEN)-1)<<SEC_ENG_SE_AES_TRIG_1T_POS))
#define SEC_ENG_SE_AES_EN                                       SEC_ENG_SE_AES_EN
#define SEC_ENG_SE_AES_EN_POS                                   (2U)
#define SEC_ENG_SE_AES_EN_LEN                                   (1U)
#define SEC_ENG_SE_AES_EN_MSK                                   (((1U<<SEC_ENG_SE_AES_EN_LEN)-1)<<SEC_ENG_SE_AES_EN_POS)
#define SEC_ENG_SE_AES_EN_UMSK                                  (~(((1U<<SEC_ENG_SE_AES_EN_LEN)-1)<<SEC_ENG_SE_AES_EN_POS))
#define SEC_ENG_SE_AES_MODE                                     SEC_ENG_SE_AES_MODE
#define SEC_ENG_SE_AES_MODE_POS                                 (3U)
#define SEC_ENG_SE_AES_MODE_LEN                                 (2U)
#define SEC_ENG_SE_AES_MODE_MSK                                 (((1U<<SEC_ENG_SE_AES_MODE_LEN)-1)<<SEC_ENG_SE_AES_MODE_POS)
#define SEC_ENG_SE_AES_MODE_UMSK                                (~(((1U<<SEC_ENG_SE_AES_MODE_LEN)-1)<<SEC_ENG_SE_AES_MODE_POS))
#define SEC_ENG_SE_AES_DEC_EN                                   SEC_ENG_SE_AES_DEC_EN
#define SEC_ENG_SE_AES_DEC_EN_POS                               (5U)
#define SEC_ENG_SE_AES_DEC_EN_LEN                               (1U)
#define SEC_ENG_SE_AES_DEC_EN_MSK                               (((1U<<SEC_ENG_SE_AES_DEC_EN_LEN)-1)<<SEC_ENG_SE_AES_DEC_EN_POS)
#define SEC_ENG_SE_AES_DEC_EN_UMSK                              (~(((1U<<SEC_ENG_SE_AES_DEC_EN_LEN)-1)<<SEC_ENG_SE_AES_DEC_EN_POS))
#define SEC_ENG_SE_AES_DEC_KEY_SEL                              SEC_ENG_SE_AES_DEC_KEY_SEL
#define SEC_ENG_SE_AES_DEC_KEY_SEL_POS                          (6U)
#define SEC_ENG_SE_AES_DEC_KEY_SEL_LEN                          (1U)
#define SEC_ENG_SE_AES_DEC_KEY_SEL_MSK                          (((1U<<SEC_ENG_SE_AES_DEC_KEY_SEL_LEN)-1)<<SEC_ENG_SE_AES_DEC_KEY_SEL_POS)
#define SEC_ENG_SE_AES_DEC_KEY_SEL_UMSK                         (~(((1U<<SEC_ENG_SE_AES_DEC_KEY_SEL_LEN)-1)<<SEC_ENG_SE_AES_DEC_KEY_SEL_POS))
#define SEC_ENG_SE_AES_HW_KEY_EN                                SEC_ENG_SE_AES_HW_KEY_EN
#define SEC_ENG_SE_AES_HW_KEY_EN_POS                            (7U)
#define SEC_ENG_SE_AES_HW_KEY_EN_LEN                            (1U)
#define SEC_ENG_SE_AES_HW_KEY_EN_MSK                            (((1U<<SEC_ENG_SE_AES_HW_KEY_EN_LEN)-1)<<SEC_ENG_SE_AES_HW_KEY_EN_POS)
#define SEC_ENG_SE_AES_HW_KEY_EN_UMSK                           (~(((1U<<SEC_ENG_SE_AES_HW_KEY_EN_LEN)-1)<<SEC_ENG_SE_AES_HW_KEY_EN_POS))
#define SEC_ENG_SE_AES_INT                                      SEC_ENG_SE_AES_INT
#define SEC_ENG_SE_AES_INT_POS                                  (8U)
#define SEC_ENG_SE_AES_INT_LEN                                  (1U)
#define SEC_ENG_SE_AES_INT_MSK                                  (((1U<<SEC_ENG_SE_AES_INT_LEN)-1)<<SEC_ENG_SE_AES_INT_POS)
#define SEC_ENG_SE_AES_INT_UMSK                                 (~(((1U<<SEC_ENG_SE_AES_INT_LEN)-1)<<SEC_ENG_SE_AES_INT_POS))
#define SEC_ENG_SE_AES_INT_CLR_1T                               SEC_ENG_SE_AES_INT_CLR_1T
#define SEC_ENG_SE_AES_INT_CLR_1T_POS                           (9U)
#define SEC_ENG_SE_AES_INT_CLR_1T_LEN                           (1U)
#define SEC_ENG_SE_AES_INT_CLR_1T_MSK                           (((1U<<SEC_ENG_SE_AES_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_AES_INT_CLR_1T_POS)
#define SEC_ENG_SE_AES_INT_CLR_1T_UMSK                          (~(((1U<<SEC_ENG_SE_AES_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_AES_INT_CLR_1T_POS))
#define SEC_ENG_SE_AES_INT_SET_1T                               SEC_ENG_SE_AES_INT_SET_1T
#define SEC_ENG_SE_AES_INT_SET_1T_POS                           (10U)
#define SEC_ENG_SE_AES_INT_SET_1T_LEN                           (1U)
#define SEC_ENG_SE_AES_INT_SET_1T_MSK                           (((1U<<SEC_ENG_SE_AES_INT_SET_1T_LEN)-1)<<SEC_ENG_SE_AES_INT_SET_1T_POS)
#define SEC_ENG_SE_AES_INT_SET_1T_UMSK                          (~(((1U<<SEC_ENG_SE_AES_INT_SET_1T_LEN)-1)<<SEC_ENG_SE_AES_INT_SET_1T_POS))
#define SEC_ENG_SE_AES_INT_MASK                                 SEC_ENG_SE_AES_INT_MASK
#define SEC_ENG_SE_AES_INT_MASK_POS                             (11U)
#define SEC_ENG_SE_AES_INT_MASK_LEN                             (1U)
#define SEC_ENG_SE_AES_INT_MASK_MSK                             (((1U<<SEC_ENG_SE_AES_INT_MASK_LEN)-1)<<SEC_ENG_SE_AES_INT_MASK_POS)
#define SEC_ENG_SE_AES_INT_MASK_UMSK                            (~(((1U<<SEC_ENG_SE_AES_INT_MASK_LEN)-1)<<SEC_ENG_SE_AES_INT_MASK_POS))
#define SEC_ENG_SE_AES_BLOCK_MODE                               SEC_ENG_SE_AES_BLOCK_MODE
#define SEC_ENG_SE_AES_BLOCK_MODE_POS                           (12U)
#define SEC_ENG_SE_AES_BLOCK_MODE_LEN                           (2U)
#define SEC_ENG_SE_AES_BLOCK_MODE_MSK                           (((1U<<SEC_ENG_SE_AES_BLOCK_MODE_LEN)-1)<<SEC_ENG_SE_AES_BLOCK_MODE_POS)
#define SEC_ENG_SE_AES_BLOCK_MODE_UMSK                          (~(((1U<<SEC_ENG_SE_AES_BLOCK_MODE_LEN)-1)<<SEC_ENG_SE_AES_BLOCK_MODE_POS))
#define SEC_ENG_SE_AES_IV_SEL                                   SEC_ENG_SE_AES_IV_SEL
#define SEC_ENG_SE_AES_IV_SEL_POS                               (14U)
#define SEC_ENG_SE_AES_IV_SEL_LEN                               (1U)
#define SEC_ENG_SE_AES_IV_SEL_MSK                               (((1U<<SEC_ENG_SE_AES_IV_SEL_LEN)-1)<<SEC_ENG_SE_AES_IV_SEL_POS)
#define SEC_ENG_SE_AES_IV_SEL_UMSK                              (~(((1U<<SEC_ENG_SE_AES_IV_SEL_LEN)-1)<<SEC_ENG_SE_AES_IV_SEL_POS))
#define SEC_ENG_SE_AES_LINK_MODE                                SEC_ENG_SE_AES_LINK_MODE
#define SEC_ENG_SE_AES_LINK_MODE_POS                            (15U)
#define SEC_ENG_SE_AES_LINK_MODE_LEN                            (1U)
#define SEC_ENG_SE_AES_LINK_MODE_MSK                            (((1U<<SEC_ENG_SE_AES_LINK_MODE_LEN)-1)<<SEC_ENG_SE_AES_LINK_MODE_POS)
#define SEC_ENG_SE_AES_LINK_MODE_UMSK                           (~(((1U<<SEC_ENG_SE_AES_LINK_MODE_LEN)-1)<<SEC_ENG_SE_AES_LINK_MODE_POS))
#define SEC_ENG_SE_AES_MSG_LEN                                  SEC_ENG_SE_AES_MSG_LEN
#define SEC_ENG_SE_AES_MSG_LEN_POS                              (16U)
#define SEC_ENG_SE_AES_MSG_LEN_LEN                              (16U)
#define SEC_ENG_SE_AES_MSG_LEN_MSK                              (((1U<<SEC_ENG_SE_AES_MSG_LEN_LEN)-1)<<SEC_ENG_SE_AES_MSG_LEN_POS)
#define SEC_ENG_SE_AES_MSG_LEN_UMSK                             (~(((1U<<SEC_ENG_SE_AES_MSG_LEN_LEN)-1)<<SEC_ENG_SE_AES_MSG_LEN_POS))

/* 0x4 : se_aes_msa */
#define SEC_ENG_SE_AES_MSA_OFFSET                               (0x4)
#define SEC_ENG_SE_AES_MSA                                      SEC_ENG_SE_AES_MSA
#define SEC_ENG_SE_AES_MSA_POS                                  (0U)
#define SEC_ENG_SE_AES_MSA_LEN                                  (32U)
#define SEC_ENG_SE_AES_MSA_MSK                                  (((1U<<SEC_ENG_SE_AES_MSA_LEN)-1)<<SEC_ENG_SE_AES_MSA_POS)
#define SEC_ENG_SE_AES_MSA_UMSK                                 (~(((1U<<SEC_ENG_SE_AES_MSA_LEN)-1)<<SEC_ENG_SE_AES_MSA_POS))

/* 0x8 : se_aes_mda */
#define SEC_ENG_SE_AES_MDA_OFFSET                               (0x8)
#define SEC_ENG_SE_AES_MDA                                      SEC_ENG_SE_AES_MDA
#define SEC_ENG_SE_AES_MDA_POS                                  (0U)
#define SEC_ENG_SE_AES_MDA_LEN                                  (32U)
#define SEC_ENG_SE_AES_MDA_MSK                                  (((1U<<SEC_ENG_SE_AES_MDA_LEN)-1)<<SEC_ENG_SE_AES_MDA_POS)
#define SEC_ENG_SE_AES_MDA_UMSK                                 (~(((1U<<SEC_ENG_SE_AES_MDA_LEN)-1)<<SEC_ENG_SE_AES_MDA_POS))

/* 0xc : se_aes_status */
#define SEC_ENG_SE_AES_STATUS_OFFSET                            (0xc)
#define SEC_ENG_SE_AES_STATUS                                   SEC_ENG_SE_AES_STATUS
#define SEC_ENG_SE_AES_STATUS_POS                               (0U)
#define SEC_ENG_SE_AES_STATUS_LEN                               (32U)
#define SEC_ENG_SE_AES_STATUS_MSK                               (((1U<<SEC_ENG_SE_AES_STATUS_LEN)-1)<<SEC_ENG_SE_AES_STATUS_POS)
#define SEC_ENG_SE_AES_STATUS_UMSK                              (~(((1U<<SEC_ENG_SE_AES_STATUS_LEN)-1)<<SEC_ENG_SE_AES_STATUS_POS))

/* 0x10 : se_aes_iv_0 */
#define SEC_ENG_SE_AES_IV_0_OFFSET                              (0x10)
#define SEC_ENG_SE_AES_IV_0                                     SEC_ENG_SE_AES_IV_0
#define SEC_ENG_SE_AES_IV_0_POS                                 (0U)
#define SEC_ENG_SE_AES_IV_0_LEN                                 (32U)
#define SEC_ENG_SE_AES_IV_0_MSK                                 (((1U<<SEC_ENG_SE_AES_IV_0_LEN)-1)<<SEC_ENG_SE_AES_IV_0_POS)
#define SEC_ENG_SE_AES_IV_0_UMSK                                (~(((1U<<SEC_ENG_SE_AES_IV_0_LEN)-1)<<SEC_ENG_SE_AES_IV_0_POS))

/* 0x14 : se_aes_iv_1 */
#define SEC_ENG_SE_AES_IV_1_OFFSET                              (0x14)
#define SEC_ENG_SE_AES_IV_1                                     SEC_ENG_SE_AES_IV_1
#define SEC_ENG_SE_AES_IV_1_POS                                 (0U)
#define SEC_ENG_SE_AES_IV_1_LEN                                 (32U)
#define SEC_ENG_SE_AES_IV_1_MSK                                 (((1U<<SEC_ENG_SE_AES_IV_1_LEN)-1)<<SEC_ENG_SE_AES_IV_1_POS)
#define SEC_ENG_SE_AES_IV_1_UMSK                                (~(((1U<<SEC_ENG_SE_AES_IV_1_LEN)-1)<<SEC_ENG_SE_AES_IV_1_POS))

/* 0x18 : se_aes_iv_2 */
#define SEC_ENG_SE_AES_IV_2_OFFSET                              (0x18)
#define SEC_ENG_SE_AES_IV_2                                     SEC_ENG_SE_AES_IV_2
#define SEC_ENG_SE_AES_IV_2_POS                                 (0U)
#define SEC_ENG_SE_AES_IV_2_LEN                                 (32U)
#define SEC_ENG_SE_AES_IV_2_MSK                                 (((1U<<SEC_ENG_SE_AES_IV_2_LEN)-1)<<SEC_ENG_SE_AES_IV_2_POS)
#define SEC_ENG_SE_AES_IV_2_UMSK                                (~(((1U<<SEC_ENG_SE_AES_IV_2_LEN)-1)<<SEC_ENG_SE_AES_IV_2_POS))

/* 0x1c : se_aes_iv_3 */
#define SEC_ENG_SE_AES_IV_3_OFFSET                              (0x1c)
#define SEC_ENG_SE_AES_IV_3                                     SEC_ENG_SE_AES_IV_3
#define SEC_ENG_SE_AES_IV_3_POS                                 (0U)
#define SEC_ENG_SE_AES_IV_3_LEN                                 (32U)
#define SEC_ENG_SE_AES_IV_3_MSK                                 (((1U<<SEC_ENG_SE_AES_IV_3_LEN)-1)<<SEC_ENG_SE_AES_IV_3_POS)
#define SEC_ENG_SE_AES_IV_3_UMSK                                (~(((1U<<SEC_ENG_SE_AES_IV_3_LEN)-1)<<SEC_ENG_SE_AES_IV_3_POS))

/* 0x20 : se_aes_key_0 */
#define SEC_ENG_SE_AES_KEY_0_OFFSET                             (0x20)
#define SEC_ENG_SE_AES_KEY_0                                    SEC_ENG_SE_AES_KEY_0
#define SEC_ENG_SE_AES_KEY_0_POS                                (0U)
#define SEC_ENG_SE_AES_KEY_0_LEN                                (32U)
#define SEC_ENG_SE_AES_KEY_0_MSK                                (((1U<<SEC_ENG_SE_AES_KEY_0_LEN)-1)<<SEC_ENG_SE_AES_KEY_0_POS)
#define SEC_ENG_SE_AES_KEY_0_UMSK                               (~(((1U<<SEC_ENG_SE_AES_KEY_0_LEN)-1)<<SEC_ENG_SE_AES_KEY_0_POS))

/* 0x24 : se_aes_key_1 */
#define SEC_ENG_SE_AES_KEY_1_OFFSET                             (0x24)
#define SEC_ENG_SE_AES_KEY_1                                    SEC_ENG_SE_AES_KEY_1
#define SEC_ENG_SE_AES_KEY_1_POS                                (0U)
#define SEC_ENG_SE_AES_KEY_1_LEN                                (32U)
#define SEC_ENG_SE_AES_KEY_1_MSK                                (((1U<<SEC_ENG_SE_AES_KEY_1_LEN)-1)<<SEC_ENG_SE_AES_KEY_1_POS)
#define SEC_ENG_SE_AES_KEY_1_UMSK                               (~(((1U<<SEC_ENG_SE_AES_KEY_1_LEN)-1)<<SEC_ENG_SE_AES_KEY_1_POS))

/* 0x28 : se_aes_key_2 */
#define SEC_ENG_SE_AES_KEY_2_OFFSET                             (0x28)
#define SEC_ENG_SE_AES_KEY_2                                    SEC_ENG_SE_AES_KEY_2
#define SEC_ENG_SE_AES_KEY_2_POS                                (0U)
#define SEC_ENG_SE_AES_KEY_2_LEN                                (32U)
#define SEC_ENG_SE_AES_KEY_2_MSK                                (((1U<<SEC_ENG_SE_AES_KEY_2_LEN)-1)<<SEC_ENG_SE_AES_KEY_2_POS)
#define SEC_ENG_SE_AES_KEY_2_UMSK                               (~(((1U<<SEC_ENG_SE_AES_KEY_2_LEN)-1)<<SEC_ENG_SE_AES_KEY_2_POS))

/* 0x2c : se_aes_key_3 */
#define SEC_ENG_SE_AES_KEY_3_OFFSET                             (0x2c)
#define SEC_ENG_SE_AES_KEY_3                                    SEC_ENG_SE_AES_KEY_3
#define SEC_ENG_SE_AES_KEY_3_POS                                (0U)
#define SEC_ENG_SE_AES_KEY_3_LEN                                (32U)
#define SEC_ENG_SE_AES_KEY_3_MSK                                (((1U<<SEC_ENG_SE_AES_KEY_3_LEN)-1)<<SEC_ENG_SE_AES_KEY_3_POS)
#define SEC_ENG_SE_AES_KEY_3_UMSK                               (~(((1U<<SEC_ENG_SE_AES_KEY_3_LEN)-1)<<SEC_ENG_SE_AES_KEY_3_POS))

/* 0x30 : se_aes_key_4 */
#define SEC_ENG_SE_AES_KEY_4_OFFSET                             (0x30)
#define SEC_ENG_SE_AES_KEY_4                                    SEC_ENG_SE_AES_KEY_4
#define SEC_ENG_SE_AES_KEY_4_POS                                (0U)
#define SEC_ENG_SE_AES_KEY_4_LEN                                (32U)
#define SEC_ENG_SE_AES_KEY_4_MSK                                (((1U<<SEC_ENG_SE_AES_KEY_4_LEN)-1)<<SEC_ENG_SE_AES_KEY_4_POS)
#define SEC_ENG_SE_AES_KEY_4_UMSK                               (~(((1U<<SEC_ENG_SE_AES_KEY_4_LEN)-1)<<SEC_ENG_SE_AES_KEY_4_POS))

/* 0x34 : se_aes_key_5 */
#define SEC_ENG_SE_AES_KEY_5_OFFSET                             (0x34)
#define SEC_ENG_SE_AES_KEY_5                                    SEC_ENG_SE_AES_KEY_5
#define SEC_ENG_SE_AES_KEY_5_POS                                (0U)
#define SEC_ENG_SE_AES_KEY_5_LEN                                (32U)
#define SEC_ENG_SE_AES_KEY_5_MSK                                (((1U<<SEC_ENG_SE_AES_KEY_5_LEN)-1)<<SEC_ENG_SE_AES_KEY_5_POS)
#define SEC_ENG_SE_AES_KEY_5_UMSK                               (~(((1U<<SEC_ENG_SE_AES_KEY_5_LEN)-1)<<SEC_ENG_SE_AES_KEY_5_POS))

/* 0x38 : se_aes_key_6 */
#define SEC_ENG_SE_AES_KEY_6_OFFSET                             (0x38)
#define SEC_ENG_SE_AES_KEY_6                                    SEC_ENG_SE_AES_KEY_6
#define SEC_ENG_SE_AES_KEY_6_POS                                (0U)
#define SEC_ENG_SE_AES_KEY_6_LEN                                (32U)
#define SEC_ENG_SE_AES_KEY_6_MSK                                (((1U<<SEC_ENG_SE_AES_KEY_6_LEN)-1)<<SEC_ENG_SE_AES_KEY_6_POS)
#define SEC_ENG_SE_AES_KEY_6_UMSK                               (~(((1U<<SEC_ENG_SE_AES_KEY_6_LEN)-1)<<SEC_ENG_SE_AES_KEY_6_POS))

/* 0x3c : se_aes_key_7 */
#define SEC_ENG_SE_AES_KEY_7_OFFSET                             (0x3c)
#define SEC_ENG_SE_AES_KEY_7                                    SEC_ENG_SE_AES_KEY_7
#define SEC_ENG_SE_AES_KEY_7_POS                                (0U)
#define SEC_ENG_SE_AES_KEY_7_LEN                                (32U)
#define SEC_ENG_SE_AES_KEY_7_MSK                                (((1U<<SEC_ENG_SE_AES_KEY_7_LEN)-1)<<SEC_ENG_SE_AES_KEY_7_POS)
#define SEC_ENG_SE_AES_KEY_7_UMSK                               (~(((1U<<SEC_ENG_SE_AES_KEY_7_LEN)-1)<<SEC_ENG_SE_AES_KEY_7_POS))

/* 0x40 : se_aes_key_sel_0 */
#define SEC_ENG_SE_AES_KEY_SEL_0_OFFSET                         (0x40)
#define SEC_ENG_SE_AES_KEY_SEL_0                                SEC_ENG_SE_AES_KEY_SEL_0
#define SEC_ENG_SE_AES_KEY_SEL_0_POS                            (0U)
#define SEC_ENG_SE_AES_KEY_SEL_0_LEN                            (2U)
#define SEC_ENG_SE_AES_KEY_SEL_0_MSK                            (((1U<<SEC_ENG_SE_AES_KEY_SEL_0_LEN)-1)<<SEC_ENG_SE_AES_KEY_SEL_0_POS)
#define SEC_ENG_SE_AES_KEY_SEL_0_UMSK                           (~(((1U<<SEC_ENG_SE_AES_KEY_SEL_0_LEN)-1)<<SEC_ENG_SE_AES_KEY_SEL_0_POS))

/* 0x44 : se_aes_key_sel_1 */
#define SEC_ENG_SE_AES_KEY_SEL_1_OFFSET                         (0x44)
#define SEC_ENG_SE_AES_KEY_SEL_1                                SEC_ENG_SE_AES_KEY_SEL_1
#define SEC_ENG_SE_AES_KEY_SEL_1_POS                            (0U)
#define SEC_ENG_SE_AES_KEY_SEL_1_LEN                            (2U)
#define SEC_ENG_SE_AES_KEY_SEL_1_MSK                            (((1U<<SEC_ENG_SE_AES_KEY_SEL_1_LEN)-1)<<SEC_ENG_SE_AES_KEY_SEL_1_POS)
#define SEC_ENG_SE_AES_KEY_SEL_1_UMSK                           (~(((1U<<SEC_ENG_SE_AES_KEY_SEL_1_LEN)-1)<<SEC_ENG_SE_AES_KEY_SEL_1_POS))

/* 0x48 : se_aes_endian */
#define SEC_ENG_SE_AES_ENDIAN_OFFSET                            (0x48)
#define SEC_ENG_SE_AES_DOUT_ENDIAN                              SEC_ENG_SE_AES_DOUT_ENDIAN
#define SEC_ENG_SE_AES_DOUT_ENDIAN_POS                          (0U)
#define SEC_ENG_SE_AES_DOUT_ENDIAN_LEN                          (1U)
#define SEC_ENG_SE_AES_DOUT_ENDIAN_MSK                          (((1U<<SEC_ENG_SE_AES_DOUT_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_DOUT_ENDIAN_POS)
#define SEC_ENG_SE_AES_DOUT_ENDIAN_UMSK                         (~(((1U<<SEC_ENG_SE_AES_DOUT_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_DOUT_ENDIAN_POS))
#define SEC_ENG_SE_AES_DIN_ENDIAN                               SEC_ENG_SE_AES_DIN_ENDIAN
#define SEC_ENG_SE_AES_DIN_ENDIAN_POS                           (1U)
#define SEC_ENG_SE_AES_DIN_ENDIAN_LEN                           (1U)
#define SEC_ENG_SE_AES_DIN_ENDIAN_MSK                           (((1U<<SEC_ENG_SE_AES_DIN_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_DIN_ENDIAN_POS)
#define SEC_ENG_SE_AES_DIN_ENDIAN_UMSK                          (~(((1U<<SEC_ENG_SE_AES_DIN_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_DIN_ENDIAN_POS))
#define SEC_ENG_SE_AES_KEY_ENDIAN                               SEC_ENG_SE_AES_KEY_ENDIAN
#define SEC_ENG_SE_AES_KEY_ENDIAN_POS                           (2U)
#define SEC_ENG_SE_AES_KEY_ENDIAN_LEN                           (1U)
#define SEC_ENG_SE_AES_KEY_ENDIAN_MSK                           (((1U<<SEC_ENG_SE_AES_KEY_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_KEY_ENDIAN_POS)
#define SEC_ENG_SE_AES_KEY_ENDIAN_UMSK                          (~(((1U<<SEC_ENG_SE_AES_KEY_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_KEY_ENDIAN_POS))
#define SEC_ENG_SE_AES_IV_ENDIAN                                SEC_ENG_SE_AES_IV_ENDIAN
#define SEC_ENG_SE_AES_IV_ENDIAN_POS                            (3U)
#define SEC_ENG_SE_AES_IV_ENDIAN_LEN                            (1U)
#define SEC_ENG_SE_AES_IV_ENDIAN_MSK                            (((1U<<SEC_ENG_SE_AES_IV_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_IV_ENDIAN_POS)
#define SEC_ENG_SE_AES_IV_ENDIAN_UMSK                           (~(((1U<<SEC_ENG_SE_AES_IV_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_IV_ENDIAN_POS))
#define SEC_ENG_SE_AES_CTR_LEN                                  SEC_ENG_SE_AES_CTR_LEN
#define SEC_ENG_SE_AES_CTR_LEN_POS                              (30U)
#define SEC_ENG_SE_AES_CTR_LEN_LEN                              (2U)
#define SEC_ENG_SE_AES_CTR_LEN_MSK                              (((1U<<SEC_ENG_SE_AES_CTR_LEN_LEN)-1)<<SEC_ENG_SE_AES_CTR_LEN_POS)
#define SEC_ENG_SE_AES_CTR_LEN_UMSK                             (~(((1U<<SEC_ENG_SE_AES_CTR_LEN_LEN)-1)<<SEC_ENG_SE_AES_CTR_LEN_POS))

/* 0x4c : se_aes_sboot */
#define SEC_ENG_SE_AES_SBOOT_OFFSET                             (0x4c)
#define SEC_ENG_SE_AES_SBOOT_KEY_SEL                            SEC_ENG_SE_AES_SBOOT_KEY_SEL
#define SEC_ENG_SE_AES_SBOOT_KEY_SEL_POS                        (0U)
#define SEC_ENG_SE_AES_SBOOT_KEY_SEL_LEN                        (1U)
#define SEC_ENG_SE_AES_SBOOT_KEY_SEL_MSK                        (((1U<<SEC_ENG_SE_AES_SBOOT_KEY_SEL_LEN)-1)<<SEC_ENG_SE_AES_SBOOT_KEY_SEL_POS)
#define SEC_ENG_SE_AES_SBOOT_KEY_SEL_UMSK                       (~(((1U<<SEC_ENG_SE_AES_SBOOT_KEY_SEL_LEN)-1)<<SEC_ENG_SE_AES_SBOOT_KEY_SEL_POS))

/* 0x50 : se_aes_link */
#define SEC_ENG_SE_AES_LINK_OFFSET                              (0x50)
#define SEC_ENG_SE_AES_LCA                                      SEC_ENG_SE_AES_LCA
#define SEC_ENG_SE_AES_LCA_POS                                  (0U)
#define SEC_ENG_SE_AES_LCA_LEN                                  (32U)
#define SEC_ENG_SE_AES_LCA_MSK                                  (((1U<<SEC_ENG_SE_AES_LCA_LEN)-1)<<SEC_ENG_SE_AES_LCA_POS)
#define SEC_ENG_SE_AES_LCA_UMSK                                 (~(((1U<<SEC_ENG_SE_AES_LCA_LEN)-1)<<SEC_ENG_SE_AES_LCA_POS))

/* 0xfc : se_aes_ctrl_prot */
#define SEC_ENG_SE_AES_CTRL_PROT_OFFSET                         (0xfc)
#define SEC_ENG_SE_AES_PROT_EN                                  SEC_ENG_SE_AES_PROT_EN
#define SEC_ENG_SE_AES_PROT_EN_POS                              (0U)
#define SEC_ENG_SE_AES_PROT_EN_LEN                              (1U)
#define SEC_ENG_SE_AES_PROT_EN_MSK                              (((1U<<SEC_ENG_SE_AES_PROT_EN_LEN)-1)<<SEC_ENG_SE_AES_PROT_EN_POS)
#define SEC_ENG_SE_AES_PROT_EN_UMSK                             (~(((1U<<SEC_ENG_SE_AES_PROT_EN_LEN)-1)<<SEC_ENG_SE_AES_PROT_EN_POS))
#define SEC_ENG_SE_AES_ID0_EN                                   SEC_ENG_SE_AES_ID0_EN
#define SEC_ENG_SE_AES_ID0_EN_POS                               (1U)
#define SEC_ENG_SE_AES_ID0_EN_LEN                               (1U)
#define SEC_ENG_SE_AES_ID0_EN_MSK                               (((1U<<SEC_ENG_SE_AES_ID0_EN_LEN)-1)<<SEC_ENG_SE_AES_ID0_EN_POS)
#define SEC_ENG_SE_AES_ID0_EN_UMSK                              (~(((1U<<SEC_ENG_SE_AES_ID0_EN_LEN)-1)<<SEC_ENG_SE_AES_ID0_EN_POS))
#define SEC_ENG_SE_AES_ID1_EN                                   SEC_ENG_SE_AES_ID1_EN
#define SEC_ENG_SE_AES_ID1_EN_POS                               (2U)
#define SEC_ENG_SE_AES_ID1_EN_LEN                               (1U)
#define SEC_ENG_SE_AES_ID1_EN_MSK                               (((1U<<SEC_ENG_SE_AES_ID1_EN_LEN)-1)<<SEC_ENG_SE_AES_ID1_EN_POS)
#define SEC_ENG_SE_AES_ID1_EN_UMSK                              (~(((1U<<SEC_ENG_SE_AES_ID1_EN_LEN)-1)<<SEC_ENG_SE_AES_ID1_EN_POS))


struct  sec_eng_aes_reg {
    /* 0x0 : se_aes_ctrl */
    union {
        struct {
            uint32_t se_aes_busy                    :  1; /* [    0],          r,        0x0 */
            uint32_t se_aes_trig_1t                 :  1; /* [    1],        w1p,        0x0 */
            uint32_t se_aes_en                      :  1; /* [    2],        r/w,        0x0 */
            uint32_t se_aes_mode                    :  2; /* [ 4: 3],        r/w,        0x0 */
            uint32_t se_aes_dec_en                  :  1; /* [    5],        r/w,        0x0 */
            uint32_t se_aes_dec_key_sel             :  1; /* [    6],        r/w,        0x0 */
            uint32_t se_aes_hw_key_en               :  1; /* [    7],        r/w,        0x0 */
            uint32_t se_aes_int                     :  1; /* [    8],          r,        0x0 */
            uint32_t se_aes_int_clr_1t              :  1; /* [    9],        w1p,        0x0 */
            uint32_t se_aes_int_set_1t              :  1; /* [   10],        w1p,        0x0 */
            uint32_t se_aes_int_mask                :  1; /* [   11],        r/w,        0x0 */
            uint32_t se_aes_block_mode              :  2; /* [13:12],        r/w,        0x0 */
            uint32_t se_aes_iv_sel                  :  1; /* [   14],        r/w,        0x0 */
            uint32_t se_aes_link_mode               :  1; /* [   15],        r/w,        0x0 */
            uint32_t se_aes_msg_len                 : 16; /* [31:16],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_ctrl;

    /* 0x4 : se_aes_msa */
    union {
        struct {
            uint32_t se_aes_msa                     : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_msa;

    /* 0x8 : se_aes_mda */
    union {
        struct {
            uint32_t se_aes_mda                     : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_mda;

    /* 0xc : se_aes_status */
    union {
        struct {
            uint32_t se_aes_status                  : 32; /* [31: 0],          r,      0x100 */
        }BF;
        uint32_t WORD;
    } se_aes_status;

    /* 0x10 : se_aes_iv_0 */
    union {
        struct {
            uint32_t se_aes_iv_0                    : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_iv_0;

    /* 0x14 : se_aes_iv_1 */
    union {
        struct {
            uint32_t se_aes_iv_1                    : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_iv_1;

    /* 0x18 : se_aes_iv_2 */
    union {
        struct {
            uint32_t se_aes_iv_2                    : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_iv_2;

    /* 0x1c : se_aes_iv_3 */
    union {
        struct {
            uint32_t se_aes_iv_3                    : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_iv_3;

    /* 0x20 : se_aes_key_0 */
    union {
        struct {
            uint32_t se_aes_key_0                   : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_key_0;

    /* 0x24 : se_aes_key_1 */
    union {
        struct {
            uint32_t se_aes_key_1                   : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_key_1;

    /* 0x28 : se_aes_key_2 */
    union {
        struct {
            uint32_t se_aes_key_2                   : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_key_2;

    /* 0x2c : se_aes_key_3 */
    union {
        struct {
            uint32_t se_aes_key_3                   : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_key_3;

    /* 0x30 : se_aes_key_4 */
    union {
        struct {
            uint32_t se_aes_key_4                   : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_key_4;

    /* 0x34 : se_aes_key_5 */
    union {
        struct {
            uint32_t se_aes_key_5                   : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_key_5;

    /* 0x38 : se_aes_key_6 */
    union {
        struct {
            uint32_t se_aes_key_6                   : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_key_6;

    /* 0x3c : se_aes_key_7 */
    union {
        struct {
            uint32_t se_aes_key_7                   : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_key_7;

    /* 0x40 : se_aes_key_sel_0 */
    union {
        struct {
            uint32_t se_aes_key_sel_0               :  2; /* [ 1: 0],        r/w,        0x0 */
            uint32_t reserved_2_31                  : 30; /* [31: 2],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_key_sel_0;

    /* 0x44 : se_aes_key_sel_1 */
    union {
        struct {
            uint32_t se_aes_key_sel_1               :  2; /* [ 1: 0],        r/w,        0x0 */
            uint32_t reserved_2_31                  : 30; /* [31: 2],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_key_sel_1;

    /* 0x48 : se_aes_endian */
    union {
        struct {
            uint32_t se_aes_dout_endian             :  1; /* [    0],        r/w,        0x1 */
            uint32_t se_aes_din_endian              :  1; /* [    1],        r/w,        0x1 */
            uint32_t se_aes_key_endian              :  1; /* [    2],        r/w,        0x1 */
            uint32_t se_aes_iv_endian               :  1; /* [    3],        r/w,        0x1 */
            uint32_t reserved_4_29                  : 26; /* [29: 4],       rsvd,        0x0 */
            uint32_t se_aes_ctr_len                 :  2; /* [31:30],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_endian;

    /* 0x4c : se_aes_sboot */
    union {
        struct {
            uint32_t se_aes_sboot_key_sel           :  1; /* [    0],        r/w,        0x0 */
            uint32_t reserved_1_31                  : 31; /* [31: 1],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_sboot;

    /* 0x50 : se_aes_link */
    union {
        struct {
            uint32_t se_aes_lca                     : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_link;

    /* 0x54  reserved */
    uint8_t RESERVED0x54[168];

    /* 0xfc : se_aes_ctrl_prot */
    union {
        struct {
            uint32_t se_aes_prot_en                 :  1; /* [    0],        r/w,        0x1 */
            uint32_t se_aes_id0_en                  :  1; /* [    1],        r/w,        0x1 */
            uint32_t se_aes_id1_en                  :  1; /* [    2],        r/w,        0x1 */
            uint32_t reserved_3_31                  : 29; /* [31: 3],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } se_aes_ctrl_prot;

};

typedef volatile struct sec_eng_aes_reg sec_eng_aes_reg_t;

#define SEC_ENG_AES_OFFSET     0x100


/*Following is reg patch*/

/* 0x0 : se_trng_ctrl_0 */
#define SEC_ENG_SE_TRNG_CTRL_0_OFFSET                           (0x0)
#define SEC_ENG_SE_TRNG_BUSY                                    SEC_ENG_SE_TRNG_BUSY
#define SEC_ENG_SE_TRNG_BUSY_POS                                (0U)
#define SEC_ENG_SE_TRNG_BUSY_LEN                                (1U)
#define SEC_ENG_SE_TRNG_BUSY_MSK                                (((1U<<SEC_ENG_SE_TRNG_BUSY_LEN)-1)<<SEC_ENG_SE_TRNG_BUSY_POS)
#define SEC_ENG_SE_TRNG_BUSY_UMSK                               (~(((1U<<SEC_ENG_SE_TRNG_BUSY_LEN)-1)<<SEC_ENG_SE_TRNG_BUSY_POS))
#define SEC_ENG_SE_TRNG_TRIG_1T                                 SEC_ENG_SE_TRNG_TRIG_1T
#define SEC_ENG_SE_TRNG_TRIG_1T_POS                             (1U)
#define SEC_ENG_SE_TRNG_TRIG_1T_LEN                             (1U)
#define SEC_ENG_SE_TRNG_TRIG_1T_MSK                             (((1U<<SEC_ENG_SE_TRNG_TRIG_1T_LEN)-1)<<SEC_ENG_SE_TRNG_TRIG_1T_POS)
#define SEC_ENG_SE_TRNG_TRIG_1T_UMSK                            (~(((1U<<SEC_ENG_SE_TRNG_TRIG_1T_LEN)-1)<<SEC_ENG_SE_TRNG_TRIG_1T_POS))
#define SEC_ENG_SE_TRNG_EN                                      SEC_ENG_SE_TRNG_EN
#define SEC_ENG_SE_TRNG_EN_POS                                  (2U)
#define SEC_ENG_SE_TRNG_EN_LEN                                  (1U)
#define SEC_ENG_SE_TRNG_EN_MSK                                  (((1U<<SEC_ENG_SE_TRNG_EN_LEN)-1)<<SEC_ENG_SE_TRNG_EN_POS)
#define SEC_ENG_SE_TRNG_EN_UMSK                                 (~(((1U<<SEC_ENG_SE_TRNG_EN_LEN)-1)<<SEC_ENG_SE_TRNG_EN_POS))
#define SEC_ENG_SE_TRNG_DOUT_CLR_1T                             SEC_ENG_SE_TRNG_DOUT_CLR_1T
#define SEC_ENG_SE_TRNG_DOUT_CLR_1T_POS                         (3U)
#define SEC_ENG_SE_TRNG_DOUT_CLR_1T_LEN                         (1U)
#define SEC_ENG_SE_TRNG_DOUT_CLR_1T_MSK                         (((1U<<SEC_ENG_SE_TRNG_DOUT_CLR_1T_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_CLR_1T_POS)
#define SEC_ENG_SE_TRNG_DOUT_CLR_1T_UMSK                        (~(((1U<<SEC_ENG_SE_TRNG_DOUT_CLR_1T_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_CLR_1T_POS))
#define SEC_ENG_SE_TRNG_HT_ERROR                                SEC_ENG_SE_TRNG_HT_ERROR
#define SEC_ENG_SE_TRNG_HT_ERROR_POS                            (4U)
#define SEC_ENG_SE_TRNG_HT_ERROR_LEN                            (1U)
#define SEC_ENG_SE_TRNG_HT_ERROR_MSK                            (((1U<<SEC_ENG_SE_TRNG_HT_ERROR_LEN)-1)<<SEC_ENG_SE_TRNG_HT_ERROR_POS)
#define SEC_ENG_SE_TRNG_HT_ERROR_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_HT_ERROR_LEN)-1)<<SEC_ENG_SE_TRNG_HT_ERROR_POS))
#define SEC_ENG_SE_TRNG_INT                                     SEC_ENG_SE_TRNG_INT
#define SEC_ENG_SE_TRNG_INT_POS                                 (8U)
#define SEC_ENG_SE_TRNG_INT_LEN                                 (1U)
#define SEC_ENG_SE_TRNG_INT_MSK                                 (((1U<<SEC_ENG_SE_TRNG_INT_LEN)-1)<<SEC_ENG_SE_TRNG_INT_POS)
#define SEC_ENG_SE_TRNG_INT_UMSK                                (~(((1U<<SEC_ENG_SE_TRNG_INT_LEN)-1)<<SEC_ENG_SE_TRNG_INT_POS))
#define SEC_ENG_SE_TRNG_INT_CLR_1T                              SEC_ENG_SE_TRNG_INT_CLR_1T
#define SEC_ENG_SE_TRNG_INT_CLR_1T_POS                          (9U)
#define SEC_ENG_SE_TRNG_INT_CLR_1T_LEN                          (1U)
#define SEC_ENG_SE_TRNG_INT_CLR_1T_MSK                          (((1U<<SEC_ENG_SE_TRNG_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_TRNG_INT_CLR_1T_POS)
#define SEC_ENG_SE_TRNG_INT_CLR_1T_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_TRNG_INT_CLR_1T_POS))
#define SEC_ENG_SE_TRNG_INT_SET_1T                              SEC_ENG_SE_TRNG_INT_SET_1T
#define SEC_ENG_SE_TRNG_INT_SET_1T_POS                          (10U)
#define SEC_ENG_SE_TRNG_INT_SET_1T_LEN                          (1U)
#define SEC_ENG_SE_TRNG_INT_SET_1T_MSK                          (((1U<<SEC_ENG_SE_TRNG_INT_SET_1T_LEN)-1)<<SEC_ENG_SE_TRNG_INT_SET_1T_POS)
#define SEC_ENG_SE_TRNG_INT_SET_1T_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_INT_SET_1T_LEN)-1)<<SEC_ENG_SE_TRNG_INT_SET_1T_POS))
#define SEC_ENG_SE_TRNG_INT_MASK                                SEC_ENG_SE_TRNG_INT_MASK
#define SEC_ENG_SE_TRNG_INT_MASK_POS                            (11U)
#define SEC_ENG_SE_TRNG_INT_MASK_LEN                            (1U)
#define SEC_ENG_SE_TRNG_INT_MASK_MSK                            (((1U<<SEC_ENG_SE_TRNG_INT_MASK_LEN)-1)<<SEC_ENG_SE_TRNG_INT_MASK_POS)
#define SEC_ENG_SE_TRNG_INT_MASK_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_INT_MASK_LEN)-1)<<SEC_ENG_SE_TRNG_INT_MASK_POS))
#define SEC_ENG_SE_TRNG_MANUAL_FUN_SEL                          SEC_ENG_SE_TRNG_MANUAL_FUN_SEL
#define SEC_ENG_SE_TRNG_MANUAL_FUN_SEL_POS                      (13U)
#define SEC_ENG_SE_TRNG_MANUAL_FUN_SEL_LEN                      (1U)
#define SEC_ENG_SE_TRNG_MANUAL_FUN_SEL_MSK                      (((1U<<SEC_ENG_SE_TRNG_MANUAL_FUN_SEL_LEN)-1)<<SEC_ENG_SE_TRNG_MANUAL_FUN_SEL_POS)
#define SEC_ENG_SE_TRNG_MANUAL_FUN_SEL_UMSK                     (~(((1U<<SEC_ENG_SE_TRNG_MANUAL_FUN_SEL_LEN)-1)<<SEC_ENG_SE_TRNG_MANUAL_FUN_SEL_POS))
#define SEC_ENG_SE_TRNG_MANUAL_RESEED                           SEC_ENG_SE_TRNG_MANUAL_RESEED
#define SEC_ENG_SE_TRNG_MANUAL_RESEED_POS                       (14U)
#define SEC_ENG_SE_TRNG_MANUAL_RESEED_LEN                       (1U)
#define SEC_ENG_SE_TRNG_MANUAL_RESEED_MSK                       (((1U<<SEC_ENG_SE_TRNG_MANUAL_RESEED_LEN)-1)<<SEC_ENG_SE_TRNG_MANUAL_RESEED_POS)
#define SEC_ENG_SE_TRNG_MANUAL_RESEED_UMSK                      (~(((1U<<SEC_ENG_SE_TRNG_MANUAL_RESEED_LEN)-1)<<SEC_ENG_SE_TRNG_MANUAL_RESEED_POS))
#define SEC_ENG_SE_TRNG_MANUAL_EN                               SEC_ENG_SE_TRNG_MANUAL_EN
#define SEC_ENG_SE_TRNG_MANUAL_EN_POS                           (15U)
#define SEC_ENG_SE_TRNG_MANUAL_EN_LEN                           (1U)
#define SEC_ENG_SE_TRNG_MANUAL_EN_MSK                           (((1U<<SEC_ENG_SE_TRNG_MANUAL_EN_LEN)-1)<<SEC_ENG_SE_TRNG_MANUAL_EN_POS)
#define SEC_ENG_SE_TRNG_MANUAL_EN_UMSK                          (~(((1U<<SEC_ENG_SE_TRNG_MANUAL_EN_LEN)-1)<<SEC_ENG_SE_TRNG_MANUAL_EN_POS))

/* 0x4 : se_trng_status */
#define SEC_ENG_SE_TRNG_STATUS_OFFSET                           (0x4)
#define SEC_ENG_SE_TRNG_STATUS                                  SEC_ENG_SE_TRNG_STATUS
#define SEC_ENG_SE_TRNG_STATUS_POS                              (0U)
#define SEC_ENG_SE_TRNG_STATUS_LEN                              (32U)
#define SEC_ENG_SE_TRNG_STATUS_MSK                              (((1U<<SEC_ENG_SE_TRNG_STATUS_LEN)-1)<<SEC_ENG_SE_TRNG_STATUS_POS)
#define SEC_ENG_SE_TRNG_STATUS_UMSK                             (~(((1U<<SEC_ENG_SE_TRNG_STATUS_LEN)-1)<<SEC_ENG_SE_TRNG_STATUS_POS))

/* 0x8 : se_trng_dout_0 */
#define SEC_ENG_SE_TRNG_DOUT_0_OFFSET                           (0x8)
#define SEC_ENG_SE_TRNG_DOUT_0                                  SEC_ENG_SE_TRNG_DOUT_0
#define SEC_ENG_SE_TRNG_DOUT_0_POS                              (0U)
#define SEC_ENG_SE_TRNG_DOUT_0_LEN                              (32U)
#define SEC_ENG_SE_TRNG_DOUT_0_MSK                              (((1U<<SEC_ENG_SE_TRNG_DOUT_0_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_0_POS)
#define SEC_ENG_SE_TRNG_DOUT_0_UMSK                             (~(((1U<<SEC_ENG_SE_TRNG_DOUT_0_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_0_POS))

/* 0xc : se_trng_dout_1 */
#define SEC_ENG_SE_TRNG_DOUT_1_OFFSET                           (0xc)
#define SEC_ENG_SE_TRNG_DOUT_1                                  SEC_ENG_SE_TRNG_DOUT_1
#define SEC_ENG_SE_TRNG_DOUT_1_POS                              (0U)
#define SEC_ENG_SE_TRNG_DOUT_1_LEN                              (32U)
#define SEC_ENG_SE_TRNG_DOUT_1_MSK                              (((1U<<SEC_ENG_SE_TRNG_DOUT_1_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_1_POS)
#define SEC_ENG_SE_TRNG_DOUT_1_UMSK                             (~(((1U<<SEC_ENG_SE_TRNG_DOUT_1_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_1_POS))

/* 0x10 : se_trng_dout_2 */
#define SEC_ENG_SE_TRNG_DOUT_2_OFFSET                           (0x10)
#define SEC_ENG_SE_TRNG_DOUT_2                                  SEC_ENG_SE_TRNG_DOUT_2
#define SEC_ENG_SE_TRNG_DOUT_2_POS                              (0U)
#define SEC_ENG_SE_TRNG_DOUT_2_LEN                              (32U)
#define SEC_ENG_SE_TRNG_DOUT_2_MSK                              (((1U<<SEC_ENG_SE_TRNG_DOUT_2_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_2_POS)
#define SEC_ENG_SE_TRNG_DOUT_2_UMSK                             (~(((1U<<SEC_ENG_SE_TRNG_DOUT_2_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_2_POS))

/* 0x14 : se_trng_dout_3 */
#define SEC_ENG_SE_TRNG_DOUT_3_OFFSET                           (0x14)
#define SEC_ENG_SE_TRNG_DOUT_3                                  SEC_ENG_SE_TRNG_DOUT_3
#define SEC_ENG_SE_TRNG_DOUT_3_POS                              (0U)
#define SEC_ENG_SE_TRNG_DOUT_3_LEN                              (32U)
#define SEC_ENG_SE_TRNG_DOUT_3_MSK                              (((1U<<SEC_ENG_SE_TRNG_DOUT_3_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_3_POS)
#define SEC_ENG_SE_TRNG_DOUT_3_UMSK                             (~(((1U<<SEC_ENG_SE_TRNG_DOUT_3_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_3_POS))

/* 0x18 : se_trng_dout_4 */
#define SEC_ENG_SE_TRNG_DOUT_4_OFFSET                           (0x18)
#define SEC_ENG_SE_TRNG_DOUT_4                                  SEC_ENG_SE_TRNG_DOUT_4
#define SEC_ENG_SE_TRNG_DOUT_4_POS                              (0U)
#define SEC_ENG_SE_TRNG_DOUT_4_LEN                              (32U)
#define SEC_ENG_SE_TRNG_DOUT_4_MSK                              (((1U<<SEC_ENG_SE_TRNG_DOUT_4_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_4_POS)
#define SEC_ENG_SE_TRNG_DOUT_4_UMSK                             (~(((1U<<SEC_ENG_SE_TRNG_DOUT_4_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_4_POS))

/* 0x1c : se_trng_dout_5 */
#define SEC_ENG_SE_TRNG_DOUT_5_OFFSET                           (0x1c)
#define SEC_ENG_SE_TRNG_DOUT_5                                  SEC_ENG_SE_TRNG_DOUT_5
#define SEC_ENG_SE_TRNG_DOUT_5_POS                              (0U)
#define SEC_ENG_SE_TRNG_DOUT_5_LEN                              (32U)
#define SEC_ENG_SE_TRNG_DOUT_5_MSK                              (((1U<<SEC_ENG_SE_TRNG_DOUT_5_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_5_POS)
#define SEC_ENG_SE_TRNG_DOUT_5_UMSK                             (~(((1U<<SEC_ENG_SE_TRNG_DOUT_5_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_5_POS))

/* 0x20 : se_trng_dout_6 */
#define SEC_ENG_SE_TRNG_DOUT_6_OFFSET                           (0x20)
#define SEC_ENG_SE_TRNG_DOUT_6                                  SEC_ENG_SE_TRNG_DOUT_6
#define SEC_ENG_SE_TRNG_DOUT_6_POS                              (0U)
#define SEC_ENG_SE_TRNG_DOUT_6_LEN                              (32U)
#define SEC_ENG_SE_TRNG_DOUT_6_MSK                              (((1U<<SEC_ENG_SE_TRNG_DOUT_6_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_6_POS)
#define SEC_ENG_SE_TRNG_DOUT_6_UMSK                             (~(((1U<<SEC_ENG_SE_TRNG_DOUT_6_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_6_POS))

/* 0x24 : se_trng_dout_7 */
#define SEC_ENG_SE_TRNG_DOUT_7_OFFSET                           (0x24)
#define SEC_ENG_SE_TRNG_DOUT_7                                  SEC_ENG_SE_TRNG_DOUT_7
#define SEC_ENG_SE_TRNG_DOUT_7_POS                              (0U)
#define SEC_ENG_SE_TRNG_DOUT_7_LEN                              (32U)
#define SEC_ENG_SE_TRNG_DOUT_7_MSK                              (((1U<<SEC_ENG_SE_TRNG_DOUT_7_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_7_POS)
#define SEC_ENG_SE_TRNG_DOUT_7_UMSK                             (~(((1U<<SEC_ENG_SE_TRNG_DOUT_7_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_7_POS))

/* 0x28 : se_trng_test */
#define SEC_ENG_SE_TRNG_TEST_OFFSET                             (0x28)
#define SEC_ENG_SE_TRNG_TEST_EN                                 SEC_ENG_SE_TRNG_TEST_EN
#define SEC_ENG_SE_TRNG_TEST_EN_POS                             (0U)
#define SEC_ENG_SE_TRNG_TEST_EN_LEN                             (1U)
#define SEC_ENG_SE_TRNG_TEST_EN_MSK                             (((1U<<SEC_ENG_SE_TRNG_TEST_EN_LEN)-1)<<SEC_ENG_SE_TRNG_TEST_EN_POS)
#define SEC_ENG_SE_TRNG_TEST_EN_UMSK                            (~(((1U<<SEC_ENG_SE_TRNG_TEST_EN_LEN)-1)<<SEC_ENG_SE_TRNG_TEST_EN_POS))
#define SEC_ENG_SE_TRNG_CP_TEST_EN                              SEC_ENG_SE_TRNG_CP_TEST_EN
#define SEC_ENG_SE_TRNG_CP_TEST_EN_POS                          (1U)
#define SEC_ENG_SE_TRNG_CP_TEST_EN_LEN                          (1U)
#define SEC_ENG_SE_TRNG_CP_TEST_EN_MSK                          (((1U<<SEC_ENG_SE_TRNG_CP_TEST_EN_LEN)-1)<<SEC_ENG_SE_TRNG_CP_TEST_EN_POS)
#define SEC_ENG_SE_TRNG_CP_TEST_EN_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_CP_TEST_EN_LEN)-1)<<SEC_ENG_SE_TRNG_CP_TEST_EN_POS))
#define SEC_ENG_SE_TRNG_CP_BYPASS                               SEC_ENG_SE_TRNG_CP_BYPASS
#define SEC_ENG_SE_TRNG_CP_BYPASS_POS                           (2U)
#define SEC_ENG_SE_TRNG_CP_BYPASS_LEN                           (1U)
#define SEC_ENG_SE_TRNG_CP_BYPASS_MSK                           (((1U<<SEC_ENG_SE_TRNG_CP_BYPASS_LEN)-1)<<SEC_ENG_SE_TRNG_CP_BYPASS_POS)
#define SEC_ENG_SE_TRNG_CP_BYPASS_UMSK                          (~(((1U<<SEC_ENG_SE_TRNG_CP_BYPASS_LEN)-1)<<SEC_ENG_SE_TRNG_CP_BYPASS_POS))
#define SEC_ENG_SE_TRNG_HT_DIS                                  SEC_ENG_SE_TRNG_HT_DIS
#define SEC_ENG_SE_TRNG_HT_DIS_POS                              (3U)
#define SEC_ENG_SE_TRNG_HT_DIS_LEN                              (1U)
#define SEC_ENG_SE_TRNG_HT_DIS_MSK                              (((1U<<SEC_ENG_SE_TRNG_HT_DIS_LEN)-1)<<SEC_ENG_SE_TRNG_HT_DIS_POS)
#define SEC_ENG_SE_TRNG_HT_DIS_UMSK                             (~(((1U<<SEC_ENG_SE_TRNG_HT_DIS_LEN)-1)<<SEC_ENG_SE_TRNG_HT_DIS_POS))
#define SEC_ENG_SE_TRNG_HT_ALARM_N                              SEC_ENG_SE_TRNG_HT_ALARM_N
#define SEC_ENG_SE_TRNG_HT_ALARM_N_POS                          (4U)
#define SEC_ENG_SE_TRNG_HT_ALARM_N_LEN                          (8U)
#define SEC_ENG_SE_TRNG_HT_ALARM_N_MSK                          (((1U<<SEC_ENG_SE_TRNG_HT_ALARM_N_LEN)-1)<<SEC_ENG_SE_TRNG_HT_ALARM_N_POS)
#define SEC_ENG_SE_TRNG_HT_ALARM_N_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_HT_ALARM_N_LEN)-1)<<SEC_ENG_SE_TRNG_HT_ALARM_N_POS))

/* 0x2c : se_trng_ctrl_1 */
#define SEC_ENG_SE_TRNG_CTRL_1_OFFSET                           (0x2c)
#define SEC_ENG_SE_TRNG_RESEED_N_LSB                            SEC_ENG_SE_TRNG_RESEED_N_LSB
#define SEC_ENG_SE_TRNG_RESEED_N_LSB_POS                        (0U)
#define SEC_ENG_SE_TRNG_RESEED_N_LSB_LEN                        (32U)
#define SEC_ENG_SE_TRNG_RESEED_N_LSB_MSK                        (((1U<<SEC_ENG_SE_TRNG_RESEED_N_LSB_LEN)-1)<<SEC_ENG_SE_TRNG_RESEED_N_LSB_POS)
#define SEC_ENG_SE_TRNG_RESEED_N_LSB_UMSK                       (~(((1U<<SEC_ENG_SE_TRNG_RESEED_N_LSB_LEN)-1)<<SEC_ENG_SE_TRNG_RESEED_N_LSB_POS))

/* 0x30 : se_trng_ctrl_2 */
#define SEC_ENG_SE_TRNG_CTRL_2_OFFSET                           (0x30)
#define SEC_ENG_SE_TRNG_RESEED_N_MSB                            SEC_ENG_SE_TRNG_RESEED_N_MSB
#define SEC_ENG_SE_TRNG_RESEED_N_MSB_POS                        (0U)
#define SEC_ENG_SE_TRNG_RESEED_N_MSB_LEN                        (16U)
#define SEC_ENG_SE_TRNG_RESEED_N_MSB_MSK                        (((1U<<SEC_ENG_SE_TRNG_RESEED_N_MSB_LEN)-1)<<SEC_ENG_SE_TRNG_RESEED_N_MSB_POS)
#define SEC_ENG_SE_TRNG_RESEED_N_MSB_UMSK                       (~(((1U<<SEC_ENG_SE_TRNG_RESEED_N_MSB_LEN)-1)<<SEC_ENG_SE_TRNG_RESEED_N_MSB_POS))

/* 0x34 : se_trng_ctrl_3 */
#define SEC_ENG_SE_TRNG_CTRL_3_OFFSET                           (0x34)
#define SEC_ENG_SE_TRNG_CP_RATIO                                SEC_ENG_SE_TRNG_CP_RATIO
#define SEC_ENG_SE_TRNG_CP_RATIO_POS                            (0U)
#define SEC_ENG_SE_TRNG_CP_RATIO_LEN                            (8U)
#define SEC_ENG_SE_TRNG_CP_RATIO_MSK                            (((1U<<SEC_ENG_SE_TRNG_CP_RATIO_LEN)-1)<<SEC_ENG_SE_TRNG_CP_RATIO_POS)
#define SEC_ENG_SE_TRNG_CP_RATIO_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_CP_RATIO_LEN)-1)<<SEC_ENG_SE_TRNG_CP_RATIO_POS))
#define SEC_ENG_SE_TRNG_HT_RCT_C                                SEC_ENG_SE_TRNG_HT_RCT_C
#define SEC_ENG_SE_TRNG_HT_RCT_C_POS                            (8U)
#define SEC_ENG_SE_TRNG_HT_RCT_C_LEN                            (8U)
#define SEC_ENG_SE_TRNG_HT_RCT_C_MSK                            (((1U<<SEC_ENG_SE_TRNG_HT_RCT_C_LEN)-1)<<SEC_ENG_SE_TRNG_HT_RCT_C_POS)
#define SEC_ENG_SE_TRNG_HT_RCT_C_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_HT_RCT_C_LEN)-1)<<SEC_ENG_SE_TRNG_HT_RCT_C_POS))
#define SEC_ENG_SE_TRNG_HT_APT_C                                SEC_ENG_SE_TRNG_HT_APT_C
#define SEC_ENG_SE_TRNG_HT_APT_C_POS                            (16U)
#define SEC_ENG_SE_TRNG_HT_APT_C_LEN                            (10U)
#define SEC_ENG_SE_TRNG_HT_APT_C_MSK                            (((1U<<SEC_ENG_SE_TRNG_HT_APT_C_LEN)-1)<<SEC_ENG_SE_TRNG_HT_APT_C_POS)
#define SEC_ENG_SE_TRNG_HT_APT_C_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_HT_APT_C_LEN)-1)<<SEC_ENG_SE_TRNG_HT_APT_C_POS))
#define SEC_ENG_SE_TRNG_HT_OD_EN                                SEC_ENG_SE_TRNG_HT_OD_EN
#define SEC_ENG_SE_TRNG_HT_OD_EN_POS                            (26U)
#define SEC_ENG_SE_TRNG_HT_OD_EN_LEN                            (1U)
#define SEC_ENG_SE_TRNG_HT_OD_EN_MSK                            (((1U<<SEC_ENG_SE_TRNG_HT_OD_EN_LEN)-1)<<SEC_ENG_SE_TRNG_HT_OD_EN_POS)
#define SEC_ENG_SE_TRNG_HT_OD_EN_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_HT_OD_EN_LEN)-1)<<SEC_ENG_SE_TRNG_HT_OD_EN_POS))
#define SEC_ENG_SE_TRNG_ROSC_DIS                                SEC_ENG_SE_TRNG_ROSC_DIS
#define SEC_ENG_SE_TRNG_ROSC_DIS_POS                            (31U)
#define SEC_ENG_SE_TRNG_ROSC_DIS_LEN                            (1U)
#define SEC_ENG_SE_TRNG_ROSC_DIS_MSK                            (((1U<<SEC_ENG_SE_TRNG_ROSC_DIS_LEN)-1)<<SEC_ENG_SE_TRNG_ROSC_DIS_POS)
#define SEC_ENG_SE_TRNG_ROSC_DIS_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_ROSC_DIS_LEN)-1)<<SEC_ENG_SE_TRNG_ROSC_DIS_POS))

/* 0x40 : se_trng_test_out_0 */
#define SEC_ENG_SE_TRNG_TEST_OUT_0_OFFSET                       (0x40)
#define SEC_ENG_SE_TRNG_TEST_OUT_0                              SEC_ENG_SE_TRNG_TEST_OUT_0
#define SEC_ENG_SE_TRNG_TEST_OUT_0_POS                          (0U)
#define SEC_ENG_SE_TRNG_TEST_OUT_0_LEN                          (32U)
#define SEC_ENG_SE_TRNG_TEST_OUT_0_MSK                          (((1U<<SEC_ENG_SE_TRNG_TEST_OUT_0_LEN)-1)<<SEC_ENG_SE_TRNG_TEST_OUT_0_POS)
#define SEC_ENG_SE_TRNG_TEST_OUT_0_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_TEST_OUT_0_LEN)-1)<<SEC_ENG_SE_TRNG_TEST_OUT_0_POS))

/* 0x44 : se_trng_test_out_1 */
#define SEC_ENG_SE_TRNG_TEST_OUT_1_OFFSET                       (0x44)
#define SEC_ENG_SE_TRNG_TEST_OUT_1                              SEC_ENG_SE_TRNG_TEST_OUT_1
#define SEC_ENG_SE_TRNG_TEST_OUT_1_POS                          (0U)
#define SEC_ENG_SE_TRNG_TEST_OUT_1_LEN                          (32U)
#define SEC_ENG_SE_TRNG_TEST_OUT_1_MSK                          (((1U<<SEC_ENG_SE_TRNG_TEST_OUT_1_LEN)-1)<<SEC_ENG_SE_TRNG_TEST_OUT_1_POS)
#define SEC_ENG_SE_TRNG_TEST_OUT_1_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_TEST_OUT_1_LEN)-1)<<SEC_ENG_SE_TRNG_TEST_OUT_1_POS))

/* 0x48 : se_trng_test_out_2 */
#define SEC_ENG_SE_TRNG_TEST_OUT_2_OFFSET                       (0x48)
#define SEC_ENG_SE_TRNG_TEST_OUT_2                              SEC_ENG_SE_TRNG_TEST_OUT_2
#define SEC_ENG_SE_TRNG_TEST_OUT_2_POS                          (0U)
#define SEC_ENG_SE_TRNG_TEST_OUT_2_LEN                          (32U)
#define SEC_ENG_SE_TRNG_TEST_OUT_2_MSK                          (((1U<<SEC_ENG_SE_TRNG_TEST_OUT_2_LEN)-1)<<SEC_ENG_SE_TRNG_TEST_OUT_2_POS)
#define SEC_ENG_SE_TRNG_TEST_OUT_2_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_TEST_OUT_2_LEN)-1)<<SEC_ENG_SE_TRNG_TEST_OUT_2_POS))

/* 0x4c : se_trng_test_out_3 */
#define SEC_ENG_SE_TRNG_TEST_OUT_3_OFFSET                       (0x4c)
#define SEC_ENG_SE_TRNG_TEST_OUT_3                              SEC_ENG_SE_TRNG_TEST_OUT_3
#define SEC_ENG_SE_TRNG_TEST_OUT_3_POS                          (0U)
#define SEC_ENG_SE_TRNG_TEST_OUT_3_LEN                          (32U)
#define SEC_ENG_SE_TRNG_TEST_OUT_3_MSK                          (((1U<<SEC_ENG_SE_TRNG_TEST_OUT_3_LEN)-1)<<SEC_ENG_SE_TRNG_TEST_OUT_3_POS)
#define SEC_ENG_SE_TRNG_TEST_OUT_3_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_TEST_OUT_3_LEN)-1)<<SEC_ENG_SE_TRNG_TEST_OUT_3_POS))

/* 0xfc : se_trng_ctrl_prot */
#define SEC_ENG_SE_TRNG_CTRL_PROT_OFFSET                        (0xfc)
#define SEC_ENG_SE_TRNG_PROT_EN                                 SEC_ENG_SE_TRNG_PROT_EN
#define SEC_ENG_SE_TRNG_PROT_EN_POS                             (0U)
#define SEC_ENG_SE_TRNG_PROT_EN_LEN                             (1U)
#define SEC_ENG_SE_TRNG_PROT_EN_MSK                             (((1U<<SEC_ENG_SE_TRNG_PROT_EN_LEN)-1)<<SEC_ENG_SE_TRNG_PROT_EN_POS)
#define SEC_ENG_SE_TRNG_PROT_EN_UMSK                            (~(((1U<<SEC_ENG_SE_TRNG_PROT_EN_LEN)-1)<<SEC_ENG_SE_TRNG_PROT_EN_POS))
#define SEC_ENG_SE_TRNG_ID0_EN                                  SEC_ENG_SE_TRNG_ID0_EN
#define SEC_ENG_SE_TRNG_ID0_EN_POS                              (1U)
#define SEC_ENG_SE_TRNG_ID0_EN_LEN                              (1U)
#define SEC_ENG_SE_TRNG_ID0_EN_MSK                              (((1U<<SEC_ENG_SE_TRNG_ID0_EN_LEN)-1)<<SEC_ENG_SE_TRNG_ID0_EN_POS)
#define SEC_ENG_SE_TRNG_ID0_EN_UMSK                             (~(((1U<<SEC_ENG_SE_TRNG_ID0_EN_LEN)-1)<<SEC_ENG_SE_TRNG_ID0_EN_POS))
#define SEC_ENG_SE_TRNG_ID1_EN                                  SEC_ENG_SE_TRNG_ID1_EN
#define SEC_ENG_SE_TRNG_ID1_EN_POS                              (2U)
#define SEC_ENG_SE_TRNG_ID1_EN_LEN                              (1U)
#define SEC_ENG_SE_TRNG_ID1_EN_MSK                              (((1U<<SEC_ENG_SE_TRNG_ID1_EN_LEN)-1)<<SEC_ENG_SE_TRNG_ID1_EN_POS)
#define SEC_ENG_SE_TRNG_ID1_EN_UMSK                             (~(((1U<<SEC_ENG_SE_TRNG_ID1_EN_LEN)-1)<<SEC_ENG_SE_TRNG_ID1_EN_POS))


struct  sec_eng_trng_reg {
    /* 0x0 : se_trng_ctrl_0 */
    union {
        struct {
            uint32_t se_trng_busy                   :  1; /* [    0],          r,        0x0 */
            uint32_t se_trng_trig_1t                :  1; /* [    1],        w1p,        0x0 */
            uint32_t se_trng_en                     :  1; /* [    2],        r/w,        0x0 */
            uint32_t se_trng_dout_clr_1t            :  1; /* [    3],        w1p,        0x0 */
            uint32_t se_trng_ht_error               :  1; /* [    4],          r,        0x0 */
            uint32_t reserved_5_7                   :  3; /* [ 7: 5],       rsvd,        0x0 */
            uint32_t se_trng_int                    :  1; /* [    8],          r,        0x0 */
            uint32_t se_trng_int_clr_1t             :  1; /* [    9],        w1p,        0x0 */
            uint32_t se_trng_int_set_1t             :  1; /* [   10],        w1p,        0x0 */
            uint32_t se_trng_int_mask               :  1; /* [   11],        r/w,        0x0 */
            uint32_t reserved_12                    :  1; /* [   12],       rsvd,        0x0 */
            uint32_t se_trng_manual_fun_sel         :  1; /* [   13],        r/w,        0x0 */
            uint32_t se_trng_manual_reseed          :  1; /* [   14],        r/w,        0x0 */
            uint32_t se_trng_manual_en              :  1; /* [   15],        r/w,        0x0 */
            uint32_t reserved_16_31                 : 16; /* [31:16],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_ctrl_0;

    /* 0x4 : se_trng_status */
    union {
        struct {
            uint32_t se_trng_status                 : 32; /* [31: 0],          r,   0x100020 */
        }BF;
        uint32_t WORD;
    } se_trng_status;

    /* 0x8 : se_trng_dout_0 */
    union {
        struct {
            uint32_t se_trng_dout_0                 : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_dout_0;

    /* 0xc : se_trng_dout_1 */
    union {
        struct {
            uint32_t se_trng_dout_1                 : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_dout_1;

    /* 0x10 : se_trng_dout_2 */
    union {
        struct {
            uint32_t se_trng_dout_2                 : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_dout_2;

    /* 0x14 : se_trng_dout_3 */
    union {
        struct {
            uint32_t se_trng_dout_3                 : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_dout_3;

    /* 0x18 : se_trng_dout_4 */
    union {
        struct {
            uint32_t se_trng_dout_4                 : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_dout_4;

    /* 0x1c : se_trng_dout_5 */
    union {
        struct {
            uint32_t se_trng_dout_5                 : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_dout_5;

    /* 0x20 : se_trng_dout_6 */
    union {
        struct {
            uint32_t se_trng_dout_6                 : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_dout_6;

    /* 0x24 : se_trng_dout_7 */
    union {
        struct {
            uint32_t se_trng_dout_7                 : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_dout_7;

    /* 0x28 : se_trng_test */
    union {
        struct {
            uint32_t se_trng_test_en                :  1; /* [    0],        r/w,        0x0 */
            uint32_t se_trng_cp_test_en             :  1; /* [    1],        r/w,        0x0 */
            uint32_t se_trng_cp_bypass              :  1; /* [    2],        r/w,        0x0 */
            uint32_t se_trng_ht_dis                 :  1; /* [    3],        r/w,        0x0 */
            uint32_t se_trng_ht_alarm_n             :  8; /* [11: 4],        r/w,        0x0 */
            uint32_t reserved_12_31                 : 20; /* [31:12],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_test;

    /* 0x2c : se_trng_ctrl_1 */
    union {
        struct {
            uint32_t se_trng_reseed_n_lsb           : 32; /* [31: 0],        r/w,     0xffff */
        }BF;
        uint32_t WORD;
    } se_trng_ctrl_1;

    /* 0x30 : se_trng_ctrl_2 */
    union {
        struct {
            uint32_t se_trng_reseed_n_msb           : 16; /* [15: 0],        r/w,       0xff */
            uint32_t reserved_16_31                 : 16; /* [31:16],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_ctrl_2;

    /* 0x34 : se_trng_ctrl_3 */
    union {
        struct {
            uint32_t se_trng_cp_ratio               :  8; /* [ 7: 0],        r/w,        0x3 */
            uint32_t se_trng_ht_rct_c               :  8; /* [15: 8],        r/w,       0x42 */
            uint32_t se_trng_ht_apt_c               : 10; /* [25:16],        r/w,      0x37a */
            uint32_t se_trng_ht_od_en               :  1; /* [   26],        r/w,        0x0 */
            uint32_t reserved_27_30                 :  4; /* [30:27],       rsvd,        0x0 */
            uint32_t se_trng_rosc_dis               :  1; /* [   31],        r/w,        0x1 */
        }BF;
        uint32_t WORD;
    } se_trng_ctrl_3;

    /* 0x38  reserved */
    uint8_t RESERVED0x38[8];

    /* 0x40 : se_trng_test_out_0 */
    union {
        struct {
            uint32_t se_trng_test_out_0             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_test_out_0;

    /* 0x44 : se_trng_test_out_1 */
    union {
        struct {
            uint32_t se_trng_test_out_1             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_test_out_1;

    /* 0x48 : se_trng_test_out_2 */
    union {
        struct {
            uint32_t se_trng_test_out_2             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_test_out_2;

    /* 0x4c : se_trng_test_out_3 */
    union {
        struct {
            uint32_t se_trng_test_out_3             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_test_out_3;

    /* 0x50  reserved */
    uint8_t RESERVED0x50[172];

    /* 0xfc : se_trng_ctrl_prot */
    union {
        struct {
            uint32_t se_trng_prot_en                :  1; /* [    0],        r/w,        0x1 */
            uint32_t se_trng_id0_en                 :  1; /* [    1],        r/w,        0x1 */
            uint32_t se_trng_id1_en                 :  1; /* [    2],        r/w,        0x1 */
            uint32_t reserved_3_31                  : 29; /* [31: 3],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } se_trng_ctrl_prot;

};

typedef volatile struct sec_eng_trng_reg sec_eng_trng_reg_t;

#define SEC_ENG_TRNG_OFFSET    0x200


#endif  /* __SEC_ENG_REG_H__ */
