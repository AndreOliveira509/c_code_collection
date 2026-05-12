/*
	Name: Fibonacciestudo.cpp
	Author: André Oliveira
	Date: 14/04/26 17:14
	Description: Programa que faz a sequencia de fibonacci
*/
# include <stdio.h>

main(){
	int anterior, atual, proximo, seq, cont;
	anterior = 1;
	atual = 1;
	seq = 0;
	scanf("%d", &seq);
	if(seq >= 2){
		seq = seq - 2;
		printf("%d,%d", anterior, atual);
	for(cont = 0; cont < seq; cont++){
		proximo = anterior + atual;
		printf(",%d", proximo);
		anterior = atual;
		atual = proximo;
	}
	}else if(seq == 1){
		printf("%d", atual);
	}else {
		printf("%d", anterior);
	}
}
