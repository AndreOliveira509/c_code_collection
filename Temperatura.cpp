/*
	Name: Temperatura.cpp
	Copyright: 
	Author: André Oliveira
	Date: 15/03/26 19:56
	Description: Faça um algoritmo em que seja possível converter uma temperatura lida emgraus Celsius para o equivalente em Fahrenheit
*/
# include <stdio.h>

main(){
	float c, f;
	c = f = 0.0;
	printf("Escreva a temperatura em graus Celsius: ");
	scanf("%f", &c);
	f = (c * 1.8) + 32;
	printf("%fº em Celsius equivale a %fº Fahrenheit", c, f);
}
