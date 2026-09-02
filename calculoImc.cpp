/*
	Name: calculoImc.cpp

	Author: André Oliveira
	Date: 19/08/26 19:12
	Description: algoritmo para o calculo de imc atraves de uma função
*/
// seção de importação

# include <stdio.h>

// seção de prototipação

float calcularImc(float p, float a);

main(){
	
	char nome[50];
	float imc, peso, altura;
	imc = peso = altura = 0.0;
	
	
	printf("digite seu nome: ");
	fgets(nome, 50, stdin);
	
	printf("digite seu peso:");
	scanf("%f", &peso);
	
	
	printf("digite sua altura:");
	scanf("%f", &altura);

	imc = calcularImc(peso, altura);
	printf("Nome : %s \n Peso: %f \n Altura: %f \n Imc: %f", nome, peso, altura, imc);
		
}//fim

float calcularImc(float p, float a){
	float res;
	res = p / (a*a);
	return res;
}



