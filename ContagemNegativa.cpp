/*
	Name: ContagemNegativa.cpp
	Author: André Oliveira
	Date: 02/04/26 11:15
	Description: Progrma que faz  a contagem regresiva até o negativo do outro 2 1 0 -1 2
*/
# include <stdio.h>

main(){
	int cont, menoscont;
	cont = 0;
	
	printf("Digite um numero:");
	scanf("%d", &cont);
	
	menoscont = cont * (-1);
	
	if (cont < 0){
	while(cont > menoscont){
		printf("%d,", cont);
		cont--;
	}
	printf("%d", cont);
	} else{
		while(cont > menoscont){
			printf("%d,", cont);
			cont--;
		}
		printf("%d", cont);
	}
	
	
	
}
