/*
 * main.cpp
 *
 *  Created on: Oct 7, 2015
 *      Author: Joseph Warner
 */

/********************************************************************************************/
/*    Include                                                                               */
/********************************************************************************************/
#include "msp.h"
#include <stdint.h>

/********************************************************************************************/
/*    Namespaces                                                                            */
/********************************************************************************************/
using namespace LooperPedal;

/********************************************************************************************/
/*                    Main                                                                  */
/********************************************************************************************/
int main() {
	WDTCTL = WDTPW | WDTHOLD;           // Stop watchdog timer
}
