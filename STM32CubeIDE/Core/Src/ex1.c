/*
 * exercise1.c
 */
#include "ex1.h"


int led_status = RED;

void led_on(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
}
void led_off(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
}
void init_ex1(){
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
	HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
}
void ex1_run(){
	switch(led_status){
		case RED:
			led_on();
			led_counter++;
			if(led_counter >= 2){
				led_status = YELLOW;
			}
			break;
		case YELLOW:
			led_off();
			led_counter--;
			if(led_counter <= 0){
				led_status = RED;
			}
			break;
		default:
			break;
	}
}


