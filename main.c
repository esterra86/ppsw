#include <LPC21xx.H>
#include "led.h"
#include "keyboard.h"

int a;

void Delay(int a){ 
	int iCount;
	int time = a*11996;
	for(iCount =0 ; iCount<time; iCount++){
	};
}


int main(){
	LedInit();
	KeyboardInit();
	while(1){
		Delay(50);
		switch(a=eKeyboardRead()){
			case BUTTON_1:
				LedStepRight();
				break;
			case BUTTON_2:
				LedStepLeft();
			  break;
			default:;
		}
	}
}

