/*
 * exercise6-to-exercise10.c
 */
#include "ex6-to-ex10.h"


int sec_count = 0;
int min_count = 0;
int hr_count = 0;

int sec_led = 0;
int min_led = 0;
int hr_led = 0;


void init_ex6_to_ex10(){
	clearAllClock();
}
void ex6_run(){
	setNumberOnClock(led_counter);
	led_counter++;
	if (led_counter >= 12) {
		led_counter = 0;
	}
}

void clearAllClock(){
	HAL_GPIO_WritePin(LED1_R_GPIO_Port, LED1_R_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED1_Y_GPIO_Port, LED1_Y_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED1_G_GPIO_Port, LED1_G_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED2_R_GPIO_Port, LED2_R_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED2_Y_GPIO_Port, LED2_Y_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED2_G_GPIO_Port, LED2_G_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED3_R_GPIO_Port, LED3_R_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED3_Y_GPIO_Port, LED3_Y_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED3_G_GPIO_Port, LED3_G_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED4_R_GPIO_Port, LED4_R_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED4_Y_GPIO_Port, LED4_Y_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED4_G_GPIO_Port, LED4_G_Pin, GPIO_PIN_RESET);
}

void setOnAllClock(){
	HAL_GPIO_WritePin(LED1_R_GPIO_Port, LED1_R_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED1_Y_GPIO_Port, LED1_Y_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED1_G_GPIO_Port, LED1_G_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED2_R_GPIO_Port, LED2_R_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED2_Y_GPIO_Port, LED2_Y_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED2_G_GPIO_Port, LED2_G_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED3_R_GPIO_Port, LED3_R_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED3_Y_GPIO_Port, LED3_Y_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED3_G_GPIO_Port, LED3_G_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED4_R_GPIO_Port, LED4_R_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED4_Y_GPIO_Port, LED4_Y_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED4_G_GPIO_Port, LED4_G_Pin, GPIO_PIN_SET);
}

void setOnOffOnClock(int num, int is_On){
	int x;
	int y;
	switch(is_On){
		case 0:
			y = GPIO_PIN_RESET;
			break;
		case 1:
			y = GPIO_PIN_SET;
			break;
		default:
			break;
	}
	switch(num){
		case 0:
			HAL_GPIO_WritePin(LED1_R_GPIO_Port, LED1_R_Pin, y);
			break;
		case 1:
			HAL_GPIO_WritePin(LED1_Y_GPIO_Port, LED1_Y_Pin, y);
			break;
		case 2:
			HAL_GPIO_WritePin(LED1_G_GPIO_Port, LED1_G_Pin, y);
			break;
		case 3:
			HAL_GPIO_WritePin(LED2_R_GPIO_Port, LED2_R_Pin, y);
			break;
		case 4:
			HAL_GPIO_WritePin(LED2_Y_GPIO_Port, LED2_Y_Pin, y);
			break;
		case 5:
			HAL_GPIO_WritePin(LED2_G_GPIO_Port, LED2_G_Pin, y);
			break;
		case 6:
			HAL_GPIO_WritePin(LED3_R_GPIO_Port, LED3_R_Pin, y);
			break;
		case 7:
			HAL_GPIO_WritePin(LED3_Y_GPIO_Port, LED3_Y_Pin, y);
			break;
		case 8:
			HAL_GPIO_WritePin(LED3_G_GPIO_Port, LED3_G_Pin, y);
			break;
		case 9:
			HAL_GPIO_WritePin(LED4_R_GPIO_Port, LED4_R_Pin, y);
			break;
		case 10:
			HAL_GPIO_WritePin(LED4_Y_GPIO_Port, LED4_Y_Pin, y);
			break;
		case 11:
			HAL_GPIO_WritePin(LED4_G_GPIO_Port, LED4_G_Pin, y);
			break;
		default:
			break;
	}
}

// test with clearAllClock function
void setNumberOnClock(int num){
	setOnOffOnClock(num, 1);
}

// test with setOnAllClock function
void clearNumberOnClock(int num){
	setOnOffOnClock(num, 0);
}

void ex10_run(){
	clearAllClock();
	sec_led = sec_count / 5;
	setNumberOnClock(sec_led);
	min_led = min_count / 5;
	if (min_led != sec_led) {
		setNumberOnClock(min_led);
	}
	hr_led = hr_count;
	if (hr_led != min_led && hr_led != sec_led) {
		setNumberOnClock(hr_led);
	}
	sec_count++;
	if (sec_count >= 60) {
		sec_count = 0;
		min_count++;
		if (min_count >= 60) {
			min_count = 0;
			hr_count++;
			if (hr_count >= 12) {
				hr_count = 0;
			}
		}
	}
}
