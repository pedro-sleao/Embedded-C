/*
 * main.c
 *
 *  Created on: Jun 15, 2024
 *      Author: pedro
 */

#include <stdio.h>

int main(void){

	/*
	 * A representação em ponto flutuante pode ser feita utilizando
	 * o padrão IEEE-754, mas, em processadores sem uma FPU é mais
	 * otimizado utilizar a representação em ponto fixo.
	 */

	double number = -1.60217662e-19;

	printf("Number = %0.28lf\n", number);
	printf("Number = %0.8le\n", number);

	return 0;
}
