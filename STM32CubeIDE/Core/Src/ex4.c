/*
 * exercise4.c
 */
#include "ex4.h"


void init_7seg_th(int led_7segth){
	switch(led_7segth){
		case 1:
			HAL_GPIO_TogglePin(LED_7SEG1_A_GPIO_Port, LED_7SEG1_A_Pin);
			HAL_GPIO_TogglePin(LED_7SEG1_B_GPIO_Port, LED_7SEG1_B_Pin);
			HAL_GPIO_TogglePin(LED_7SEG1_C_GPIO_Port, LED_7SEG1_C_Pin);
			HAL_GPIO_TogglePin(LED_7SEG1_D_GPIO_Port, LED_7SEG1_D_Pin);
			HAL_GPIO_TogglePin(LED_7SEG1_E_GPIO_Port, LED_7SEG1_E_Pin);
			HAL_GPIO_TogglePin(LED_7SEG1_F_GPIO_Port, LED_7SEG1_F_Pin);
			HAL_GPIO_TogglePin(LED_7SEG1_G_GPIO_Port, LED_7SEG1_G_Pin);
			break;
		case 2:
			HAL_GPIO_TogglePin(LED_7SEG2_A_GPIO_Port, LED_7SEG2_A_Pin);
			HAL_GPIO_TogglePin(LED_7SEG2_B_GPIO_Port, LED_7SEG2_B_Pin);
			HAL_GPIO_TogglePin(LED_7SEG2_C_GPIO_Port, LED_7SEG2_C_Pin);
			HAL_GPIO_TogglePin(LED_7SEG2_D_GPIO_Port, LED_7SEG2_D_Pin);
			HAL_GPIO_TogglePin(LED_7SEG2_E_GPIO_Port, LED_7SEG2_E_Pin);
			HAL_GPIO_TogglePin(LED_7SEG2_F_GPIO_Port, LED_7SEG2_F_Pin);
			HAL_GPIO_TogglePin(LED_7SEG2_G_GPIO_Port, LED_7SEG2_G_Pin);
			break;
		default:
			break;
	}
}

void init_ex4(){
	init_7seg_th(1);
}

