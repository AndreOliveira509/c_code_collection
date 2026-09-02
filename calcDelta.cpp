
/*
	Name: 
	Copyright: 
	Author: 
	Date: 01/09/26 11:15
	Description: 
*/
# include <stdio.h>

//Seção de Prototipação

float calcularDelta(float, float, float);

main(){
	
	float a,b,c, delta;
	
	a = b = c = delta = 0.0;
	
	
	printf("Digite A:");
	scanf("%f", &a);
	printf("Digite B:");
	scanf("%f", &b);
	printf("Digite C:");
	scanf("%f", &c);
	
	delta = calcularDelta(a,b,c);
	
	printf("Delta: %f", delta);
}

float calcularDelta(float a, float b, float c){
	float delta;
	delta = (b*b) - 4 * a * c;
	
	return delta;
	
	
}
