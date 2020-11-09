//
// Created by 星星 on 2020/11/6.
//

#ifndef BLUETOOTHCAR_DEAL_H
#define BLUETOOTHCAR_DEAL_H
void dealfirst();
#include "stm32f1xx_hal.h"
#include "main.h"
#include "tim.h"
extern UART_HandleTypeDef huart1;
void dealfirst(char *a);
void CCR1Change(float i);
void CCR2Change(float i);
void work();
#endif //BLUETOOTHCAR_DEAL_H



