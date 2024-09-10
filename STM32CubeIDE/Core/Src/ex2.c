/*
 * exercise2.c
 */
#include "ex2.h"


void init_ex2(){
	HAL_GPIO_TogglePin(LED1_R_GPIO_Port, LED1_R_Pin);
	HAL_GPIO_TogglePin(LED1_Y_GPIO_Port, LED1_Y_Pin);
	HAL_GPIO_TogglePin(LED1_G_GPIO_Port, LED1_G_Pin);
}
void ex2_run(){
	led0_counter--;
	led_control(1, led0_status);
	switch(led0_status){
		case RED:
			if(led0_counter <= 0){
				led0_status = GREEN;
				led0_counter = 3;
			}
			break;
		case YELLOW:
			if(led0_counter <= 0){
				led0_status = RED;
				led0_counter = 5;
			}
			break;
		case GREEN:
			if(led0_counter <= 0){
				led0_status = YELLOW;
				led0_counter = 2;
			}
			break;
		default:
			break;
	}

}


