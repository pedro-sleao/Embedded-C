/*
 * main.c
 *
 *  Created on: Jun 12, 2024
 *      Author: pedro
 */

#include <stdio.h>
#include "math.h"

int main(void)
{
	printf("Add: %d\n", add(1, 3));
	printf("Sub: %d\n", subtract(1, 3));
	printf("Mul: %I64d\n", multiply(1, 3));
	printf("Div: %f\n", divide(1, 3));

	return 0;
}

