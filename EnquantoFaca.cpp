/*
	Name: EnquantoFaca.cpp
	Author: André Oliveira
	Date: 02/04/26 10:31
	Description: Programa para demonstrar a ultilização da estrutura de repeitição enquanto faça
*/

# include <stdio.h>
# include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int soma, cont, num;
	float media;
	
	cont = num = soma = 0;
	media = 0.0;
	
	puts("Digite 10 numeros inteiros:");
	puts("===========================");
	while(cont == 5){
		printf("%d° num: ", cont+1);
		scanf("%d", &num);
		soma = soma + num;
		cont++;
	}
	
	media = (float) soma / cont;
	printf("Media: %.2f", media);
}
