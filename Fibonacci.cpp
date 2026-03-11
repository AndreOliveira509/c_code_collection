/*
	Name: Fibonacci.cpp
	Author: André Oliveira
	Date: 11/03/26 18:55
	Description:  O programa deve A Sequência de Fibonacci do numero digitado pelo usuario
*/
# include <stdio.h>

// pu = penultimo
main()
{
	int a, atual, anterior, pu, sequencia;
	a = atual = anterior = pu = 0;
	anterior = 1;
	printf("Tamanho da Sequencia Fibonacci Desejada: ");
	scanf("%d", &sequencia);
	for(a = 0; a < sequencia; a++){
		atual = anterior + pu;
		anterior = atual;
		pu = anterior;
		printf("%d \n", atual);
	}
}
