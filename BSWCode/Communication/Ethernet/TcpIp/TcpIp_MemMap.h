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
 **  FILENAME    : TcpIp_MemMap.h                                               **
 **                                                                            **
 **  Created on  :                                                             **
 **  Author      : <Auto generated>                                            **
 **  Vendor      :                                                             **
 **  DESCRIPTION : Memory mapping abstraction declaration of TcpIp              **
 **                                                                            **
 **  SPECIFICATION(S) :   AUTOSAR classic Platform 4.2.2                       **
 **                                                                            **
 *******************************************************************************/
/* PRQA S 3108-- */
/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/
/*
 * Version: V1.0.0
 * Note:    Automatically generated, manual modification is not allowed.
 */
/*============================================================================*/
/**
  \page ISOFT_MISRA_Exceptions  MISRA-C:2012 Compliance Exceptions
    ModeName:TcpIp_MemMap<br>
  RuleSorce:puhua-rule.rcf 2.3.1

   \li PRQA S 0883 MISRA Dir 4.10 .<br>
    Reason:<module>_MemMap.h needs to be dynamically referenced multiple times based on pre compiled macros,
            so that duplicate inclusion protection cannot be used.

    \li PRQA S 0791 MISRA Rule 5.4 .<br>
    Reason:According to the segment name definition rules of the autosar specification, segment names may be
            very long and only a few characters may differ between segment names.
 */

/* PRQA S 0883,0791++ */ /* MISAR Dir-4.10,Rule-5.4 */
#define MEMMAP_ERROR

/* Total section items: 10 */
#if defined(START_WITH_IF)
#undef MEMMAP_ERROR

/*Index:0  Section name :CODE*/
#elif defined TCPIP_START_SEC_CODE
#undef TCPIP_START_SEC_CODE
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "TcpIp_MemMap.h, section is used consecutively many times."
#endif
#define TCPIP_START_SEC_CODE_NO_MATCH
#define START_SEC_CODE

#elif defined TCPIP_STOP_SEC_CODE
#undef TCPIP_STOP_SEC_CODE
#undef MEMMAP_ERROR
#ifdef TCPIP_START_SEC_CODE_NO_MATCH
#undef TCPIP_START_SEC_CODE_NO_MATCH
#else
#error "TcpIp_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_CODE

/*Index:1  Section name :CONFIG_DATA_POSTBUILD_UNSPECIFIED*/
#elif defined TCPIP_START_SEC_CONFIG_DATA_POSTBUILD_UNSPECIFIED
#undef TCPIP_START_SEC_CONFIG_DATA_POSTBUILD_UNSPECIFIED
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "TcpIp_MemMap.h, section is used consecutively many times."
#endif
#define TCPIP_START_SEC_CONFIG_DATA_POSTBUILD_UNSPECIFIED_NO_MATCH
#define START_SEC_CONFIG_DATA_POSTBUILD_UNSPECIFIED

#elif defined TCPIP_STOP_SEC_CONFIG_DATA_POSTBUILD_UNSPECIFIED
#undef TCPIP_STOP_SEC_CONFIG_DATA_POSTBUILD_UNSPECIFIED
#undef MEMMAP_ERROR
#ifdef TCPIP_START_SEC_CONFIG_DATA_POSTBUILD_UNSPECIFIED_NO_MATCH
#undef TCPIP_START_SEC_CONFIG_DATA_POSTBUILD_UNSPECIFIED_NO_MATCH
#else
#error "TcpIp_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_CONFIG_DATA_POSTBUILD_UNSPECIFIED

/*Index:2  Section name :CONFIG_DATA_PREBUILD_UNSPECIFIED*/
#elif defined TCPIP_START_SEC_CONFIG_DATA_PREBUILD_UNSPECIFIED
#undef TCPIP_START_SEC_CONFIG_DATA_PREBUILD_UNSPECIFIED
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "TcpIp_MemMap.h, section is used consecutively many times."
#endif
#define TCPIP_START_SEC_CONFIG_DATA_PREBUILD_UNSPECIFIED_NO_MATCH
#define START_SEC_CONFIG_DATA_PREBUILD_UNSPECIFIED

#elif defined TCPIP_STOP_SEC_CONFIG_DATA_PREBUILD_UNSPECIFIED
#undef TCPIP_STOP_SEC_CONFIG_DATA_PREBUILD_UNSPECIFIED
#undef MEMMAP_ERROR
#ifdef TCPIP_START_SEC_CONFIG_DATA_PREBUILD_UNSPECIFIED_NO_MATCH
#undef TCPIP_START_SEC_CONFIG_DATA_PREBUILD_UNSPECIFIED_NO_MATCH
#else
#error "TcpIp_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_CONFIG_DATA_PREBUILD_UNSPECIFIED

/*Index:3  Section name :CONST_UNSPECIFIED*/
#elif defined TCPIP_START_SEC_CONST_UNSPECIFIED
#undef TCPIP_START_SEC_CONST_UNSPECIFIED
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "TcpIp_MemMap.h, section is used consecutively many times."
#endif
#define TCPIP_START_SEC_CONST_UNSPECIFIED_NO_MATCH
#define START_SEC_CONST_UNSPECIFIED

#elif defined TCPIP_STOP_SEC_CONST_UNSPECIFIED
#undef TCPIP_STOP_SEC_CONST_UNSPECIFIED
#undef MEMMAP_ERROR
#ifdef TCPIP_START_SEC_CONST_UNSPECIFIED_NO_MATCH
#undef TCPIP_START_SEC_CONST_UNSPECIFIED_NO_MATCH
#else
#error "TcpIp_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_CONST_UNSPECIFIED

