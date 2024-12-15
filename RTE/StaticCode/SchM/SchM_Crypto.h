/* PRQA S 3108++ */
/**
 * Copyright (C) 2024 Isoft Infrastructure Software Co., Ltd.
 * SPDX-License-Identifier: LGPL-2.1-only-with-exception OR  LicenseRef-Commercial-License
 *
 * This library is free software; you can redistribute it and/or modify it under the terms of the
 * GNU Lesser General Public License as published by the Free Software Foundation; version 2.1.
 * This library is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 * You should have received a copy of the GNU Lesser General Public License along with this library;
 * if not, write to the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 * or see <https://www.gnu.org/licenses/>.
 *
 * Alternatively, this file may be used under the terms of the Isoft Infrastructure Software Co., Ltd.
 * Commercial License, in which case the provisions of the Isoft Infrastructure Software Co., Ltd.
 * Commercial License shall apply instead of those of the GNU Lesser General Public License.
 *
 * You should have received a copy of the Isoft Infrastructure Software Co., Ltd.  Commercial License
 * along with this program. If not, please find it at <https://EasyXMen.com/xy/reference/permissions.html>
 *
 ********************************************************************************
 **                                                                            **
 **  FILENAME    : SchM_Crypto.h                                               **
 **                                                                            **
 **  Created on  :                                                             **
 **  Author      : yuhao.ge                                                    **
 **  Vendor      :                                                             **
 **  DESCRIPTION : Implementation for Crypto                                   **
 **                                                                            **
 **  SPECIFICATION(S) :   AUTOSAR classic Platform 4.4.0                       **
 **                                                                            **
 *******************************************************************************/
/* PRQA S 3108-- */

/******************************************************************************
**                      Revision Control History                             **
******************************************************************************/
/*  <VERSION>    <DATE>    <AUTHOR>        <REVISION LOG>
 *  V1.0        20200701    yuhao.ge        Initial version*/
#ifndef SCHM_CRYPTO_H
#define SCHM_CRYPTO_H

/*******************************************************************************
**                      Includes                                              **
*******************************************************************************/

/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/*******************************************************************************
**                      Global Data                                           **
*******************************************************************************/

/*******************************************************************************
**                      Global Functions                                      **
*******************************************************************************/
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */
    /**
     * API to be called cyclically to process the requested jobs. The Csm_MainFunction
     * shall check the queues for jobs to pass to the underlying CRYIF.
     * Service ID: 0x01
     * Parameters(IN): NA
     * Parameters(INOUT): NA
     * Parameters(OUT): NA
     * Return value: NA
     */

    FUNC(void, CRY_CODE) Crypto_MainFunction(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
