#include <msp430.h> 

/******************************************************
 * Author: C1C Ryan Lamo
 * Created: 14 October 2013
 * Last Edited: 15 October 2013
 * Description: Pong Simulation. Utilizes pong.h header and pon_implement.c
 * implementation files.
 * Documentation: Capt Branchflower explained how to set up the header and implementation files
 * to correctly run the program. Additionally, he showed me how to declare the structures and how
 * to reference them throughout the code.
 ******************************************************/
#include "pong.h"

int main(void) {
    WDTCTL = WDTPW | WDTHOLD;

    ball_t pongball = ball(50,50,50,30,5);

	while (1)
	{
		pongball = move_ball(pongball);
	}
	
	return 0;
}