/*Index:4  Section name :VAR_CLEARED_PTR*/
#elif defined TCPIP_START_SEC_VAR_CLEARED_PTR
#undef TCPIP_START_SEC_VAR_CLEARED_PTR
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "TcpIp_MemMap.h, section is used consecutively many times."
#endif
#define TCPIP_START_SEC_VAR_CLEARED_PTR_NO_MATCH
#define START_SEC_VAR_CLEARED_PTR

#elif defined TCPIP_STOP_SEC_VAR_CLEARED_PTR
#undef TCPIP_STOP_SEC_VAR_CLEARED_PTR
#undef MEMMAP_ERROR
#ifdef TCPIP_START_SEC_VAR_CLEARED_PTR_NO_MATCH
#undef TCPIP_START_SEC_VAR_CLEARED_PTR_NO_MATCH
#else
#error "TcpIp_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_VAR_CLEARED_PTR

/*Index:5  Section name :VAR_INIT_8*/
#elif defined TCPIP_START_SEC_VAR_INIT_8
#undef TCPIP_START_SEC_VAR_INIT_8
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "TcpIp_MemMap.h, section is used consecutively many times."
#endif
#define TCPIP_START_SEC_VAR_INIT_8_NO_MATCH
#define START_SEC_VAR_INIT_8

#elif defined TCPIP_STOP_SEC_VAR_INIT_8
#undef TCPIP_STOP_SEC_VAR_INIT_8
#undef MEMMAP_ERROR
#ifdef TCPIP_START_SEC_VAR_INIT_8_NO_MATCH
#undef TCPIP_START_SEC_VAR_INIT_8_NO_MATCH
#else
#error "TcpIp_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_VAR_INIT_8

/*Index:6  Section name :VAR_NO_INIT_32*/
#elif defined TCPIP_START_SEC_VAR_NO_INIT_32
#undef TCPIP_START_SEC_VAR_NO_INIT_32
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "TcpIp_MemMap.h, section is used consecutively many times."
#endif
#define TCPIP_START_SEC_VAR_NO_INIT_32_NO_MATCH
#define START_SEC_VAR_NO_INIT_32

#elif defined TCPIP_STOP_SEC_VAR_NO_INIT_32
#undef TCPIP_STOP_SEC_VAR_NO_INIT_32
#undef MEMMAP_ERROR
#ifdef TCPIP_START_SEC_VAR_NO_INIT_32_NO_MATCH
#undef TCPIP_START_SEC_VAR_NO_INIT_32_NO_MATCH
#else
#error "TcpIp_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_VAR_NO_INIT_32

/*Index:7  Section name :VAR_NO_INIT_8*/
#elif defined TCPIP_START_SEC_VAR_NO_INIT_8
#undef TCPIP_START_SEC_VAR_NO_INIT_8
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "TcpIp_MemMap.h, section is used consecutively many times."
#endif
#define TCPIP_START_SEC_VAR_NO_INIT_8_NO_MATCH
#define START_SEC_VAR_NO_INIT_8

#elif defined TCPIP_STOP_SEC_VAR_NO_INIT_8
#undef TCPIP_STOP_SEC_VAR_NO_INIT_8
#undef MEMMAP_ERROR
#ifdef TCPIP_START_SEC_VAR_NO_INIT_8_NO_MATCH
#undef TCPIP_START_SEC_VAR_NO_INIT_8_NO_MATCH
#else
#error "TcpIp_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_VAR_NO_INIT_8

/*Index:8  Section name :VAR_NO_INIT_PTR*/
#elif defined TCPIP_START_SEC_VAR_NO_INIT_PTR
#undef TCPIP_START_SEC_VAR_NO_INIT_PTR
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "TcpIp_MemMap.h, section is used consecutively many times."
#endif
#define TCPIP_START_SEC_VAR_NO_INIT_PTR_NO_MATCH
#define START_SEC_VAR_NO_INIT_PTR

#elif defined TCPIP_STOP_SEC_VAR_NO_INIT_PTR
#undef TCPIP_STOP_SEC_VAR_NO_INIT_PTR
#undef MEMMAP_ERROR
#ifdef TCPIP_START_SEC_VAR_NO_INIT_PTR_NO_MATCH
#undef TCPIP_START_SEC_VAR_NO_INIT_PTR_NO_MATCH
#else
#error "TcpIp_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_VAR_NO_INIT_PTR

/*Index:9  Section name :VAR_NO_INIT_UNSPECIFIED*/
#elif defined TCPIP_START_SEC_VAR_NO_INIT_UNSPECIFIED
#undef TCPIP_START_SEC_VAR_NO_INIT_UNSPECIFIED
#undef MEMMAP_ERROR
#ifndef MEMMAP_ERROR_SEC_NO_MATCH
#define MEMMAP_ERROR_SEC_NO_MATCH
#else
#error "TcpIp_MemMap.h, section is used consecutively many times."
#endif
#define TCPIP_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_MATCH
#define START_SEC_VAR_NO_INIT_UNSPECIFIED

#elif defined TCPIP_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#undef TCPIP_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#undef MEMMAP_ERROR
#ifdef TCPIP_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_MATCH
#undef TCPIP_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_MATCH
#else
#error "TcpIp_MemMap.h, no matching section was used."
#endif
#ifdef MEMMAP_ERROR_SEC_NO_MATCH
#undef MEMMAP_ERROR_SEC_NO_MATCH
#endif
#define STOP_SEC_VAR_NO_INIT_UNSPECIFIED

#endif /* START_WITH_IF */

#if defined MEMMAP_ERROR
#error "TcpIp_MemMap.h, wrong pragma command"
#endif

#include "MemMap.h"

/*=======[E N D   O F   F I L E]==============================================*/
/* PRQA S 0883,0791-- */ /* MISAR Dir-4.10,Rule-5.4 */