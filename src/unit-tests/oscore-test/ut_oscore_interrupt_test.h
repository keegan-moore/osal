/*================================================================================*
** File:  ut_oscore_interrupt_test.h
** Owner: Tam Ngo
** Date:  June 2015
**================================================================================*/

#ifndef _UT_OSCORE_INTERRUPT_TEST_H_
#define _UT_OSCORE_INTERRUPT_TEST_H_

/*--------------------------------------------------------------------------------*
** Includes
**--------------------------------------------------------------------------------*/

#include "ut_os_support.h"

/*--------------------------------------------------------------------------------*
** Macros
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** Data types
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** External global variables
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** Global variables
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** Function prototypes
**--------------------------------------------------------------------------------*/

void UT_os_int_attachhandler_test(void);
void UT_os_int_enable_test(void);
void UT_os_int_disable_test(void);
void UT_os_int_lock_test(void);
void UT_os_int_unlock_test(void);

/*--------------------------------------------------------------------------------*/

#endif  /* _UT_OSCORE_INTERRUPT_TEST_H_ */

/*================================================================================*
** End of File: ut_oscore_interrupt_test.h
**================================================================================*/
