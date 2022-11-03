/*
 * lab2_software_timer.h
 *
 *  Created on: Nov 1, 2022
 *      Author: Khanh Ton
 */

#ifndef STM32F1XX_HAL_DRIVER_INC_LAB2_SOFTWARE_TIMER_H_
#define STM32F1XX_HAL_DRIVER_INC_LAB2_SOFTWARE_TIMER_H_

extern int timer1_flag ;
extern int timer2_flag ;
void setTimer1(int duration) ;
void setTimer2(int duration) ;
void timerRun1() ;
void timerRun2() ;


#endif /* STM32F1XX_HAL_DRIVER_INC_LAB2_SOFTWARE_TIMER_H_ */
