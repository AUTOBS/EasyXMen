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
 **  FILENAME    : Arch_Timer.c                                                **
 **                                                                            **
 **  Created on  :                                                             **
 **  Author      : i-soft-os                                                   **
 **  Vendor      :                                                             **
 **  DESCRIPTION : functions related to the processor timers                   **
 **                                                                            **
 **  SPECIFICATION(S) :   AUTOSAR classic Platform r19                         **
 **  Version :   AUTOSAR classic Platform R19--Function Safety                 **
 **                                                                            **
 *******************************************************************************/
/* PRQA S 3108-- */

/*=======[I N C L U D E S]====================================================*/
#include "Arch_Processor.h"

/*=======[M A C R O S]=======================================================*/

/*=======[E X T E R N A L   D A T A]=========================================*/

/*=======[I N T E R N A L   D A T A]=========================================*/
#if (TRUE == CFG_TIMING_PROTECTION_ENABLE)
#include "S32K148_FTM.h"
#include "S32K148_PCC.h"
#endif /* #if (TRUE == CFG_SYSTEM_TIMER_ENABLE) */ /* PRQA S 2053 */ /* MISRA Rule 18.8 */
/*=======[M A C R O S]=======================================================*/

/*=======[E X T E R N A L   D A T A]=========================================*/
/*=======[I N T E R N A L   D A T A]=========================================*/
/*=======[I N T E R N A L   F U N C T I O N   D E C L A R A T I O N S]=======*/
#if (TRUE == CFG_TIMING_PROTECTION_ENABLE)

#endif /* #if (TRUE == CFG_SYSTEM_TIMER_ENABLE) */ /* PRQA S 2053 */ /* MISRA Rule 18.8 */
/*=======[F U N C T I O N   I M P L E M E N T A T I O N S]===================*/

#if (TRUE == CFG_SYSTEM_TIMER_ENABLE)
#define OS_START_SEC_CODE
#include "Os_MemMap.h"
/*****************************************************************************/
/*
 * Brief                <Os_ArchInitSystemTimer>
 * ServiceId            <None>
 * Sync/Async           <Synchronous>
 * Reentrancy           <Non Reentrant>
 * Param-Name[in]       <None>
 * Param-Name[out]      <None>
 * Param-Name[in/out]   <None>
 * Return               <None>
 * PreCondition         <None>
 * CallByAPI            <Os_ArchInitCPU>
 */
/*****************************************************************************/
FUNC(void, OS_CODE) Os_ArchInitSystemTimer(void)
{
    switch (Os_SCB.sysCore)
    {
        #if (TRUE == CFG_SYSTEM_TIMER_ENABLE_CORE0)
        case 0:
            /* Core_0 System Timer Initialize.Value = 48000000u*T - 1u (T--Second) */
            /* PRQA S 0303 ++*/ /* MISRA Rule 11.4 */ /* ARCH_TIMER_VTYPE_CAST_001 */
            OS_SYSTICK_CTRL_REG = 0x0u; 
            OS_SYSTICK_COUNTER_REG = 0x0u;
            OS_SYSTICK_RELOAD_REG = CFG_REG_OSTIMER_VALUE_CORE0 - 0x1u;
            OS_SYSTICK_CTRL_REG = (OS_SYSTICK_CLK_BIT | OS_SYSTICK_INT_BIT);
            /* PRQA S 0303 --*/ /* MISRA Rule 11.4 */
            break;
        #endif
		#if (TRUE == CFG_SYSTEM_TIMER_ENABLE_CORE1)
		case 1:
			/* Core_0 System Timer Initialize.Value = 48000000u*T - 1u (T--Second) */
			/* PRQA S 0303 ++*/ /* MISRA Rule 11.4 */ /* ARCH_TIMER_VTYPE_CAST_001 */
			OS_SYSTICK_CTRL_REG = 0x0u;
			OS_SYSTICK_COUNTER_REG = 0x0u;
			OS_SYSTICK_RELOAD_REG = CFG_REG_OSTIMER_VALUE_CORE1 - 0x1u;
			OS_SYSTICK_CTRL_REG = (OS_SYSTICK_CLK_BIT | OS_SYSTICK_INT_BIT);
			/* PRQA S 0303 --*/ /* MISRA Rule 11.4 */
			break;
		#endif




        /*add comments to pass QAC.*/
        default:
            /* Nothing to do. */
            break;
    }
}
#define OS_STOP_SEC_CODE
#include "Os_MemMap.h"

#define OS_START_SEC_CODE
#include "Os_MemMap.h"
/*****************************************************************************/
/*
 * Brief                <start system timer>
 * ServiceId            <None>
 * Sync/Async           <Synchronous>
 * Reentrancy           <Non Reentrant>
 * Param-Name[in]       <None>
 * Param-Name[out]      <None>
 * Param-Name[in/out]   <None>
 * Return               <None>
 * PreCondition         <None>
 * CallByAPI            <Os_ArchInitCPU>
 */
