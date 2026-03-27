/*
	Name: Expoente.cpp
	Author: André Oliveira
	Date: 27/03/26 09:39
	Description: Programa para calcular a potencia de numero
*/

# include <stdio.h>

main(){
	int potencia, base, expoente;
	potencia = 1;
	base = 0;
	expoente = 0;
	
	printf("Digite a base: ");
	scanf("%d", &base);
	printf("Digite a expoente: ");
	scanf("%d", &expoente);
	if(expoente == 0){
		printf("1");
	} else {
		for (int cont = 0; cont < expoente; cont++) {
			potencia = potencia * base;
		}
		printf("%d", potencia);		
	}
	
	
	
}