void display7SEG(int num){
	switch(led0_counter){
		case 0:
			HAL_GPIO_WritePin(LED_7SEG1_A_GPIO_Port, LED_7SEG1_A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_B_GPIO_Port, LED_7SEG1_B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_C_GPIO_Port, LED_7SEG1_C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_D_GPIO_Port, LED_7SEG1_D_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_E_GPIO_Port, LED_7SEG1_E_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_F_GPIO_Port, LED_7SEG1_F_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_G_GPIO_Port, LED_7SEG1_G_Pin, GPIO_PIN_SET);
			break;
		case 1:
			HAL_GPIO_WritePin(LED_7SEG1_A_GPIO_Port, LED_7SEG1_A_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG1_B_GPIO_Port, LED_7SEG1_B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_C_GPIO_Port, LED_7SEG1_C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_D_GPIO_Port, LED_7SEG1_D_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG1_E_GPIO_Port, LED_7SEG1_E_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG1_F_GPIO_Port, LED_7SEG1_F_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG1_G_GPIO_Port, LED_7SEG1_G_Pin, GPIO_PIN_SET);
			break;
		case 2:
			HAL_GPIO_WritePin(LED_7SEG1_A_GPIO_Port, LED_7SEG1_A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_B_GPIO_Port, LED_7SEG1_B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_C_GPIO_Port, LED_7SEG1_C_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG1_D_GPIO_Port, LED_7SEG1_D_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_E_GPIO_Port, LED_7SEG1_E_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_F_GPIO_Port, LED_7SEG1_F_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG1_G_GPIO_Port, LED_7SEG1_G_Pin, GPIO_PIN_RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(LED_7SEG1_A_GPIO_Port, LED_7SEG1_A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_B_GPIO_Port, LED_7SEG1_B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_C_GPIO_Port, LED_7SEG1_C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_D_GPIO_Port, LED_7SEG1_D_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_E_GPIO_Port, LED_7SEG1_E_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG1_F_GPIO_Port, LED_7SEG1_F_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG1_G_GPIO_Port, LED_7SEG1_G_Pin, GPIO_PIN_RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(LED_7SEG1_A_GPIO_Port, LED_7SEG1_A_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG1_B_GPIO_Port, LED_7SEG1_B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_C_GPIO_Port, LED_7SEG1_C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_D_GPIO_Port, LED_7SEG1_D_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG1_E_GPIO_Port, LED_7SEG1_E_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG1_F_GPIO_Port, LED_7SEG1_F_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_G_GPIO_Port, LED_7SEG1_G_Pin, GPIO_PIN_RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(LED_7SEG1_A_GPIO_Port, LED_7SEG1_A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_B_GPIO_Port, LED_7SEG1_B_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG1_C_GPIO_Port, LED_7SEG1_C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_D_GPIO_Port, LED_7SEG1_D_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_E_GPIO_Port, LED_7SEG1_E_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG1_F_GPIO_Port, LED_7SEG1_F_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_G_GPIO_Port, LED_7SEG1_G_Pin, GPIO_PIN_RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(LED_7SEG1_A_GPIO_Port, LED_7SEG1_A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_B_GPIO_Port, LED_7SEG1_B_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG1_C_GPIO_Port, LED_7SEG1_C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_D_GPIO_Port, LED_7SEG1_D_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_E_GPIO_Port, LED_7SEG1_E_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_F_GPIO_Port, LED_7SEG1_F_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_G_GPIO_Port, LED_7SEG1_G_Pin, GPIO_PIN_RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(LED_7SEG1_A_GPIO_Port, LED_7SEG1_A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_B_GPIO_Port, LED_7SEG1_B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_C_GPIO_Port, LED_7SEG1_C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_D_GPIO_Port, LED_7SEG1_D_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG1_E_GPIO_Port, LED_7SEG1_E_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG1_F_GPIO_Port, LED_7SEG1_F_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG1_G_GPIO_Port, LED_7SEG1_G_Pin, GPIO_PIN_SET);
			break;
		case 8:
			HAL_GPIO_WritePin(LED_7SEG1_A_GPIO_Port, LED_7SEG1_A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_B_GPIO_Port, LED_7SEG1_B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_C_GPIO_Port, LED_7SEG1_C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_D_GPIO_Port, LED_7SEG1_D_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_E_GPIO_Port, LED_7SEG1_E_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_F_GPIO_Port, LED_7SEG1_F_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_G_GPIO_Port, LED_7SEG1_G_Pin, GPIO_PIN_RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(LED_7SEG1_A_GPIO_Port, LED_7SEG1_A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_B_GPIO_Port, LED_7SEG1_B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_C_GPIO_Port, LED_7SEG1_C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_D_GPIO_Port, LED_7SEG1_D_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_E_GPIO_Port, LED_7SEG1_E_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG1_F_GPIO_Port, LED_7SEG1_F_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG1_G_GPIO_Port, LED_7SEG1_G_Pin, GPIO_PIN_RESET);
			break;
		default:
			break;
	}
}

void display7SEG_LED2(int num){
	switch(led1_counter){
		case 0:
			HAL_GPIO_WritePin(LED_7SEG2_A_GPIO_Port, LED_7SEG2_A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_B_GPIO_Port, LED_7SEG2_B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_C_GPIO_Port, LED_7SEG2_C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_D_GPIO_Port, LED_7SEG2_D_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_E_GPIO_Port, LED_7SEG2_E_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_F_GPIO_Port, LED_7SEG2_F_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_G_GPIO_Port, LED_7SEG2_G_Pin, GPIO_PIN_SET);
			break;
		case 1:
			HAL_GPIO_WritePin(LED_7SEG2_A_GPIO_Port, LED_7SEG2_A_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG2_B_GPIO_Port, LED_7SEG2_B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_C_GPIO_Port, LED_7SEG2_C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_D_GPIO_Port, LED_7SEG2_D_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG2_E_GPIO_Port, LED_7SEG2_E_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG2_F_GPIO_Port, LED_7SEG2_F_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG2_G_GPIO_Port, LED_7SEG2_G_Pin, GPIO_PIN_SET);
			break;
		case 2:
			HAL_GPIO_WritePin(LED_7SEG2_A_GPIO_Port, LED_7SEG2_A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_B_GPIO_Port, LED_7SEG2_B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_C_GPIO_Port, LED_7SEG2_C_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG2_D_GPIO_Port, LED_7SEG2_D_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_E_GPIO_Port, LED_7SEG2_E_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_F_GPIO_Port, LED_7SEG2_F_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG2_G_GPIO_Port, LED_7SEG2_G_Pin, GPIO_PIN_RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(LED_7SEG2_A_GPIO_Port, LED_7SEG2_A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_B_GPIO_Port, LED_7SEG2_B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_C_GPIO_Port, LED_7SEG2_C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_D_GPIO_Port, LED_7SEG2_D_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_E_GPIO_Port, LED_7SEG2_E_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG2_F_GPIO_Port, LED_7SEG2_F_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG2_G_GPIO_Port, LED_7SEG2_G_Pin, GPIO_PIN_RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(LED_7SEG2_A_GPIO_Port, LED_7SEG2_A_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG2_B_GPIO_Port, LED_7SEG2_B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_C_GPIO_Port, LED_7SEG2_C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_D_GPIO_Port, LED_7SEG2_D_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG2_E_GPIO_Port, LED_7SEG2_E_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG2_F_GPIO_Port, LED_7SEG2_F_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_G_GPIO_Port, LED_7SEG2_G_Pin, GPIO_PIN_RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(LED_7SEG2_A_GPIO_Port, LED_7SEG2_A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_B_GPIO_Port, LED_7SEG2_B_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG2_C_GPIO_Port, LED_7SEG2_C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_D_GPIO_Port, LED_7SEG2_D_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_E_GPIO_Port, LED_7SEG2_E_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG2_F_GPIO_Port, LED_7SEG2_F_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_G_GPIO_Port, LED_7SEG2_G_Pin, GPIO_PIN_RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(LED_7SEG2_A_GPIO_Port, LED_7SEG2_A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_B_GPIO_Port, LED_7SEG2_B_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG2_C_GPIO_Port, LED_7SEG2_C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_D_GPIO_Port, LED_7SEG2_D_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_E_GPIO_Port, LED_7SEG2_E_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_F_GPIO_Port, LED_7SEG2_F_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_G_GPIO_Port, LED_7SEG2_G_Pin, GPIO_PIN_RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(LED_7SEG2_A_GPIO_Port, LED_7SEG2_A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_B_GPIO_Port, LED_7SEG2_B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_C_GPIO_Port, LED_7SEG2_C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_D_GPIO_Port, LED_7SEG2_D_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG2_E_GPIO_Port, LED_7SEG2_E_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG2_F_GPIO_Port, LED_7SEG2_F_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG2_G_GPIO_Port, LED_7SEG2_G_Pin, GPIO_PIN_SET);
			break;
		case 8:
			HAL_GPIO_WritePin(LED_7SEG2_A_GPIO_Port, LED_7SEG2_A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_B_GPIO_Port, LED_7SEG2_B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_C_GPIO_Port, LED_7SEG2_C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_D_GPIO_Port, LED_7SEG2_D_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_E_GPIO_Port, LED_7SEG2_E_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_F_GPIO_Port, LED_7SEG2_F_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_G_GPIO_Port, LED_7SEG2_G_Pin, GPIO_PIN_RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(LED_7SEG2_A_GPIO_Port, LED_7SEG2_A_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_B_GPIO_Port, LED_7SEG2_B_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_C_GPIO_Port, LED_7SEG2_C_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_D_GPIO_Port, LED_7SEG2_D_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_E_GPIO_Port, LED_7SEG2_E_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_7SEG2_F_GPIO_Port, LED_7SEG2_F_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7SEG2_G_GPIO_Port, LED_7SEG2_G_Pin, GPIO_PIN_RESET);
			break;
		default:
			break;
	}
}

void ex4_run(){
	display7SEG(led0_counter);
	led0_counter++;
	if(led0_counter >= 10) led0_counter = 0;
}

void led_7seg_run(){
	display7SEG(led0_counter);
	display7SEG_LED2(led1_counter);
}


