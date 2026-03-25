/*
	Name: Conversor.cpp
	Author: André Oliveira
	Date: 25/03/26 19:05
	Description: Programa para converter para 3 moedas diferentes, Dólar, Euro ou Iene. Nomomento da conversão o usuário deverá escolher para qual moedadeverá aparecer o valor da conversão e mostrar somente na moedaqueo usuário escolher.
*/

# include <stdio.h>

main(){
	float real, conversao;
	char moeda;
	real = conversao = 0.0;
	moeda = ' ';
	puts("Escreva qual moeda quer converter: ");
	puts("Dolar = d");
	puts("Euro = e");
	puts("Iene = i");
	scanf(" %c", &moeda);
	printf("Escreva um valor em Real: ");
	scanf("%f", &real);
	
	if(moeda == 'd'){
		conversao = real / 5.23;
		printf("R$ %.2f equivale a U$ %.2f", real, conversao);
	} else if(moeda == 'e'){
		conversao = real / 6.05;
		printf("R$ %.2f equivale a E %.2f", real, conversao);
	} else if(moeda == 'i'){
		conversao = real / 0.033;
		printf("R$ %.2f equivale a Y %.2f", real, conversao);
	} else {
		printf("Digite um Valor valido!");
	}
}
