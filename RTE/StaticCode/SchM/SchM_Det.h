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
 **  FILENAME    : SchM_Det.h                                                  **
 **                                                                            **
 **  Created on  :                                                             **
 **  Author      : Xinrun.Wang                                                 **
 **  Vendor      :                                                             **
 **  DESCRIPTION : Dem Schedule Manager                                        **
 **                                                                            **
 **  SPECIFICATION(S) :   AUTOSAR classic Platform R19-11                      **
 **                                                                            **
 *******************************************************************************/
/* PRQA S 3108-- */
#ifndef SCHM_DET_H
#define SCHM_DET_H

#ifndef DET_USED_SCHM
#define DET_USED_SCHM 0
#endif /* !defined DET_USED_SCHM */

#if DET_USED_SCHM
#include "Os.h"
#endif /* DET_USED_SCHM */

/*==========================[M A C R O  D E F I N E]==========================*/

#if DET_USED_SCHM
#define SchM_Enter_Det_LogError() DisableAllInterrupts()
#define SchM_Exit_Det_LogError()  EnableAllInterrupts()
#else
#define SchM_Enter_Det_LogError()
#define SchM_Exit_Det_LogError()
#endif /* DET_USED_SCHM */
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif
