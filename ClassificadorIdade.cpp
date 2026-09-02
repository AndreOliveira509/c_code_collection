/*
	Name: ClassificadorIdade.cpp
	Author: André Oliveira
	Date: 20/08/26 21:08
	Description: um programa que le a idade
*/
// seção de importação

# include <stdio.h>

// seção de prototipação

void classificarIdade(int, char[]);


main(){

	int idade;
	char nome[50];
	
	idade = 0;
	
	printf("digite seu nome: ");
	fgets(nome, 50, stdin);
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	classificarIdade(idade, nome);
	
	
}

void classificarIdade(int i, char nome[]){
	if(i <= 2){
		printf("%s, voce tem %d anos, Classificação Etário: Bebê", nome, i);
	}else if(i <= 12){
		printf("%s, voce tem %d anos, Classificação Etário: Criança", nome, i);
	}else if(i <= 19){
		printf("%s, voce tem %d anos, Classificação Etário: Adolescente", nome, i);
	}else if(i <= 59){
		printf("%s, voce tem %d anos, Classificação Etário: Adulto", nome, i);
	}else if(i <= 90){
		printf("%s, voce tem %d anos, Classificação Etário: Idoso", nome, i);
	}else{
		printf("%s, voce tem %d anos, Classificação Etário: Matusalém", nome, i);
	}
}


