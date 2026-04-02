/*
	Name: Repitaate.cpp
	Author: André Oliveira
	Date: 02/04/26 09:49
	Description: Programa para demonstrar a ultilização da estrutura de repeitição repita até
*/

# include <stdio.h>

main(){
	int cont, num, soma;
	float media;
	cont = num = soma = 0;
	media = 0.0;
	puts("Digite 10 numeros inteiros: ");
	puts("===============================");
	do{
	printf("%do num: ", cont+1);	
	scanf("%d", &num);
	soma = soma + num;
	cont++;	
	}while(cont <= 5); // condicao ser verdadeiro
	
	media = (float)soma / 10; //casting
	
	printf("Media: %.2f", media);
	
		
}// Fim do programa
