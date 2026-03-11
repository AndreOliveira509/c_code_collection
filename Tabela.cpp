/*
	Name: Tabela.cpp
	Author: André Oliveira
	Date: 11/03/26 18:24
	Description: um programa que pede ao utilizador para introduzir um número inteiro. O programa deve utilizar um ciclo para calcular e apresentar a tabuada desse número do 1 ao 10.
*/
# include <stdio.h>

main()
{
	int a, num, res;
	a = num = res = 0;
	printf("Digite um Numero: ");
	scanf("%d", &num);
	for(a = 0; a < 11; a++){
		res = num * a;
		printf("%d X %d = %d \n", num, a, res);
	}
}
