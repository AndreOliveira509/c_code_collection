/*
	Name:  ImcClass.cpp
	Author: André Oliveira
	Date: 16/03/26 17:39
	Description: Um algoritmo que classifique o IMC de uma pessoa emitindo os diagnosticos
*/
# include <stdio.h>

main(){
	float imc, a, p;
	printf("Escreva seu peso e sua altura, respectivamente: ");
	scanf("%f %f", &p, &a);
	imc = p / (a*a);
	if (imc < 16){
		printf("Magreza grave");
	}else if (imc < 17){
		printf("Magreza Moderada");
	}else if (imc < 18.5){
		printf("Magreza leve");
	}else if (imc < 25){
		printf("Saudavel");
	}else if(imc < 30){
		printf("Sobrepeso");
	}else if(imc < 35){
		printf("Obesidade Grau I");
	}else if(imc < 40){
		printf("Obesidade Grau II (considerada severa)");
	}else{
		printf("Obesidade Grau III (considerada mórbida)");
	}
}
