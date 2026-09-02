/*
	Name: TransfTemp.cpp
	Author: André Oliveira
	Date: 31/08/26 10:41
	Description: 
*/
# include <stdio.h>

//Seção de Prototipação
float transformarFahrenheit(float);

main(){
	float c, f;
	
	c = 0.0;
	
	printf("Digite quantos graus Celsius está no momento:");
	scanf("%f", &c);
	
	f = transformarFahrenheit(c);
	
	printf("F: %f", f);
	
	
	
}

float transformarFahrenheit(float c){
	float f;
	f = c * 1.8 + 32;
	return f;
}
