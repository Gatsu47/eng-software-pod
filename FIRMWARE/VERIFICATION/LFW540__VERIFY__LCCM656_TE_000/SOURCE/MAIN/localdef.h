

#ifndef LOCALDEF_H_
#define LOCALDEF_H_

	/*lint -e950*/

	//Run on RM48 CNCD
	#include <../../../../BOARD_SUPPORT/lpcb234r0__board_support.h>

	#undef C_LOCALDEF__LCCM280__ENABLE_THIS_MODULE
	#define C_LOCALDEF__LCCM280__ENABLE_THIS_MODULE 0



/*******************************************************************************
RLOOP - PI COMMUNICATIONS MODULE
*******************************************************************************/
	#define C_LOCALDEF__LCCM656__ENABLE_THIS_MODULE							(1U)
	#if C_LOCALDEF__LCCM656__ENABLE_THIS_MODULE == 1U

		//arch
		#define C_LOCALDEF__LCCM656__USE_ON_RM4								(1U)
		#define C_LOCALDEF__LCCM656__USE_ON_WIN32							(0U)


		/** Testing Options */
		#define C_LOCALDEF__LCCM656__ENABLE_TEST_SPEC						(0U)

		/** Main include file */
		#include <LCCM656__RLOOP__PI_COMMS/pi_comms.h>
	#endif //#if C_LOCALDEF__LCCM656__ENABLE_THIS_MODULE == 1U


	/*lint +e950*/
	


#endif /* LOCALDEF_H_ */
