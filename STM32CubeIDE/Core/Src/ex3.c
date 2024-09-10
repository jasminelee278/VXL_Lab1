/*
 * exercise3.c
 */
#include "ex3.h"


void init_ex3(){
	HAL_GPIO_TogglePin(LED1_R_GPIO_Port, LED1_R_Pin);
	HAL_GPIO_TogglePin(LED1_Y_GPIO_Port, LED1_Y_Pin);
	HAL_GPIO_TogglePin(LED1_G_GPIO_Port, LED1_G_Pin);
	HAL_GPIO_TogglePin(LED2_R_GPIO_Port, LED2_R_Pin);
	HAL_GPIO_TogglePin(LED2_Y_GPIO_Port, LED2_Y_Pin);
	HAL_GPIO_TogglePin(LED2_G_GPIO_Port, LED2_G_Pin);
	HAL_GPIO_TogglePin(LED3_R_GPIO_Port, LED3_R_Pin);
	HAL_GPIO_TogglePin(LED3_Y_GPIO_Port, LED3_Y_Pin);
	HAL_GPIO_TogglePin(LED3_G_GPIO_Port, LED3_G_Pin);
	HAL_GPIO_TogglePin(LED4_R_GPIO_Port, LED4_R_Pin);
	HAL_GPIO_TogglePin(LED4_Y_GPIO_Port, LED4_Y_Pin);
	HAL_GPIO_TogglePin(LED4_G_GPIO_Port, LED4_G_Pin);
}

void traffic_light(int is_7seg){
	switch(is_7seg){
		case 1:
			led_7seg_run();
			break;
		case 0:
			break;
		default:
			break;
	}

	led_control(1, led0_status);
	led_control(3, led0_status);
	led_control(2, led1_status);
	led_control(4, led1_status);

	led0_counter--;
	led1_counter--;

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
	switch(led1_status){
		case RED:
			if(led1_counter <= 0){
				led1_status = GREEN;
				led1_counter = 3;
			}
			break;
		case YELLOW:
			if(led1_counter <= 0){
				led1_status = RED;
				led1_counter = 5;
			}
			break;
		case GREEN:
			if(led1_counter <= 0){
				led1_status = YELLOW;
				led1_counter = 2;
			}
			break;
		default:
			break;
	}
}

void ex3_run(){
	traffic_light(0);
}



