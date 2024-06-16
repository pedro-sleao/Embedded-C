/*
 * main.c
 *
 *  Created on: Jun 16, 2024
 *      Author: pedro
 */

#include <stdio.h>

int main(void){
	char data = 100;
	printf("Value of data = %d\n", data);
	printf("Address of data = %p\n", &data);

	char *pData = &data;
	printf("Fetched data from the pointer = %d\n", *pData);

	*pData = 65;
	printf("Value of data = %d", data);

	return 0;
}
