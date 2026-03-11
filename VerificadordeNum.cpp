/*
	Name: VerificadordeNum.cpp
	Author: André Oliveira
	Date: 11/03/26 18:12
	Description: um programa que pede ao utilizador para introduzir um número inteiro. O programa deve verificar e imprimir no ecrã se o número é par ou ímpar, e também se é positivo, negativo ou zero.
*/
# include <stdio.h>

main()
{
	int num;
	printf("Escreva um Numero: ");
	scanf("%d", &num);
	if(num > 0){
		printf("%d eh positivo \n", num);
	} else if (num < 0){
		printf("%d eh negativo. \n", num);
	} else {
		printf("O numero digitado e ZERO.\n");
	}
	
	
	if(num % 2 == 0){
		printf("%d eh par", num);
	} else {
		printf("%d eh impar", num);
	}
}
