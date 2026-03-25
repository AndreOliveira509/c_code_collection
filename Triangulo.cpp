/*
	Name: Triangulo.cpp
	Author: André Oliveira
	Date: 24/03/26 20:32
	Description: Progrma que ve ql tipo é de triangulo
*/
# include <stdio.h>

main(){
	float l1, l2, l3;
	l1 = l2 = l3 = 0;
	
	printf("Escreva os lados do triangulo: ");
	scanf("%f %f %f", &l1, &l2, &l3);
	
	if(l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1) {
		
		if(l1 == l2 && l2 == l3){
			printf("Equilatero");
		} else if(l1 == l2 || l1 == l3 || l2 ==l3){
			printf("Isoceles");
		} else {
			printf("Escaleno");
		} 
	}else{
		printf("Não é um triangulo");
	}
}
