/*
	Name: Foguete.cpp
	Author: André Oliveira
	Date: 02/04/26 11:04
	Description: Contagem regressiva chegar em zero para o lançamento de um foguete, fogo!!
*/
# include <stdio.h>

main(){
	int cont;
	cont = 0;
	
	printf("Digite quanto tempo falta para o foguete ser lancado:");
	scanf("%d", &cont);
	do{
		printf("%d,", cont);
		cont = cont - 1;
	}while(cont > 0);
	printf("FOGO!!!");
}
