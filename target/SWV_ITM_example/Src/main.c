/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdio.h>

int main(void)
{
	/**
	 * Foi feita uma modificação no arquivo syscalls.c na função _write
	 * para utilizar o ITM_sendchar.
	 *
	 * (Não consegui testar o código porque o ST-LINK V2 clone não tem o pino
	 * SWO).
	 */
	printf("Hello World\n");
	for(;;);
}
