/*
	Name:  IddClassificator.cpp
	Author: André Oliveira
	Date: 16/03/26 17:39
	Description: um algoritmo que le a idade de um usuário e classifica a idade dele
*/
# include <stdio.h>

main(){
	int idd;
	printf("Escreva sua Idade: ");
	scanf("%d", &idd);
	if (idd <= 12){
		printf("Criança");
	}else if (idd <= 19){
		printf("Adolescente");
	} else if (idd <= 60){
		printf("Adulto");
	} else {
		printf("Idoso");
	}
}