/*****************************************************************************/
FUNC(void, OS_CODE) Os_StartSysTimer(void)
{
    #if (TRUE == CFG_SYSTEM_TIMER_ENABLE)
    /*Start SysTick counter*/
    OS_SYSTICK_CTRL_REG |= OS_SYSTICK_ENABLE_BIT; /* PRQA S 0303 */ /* MISRA Rule 11.4 */ /* ARCH_TIMER_VTYPE_CAST_001 */
    #endif/*TRUE == CFG_SYSTEM_TIMER_ENABLE*/

    #if (TRUE == CFG_TIMING_PROTECTION_ENABLE)
    /*Start timing protection timer*/
    switch (Os_SCB.sysCore)
    {
        /*Enable hw Channel*/
        case 0:
            /* TimerEnable */
            break;

        /*add comments to pass QAC.*/
        default:
            /* Nothing to do. */
            break;
    }
    #endif/*TRUE == CFG_TIMING_PROTECTION_ENABLE*/
}
#define OS_STOP_SEC_CODE
#include "Os_MemMap.h"
#endif

#if (TRUE == CFG_TIMING_PROTECTION_ENABLE)
#define OS_START_SEC_CODE
#include "Os_MemMap.h"
/*****************************************************************************/
/*
 * Brief                <init STM Mode>
 * ServiceId            <None>
 * Sync/Async           <Synchronous>
 * Reentrancy           <Non Reentrant>
 * Param-Name[in]       <None>
 * Param-Name[out]      <None>
 * Param-Name[in/out]   <None>
 * Return               <None>
 * PreCondition         <None>
 * CallByAPI            <Os_ArchInitCPU>
 */
/*****************************************************************************/
 FUNC(void, OS_CODE) Os_ArchClearTmProtTimer(void)
 {
    switch (Os_SCB.sysCore)
    {
    case 0:
        IP_FTM0->CNT = 0;
        IP_FTM0->SC &= ~FTM_SC_TOF_MASK;
        break;
    default:
        break;
    }
 }
#define OS_STOP_SEC_CODE
#include "Os_MemMap.h"

#define OS_START_SEC_CODE
#include "Os_MemMap.h"
/*****************************************************************************/
/*
 * Brief                <init STM Mode>
 * ServiceId            <None>
 * Sync/Async           <Synchronous>
 * Reentrancy           <Non Reentrant>
 * Param-Name[in]       <None>
 * Param-Name[out]      <None>
 * Param-Name[in/out]   <None>
 * Return               <None>
 * PreCondition         <None>
 * CallByAPI            <Os_ArchInitCPU>
 */
/*****************************************************************************/
FUNC(void, OS_CODE) Os_ArchInitTimingProtTimer(void)
{
    switch (Os_SCB.sysCore)
    {
#if (TRUE == CFG_TIMING_PROTECTION_ENABLE_CORE0)
    case 0:
        /* Initialize Flex Timer instance as simple timer */
        IP_PCC->PCCn[PCC_FTM0_INDEX] &= ~PCC_PCCn_CGC_MASK;
        /* The clock is off and the external clock can be started */
        IP_PCC->PCCn[PCC_FTM0_INDEX] |= PCC_PCCn_PCS(0) | PCC_PCCn_CGC_MASK;
        /*Write protection disabled */
        IP_FTM0->MODE |= FTM_MODE_WPDIS_MASK;
        /*FTM enables , start writing registers*/
        IP_FTM0->MODE |= FTM_MODE_FTMEN_MASK;
        /* Clear status register*/
        IP_FTM0->SC = 0;
        /*  Counter overflow Interrupt Frequency divider select 001B Divide by 2*/
        IP_FTM0->SC |= FTM_SC_TOIE_MASK | FTM_SC_PS(1);
        /*Clear counter overflow flag*/
        IP_FTM0->SC &= ~FTM_SC_TOF_MASK;

        /*DECAPENx, MCOMBINEx, COMBINEx=0*/
        IP_FTM0->COMBINE = 0x00000000;
        /*Sets the polarity of the channel output*/
        IP_FTM0->POL = 0x00000000;
        IP_FTM0->CNTIN = 0x0;
        /*CFG_REG_TP_TIMER_VALUE_CORE0 - 1; */
        /*Sets the counter termination value to configure the interrupt time*/
        IP_FTM0->MOD = CFG_REG_TP_TIMER_VALUE_CORE0 / 2 - 1;
        /*Select clock source*/
        IP_FTM0->SC |= FTM_SC_CLKS(1); /*Select clock source*/
        break;
#endif

        /*add comments to pass QAC.*/
    default:
        /* Nothing to do. */
        break;
    }
}
#define OS_STOP_SEC_CODE
#include "Os_MemMap.h"
#endif /* #if (TRUE == CFG_TIMING_PROTECTION_ENABLE) */ /* PRQA S 2053 */ /* MISRA Rule 18.8 */
