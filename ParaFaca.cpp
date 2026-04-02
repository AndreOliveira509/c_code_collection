/*
	Name: ParaFaca.cpp
	Author: André Oliveira
	Date: 02/04/26 10:48
	Description: Programa para demonstrar a ultilização da estrutura de repeitição para faça
*/
# include <stdio.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int cont, soma, num;
	float media;
	
	num = soma = 0;
	media = 0.0;
	
	puts("Digite 10 numeros inteiros:");
	puts("===========================");
	
	for(cont = 0; cont < 10; cont++){
		printf("%d° num: ", cont+1);
		scanf("%d", &num);
		soma = soma + num;
	}
	
	
	media = (float) soma / cont;
	printf("Media: %.2f", media);
}
