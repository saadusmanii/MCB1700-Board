/*----------------------------------------------------------------------------
 * Name:    Blinky.c
 * Purpose: LED Flasher
 * Note(s): __USE_LCD   - enable Output on LCD, uncomment #define in code to use
 *  				for demo (NOT for analysis purposes)
 *----------------------------------------------------------------------------
 * Copyright (c) 2008-2011 Keil - An ARM Company.
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include "LPC17xx.h"                       
#include "GLCD.h"
#include "LED.h"
#include "KBD.h"

#define __FI        1                      /* Font index 16x24               */
#define __USE_LCD   0								 /*Uncomment to use the LCD */

/*----------------------------------------------------------------------------
  Main Program
 *----------------------------------------------------------------------------*/
int main(void){
		int KBD_btn, dispVal=0;
	KBD_Init();
	GLCD_Init();
	GLCD_Clear(White);
	for(;;){
		switch(dispVal){
			case 0:
				GLCD_SetBackColor(Black);
				GLCD_SetTextColor(White);
				GLCD_DisplayString(0, 0, __FI, "   Saad Usmani		  ");
				GLCD_DisplayString(1, 0, __FI, "    Media Center    ");
				GLCD_SetBackColor(White);
				GLCD_SetTextColor(Black);
				GLCD_DisplayString(5, 0, __FI, "Photo Gallery       ");
				GLCD_DisplayString(6, 0, __FI, "MP3 Player          ");
				GLCD_DisplayString(7, 0, __FI, "Game                ");
			break;
			case 1:
				GLCD_SetBackColor(Black);
				GLCD_SetTextColor(White);
				GLCD_DisplayString(0, 0, __FI, "   Saad Usmani		  ");
				GLCD_DisplayString(1, 0, __FI, "    Media Center    ");
				GLCD_SetBackColor(DarkGrey);
				GLCD_SetTextColor(White);
				GLCD_DisplayString(5, 0, __FI, "Photo Gallery       ");
				GLCD_SetBackColor(White);
				GLCD_SetTextColor(Black);
				GLCD_DisplayString(6, 0, __FI, "MP3 Player          ");
				GLCD_DisplayString(7, 0, __FI, "Game                ");
			break;
			case 2:
				GLCD_SetBackColor(Black);
				GLCD_SetTextColor(White);
				GLCD_DisplayString(0, 0, __FI, "   Saad Usmani		  ");
				GLCD_DisplayString(1, 0, __FI, "    Media Center    ");
				GLCD_SetBackColor(White);
				GLCD_SetTextColor(Black);
				GLCD_DisplayString(5, 0, __FI, "Photo Gallery       ");
				GLCD_SetBackColor(DarkGrey);
				GLCD_SetTextColor(White);
				GLCD_DisplayString(6, 0, __FI, "MP3 Player          ");
				GLCD_SetBackColor(White);
				GLCD_SetTextColor(Black);
				GLCD_DisplayString(7, 0, __FI, "Game                ");
			break;
			case 3:
				GLCD_SetBackColor(Black);
				GLCD_SetTextColor(White);
				GLCD_DisplayString(0, 0, __FI, "   Saad Usmani		  ");
				GLCD_DisplayString(1, 0, __FI, "    Media Center    ");
				GLCD_SetBackColor(White);
				GLCD_SetTextColor(Black);
				GLCD_DisplayString(5, 0, __FI, "Photo Gallery       ");
				GLCD_DisplayString(6, 0, __FI, "MP3 Player          ");
				GLCD_SetBackColor(DarkGrey);
				GLCD_SetTextColor(White);
				GLCD_DisplayString(7, 0, __FI, "Game                ");
			break;
			case 6:
				GLCD_SetBackColor(Black);
				GLCD_SetTextColor(White);
				GLCD_DisplayString(0, 0, __FI, "   COE718 Project   ");
				GLCD_DisplayString(1, 0, __FI, "       Game         ");
			break;
		}
		
		KBD_btn = get_button ();
		switch(KBD_btn){
			case KBD_SELECT:
				GLCD_Clear(White);
				switch (dispVal){
					case 1:
						photo();
					break;
					case 2:
						MP3();
					break;
					case 3:
						game();
					break;
				}
			break;
			case KBD_UP:
				if(dispVal > 1) {
					dispVal--;
				} else{
					dispVal = 3;
				}
			break;
			case KBD_DOWN:
				if(dispVal < 3) {
					dispVal++;
				} else {
					dispVal = 1;
				}
			break;
		}
	}
}
int runMain (void) {                       /* Main Program                       */
  main();

}