/*
 * global.h
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"

#define RED 	1
#define YELLOW	2
#define GREEN	3


extern int led_counter;
extern int led0_status;
extern int led0_counter;
extern int led1_status;
extern int led1_counter;

// first implement
void led_red();
void led_yellow();
void led_green();

void led_control(int ledth, int color);


#endif /* INC_GLOBAL_H_ */
