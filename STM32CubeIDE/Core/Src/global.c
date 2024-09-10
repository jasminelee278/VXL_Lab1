/*
 * global.c
 */

#include "global.h"

int led_counter = 0;
int led0_status = RED;
int led0_counter = 5;
int led1_status = GREEN;
int led1_counter = 3;


void led_red(){
	HAL_GPIO_WritePin(LED1_R_GPIO_Port, LED1_R_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED1_Y_GPIO_Port, LED1_Y_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED1_G_GPIO_Port, LED1_G_Pin, GPIO_PIN_RESET);
}
void led_yellow(){
	HAL_GPIO_WritePin(LED1_R_GPIO_Port, LED1_R_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED1_Y_GPIO_Port, LED1_Y_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED1_G_GPIO_Port, LED1_G_Pin, GPIO_PIN_RESET);
}
void led_green(){
	HAL_GPIO_WritePin(LED1_R_GPIO_Port, LED1_R_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED1_Y_GPIO_Port, LED1_Y_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED1_G_GPIO_Port, LED1_G_Pin, GPIO_PIN_SET);
}


void led_control(int ledth, int color){
	GPIO_TypeDef * x1;
	GPIO_TypeDef * x2;
	GPIO_TypeDef * x3;
	uint16_t y1;
	uint16_t y2;
	uint16_t y3;
	switch(ledth){
			case 1:
				x1 = LED1_R_GPIO_Port;
				y1 = LED1_R_Pin;
				x2 = LED1_Y_GPIO_Port;
				y2 = LED1_Y_Pin;
				x3 = LED1_G_GPIO_Port;
				y3 = LED1_G_Pin;
				break;
			case 2:
				x1 = LED2_R_GPIO_Port;
				y1 = LED2_R_Pin;
				x2 = LED2_Y_GPIO_Port;
				y2 = LED2_Y_Pin;
				x3 = LED2_G_GPIO_Port;
				y3 = LED2_G_Pin;
				break;
			case 3:
				x1 = LED3_R_GPIO_Port;
				y1 = LED3_R_Pin;
				x2 = LED3_Y_GPIO_Port;
				y2 = LED3_Y_Pin;
				x3 = LED3_G_GPIO_Port;
				y3 = LED3_G_Pin;
				break;
			case 4:
				x1 = LED4_R_GPIO_Port;
				y1 = LED4_R_Pin;
				x2 = LED4_Y_GPIO_Port;
				y2 = LED4_Y_Pin;
				x3 = LED4_G_GPIO_Port;
				y3 = LED4_G_Pin;
				break;
			default:
				break;
	}
	switch(color){
			case RED:
				HAL_GPIO_WritePin(x1, y1, GPIO_PIN_SET);
				HAL_GPIO_WritePin(x2, y2, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(x3, y3, GPIO_PIN_RESET);
				break;
			case YELLOW:
				HAL_GPIO_WritePin(x1, y1, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(x2, y2, GPIO_PIN_SET);
				HAL_GPIO_WritePin(x3, y3, GPIO_PIN_RESET);
				break;
			case GREEN:
				HAL_GPIO_WritePin(x1, y1, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(x2, y2, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(x3, y3, GPIO_PIN_SET);
				break;
			default:
				break;
	}
}
