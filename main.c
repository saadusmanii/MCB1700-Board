/*----------------------------------------------------------------------------
 * CMSIS-RTOS 'main' function template
 *---------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include "GLCD.h"
#include "KBD.h"


void displayMenu(int sel){
	GLCD_SetBackColor(Red);
	GLCD_SetTextColor(White);
	GLCD_DisplayString(0,0,1, "COE718 Final Project");
	GLCD_DisplayString(1,0,1, "Main Menu");
	
	GLCD_SetBackColor(White);
	GLCD_SetTextColor(Red);

	sel == 0? GLCD_SetBackColor(Red):GLCD_SetBackColor(White);
	GLCD_DisplayString(4, 0, 1, " Photos");
	
	sel == 1? GLCD_SetBackColor(Red):GLCD_SetBackColor(White);
	GLCD_DisplayString(5, 0, 1, " Audio");
	
	sel == 2? GLCD_SetBackColor(Red):GLCD_SetBackColor(White);
	GLCD_DisplayString(6, 0, 1, " Game");
	
	GLCD_SetBackColor(White);
	GLCD_SetTextColor(Red);
	GLCD_DisplayString(8,0,1, "Use Joystick Up/Down");
	GLCD_DisplayString(9,0,1, "Select using Right");
}

void selection(int i){
	switch(i){
		case 0:
			//Photo Gallery
		case 1: 
			//Audio player
		GLCD_Clear(White);
		GLCD_SetBackColor(White);
		GLCD_SetTextColor(Red);
		GLCD_DisplayString(0,0,1, "MP3 Player");
		//need to fill in rest
		break;
		case 2:
			//Game Menu
		break;
		}
	}
/*
 * main: initialize and start the system
 */
int main () {
		int sel;
	GLCD_Init();
	KBD_Init();
	
	GLCD_Clear(White);
	
	while(1){
		switch(get_button()){
			case KBD_DOWN:
				sel +=1;
				sel= sel%3;
				displayMenu(sel);
			break;
			
			case KBD_UP:
				sel-= 1;
				sel = MAX(sel, 0);
				displayMenu(sel);
			break;
			
			case KBD_RIGHT:
				selection(sel);
			break;
		}
	}
}
