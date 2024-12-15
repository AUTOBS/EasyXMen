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
 **  FILENAME    : SchM_CanIf.h                                                **
 **                                                                            **
 **  Created on  : 2020-03-24                                                  **
 **  Author      : rongbo.hu                                                   **
 **  Vendor      :                                                             **
 **  DESCRIPTION :                                                             **
 **                                                                            **
 **  SPECIFICATION(S) :   AUTOSAR classic Platform R19-11                      **
 **                                                                            **
 *******************************************************************************/
/* PRQA S 3108-- */

#ifndef SCHM_CANIF_H
#define SCHM_CANIF_H

/*=======[R E V I S I O N   H I S T O R Y]====================================*/
/*  <VERSION>    <DATE>    <AUTHOR>    <REVISION LOG>
 *  V1.0.0       20130514   Tommy      Initial version
 */
/*============================================================================*/

/*=======[V E R S I O N  I N F O R M A T I O N]===============================*/
#define SCHM_CANIF_H_VENDOR_ID        60U
#define SCHM_CANIF_H_AR_MAJOR_VERSION 1U
#define SCHM_CANIF_H_AR_MINOR_VERSION 1U
#define SCHM_CANIF_H_AR_PATCH_VERSION 2U
#define SCHM_CANIF_H_SW_MAJOR_VERSION 1U
#define SCHM_CANIF_H_SW_MINOR_VERSION 0U
#define SCHM_CANIF_H_SW_PATCH_VERSION 0U

/*=======[I N C L U D E S]====================================================*/
#include "Os.h"

/*=======[M A C R O S]========================================================*/
#define CANIF_AREA_RXBUFFER (0)
#define CANIF_AREA_TXBUFFER (1)
#define CANIF_AREA_CAN      (2)

#define SchM_Enter_CanIf()  //__disable()
#define SchM_Exit_CanIf()   //__enable()

#endif /* SCHM_CANIF_H */
/*=======[E N D   O F   F I L E]==============================================*/
