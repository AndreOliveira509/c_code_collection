/*
	Name: contagemRegressiva.cpp

	Author: André Oliveira
	Date: 19/08/26 20:19
	Description: algoritmo para o calculo de imc atraves de uma função
*/
// seção de importação

# include <stdio.h>

// seção de prototipação

void contar(int);

main(){
	int num;
	num = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	contar(num);
	
}

void contar(int a){
	for(a; a >= 0; a--){
		printf("\n %d", a);
	}
	puts("\n FOGO!!!");
}


