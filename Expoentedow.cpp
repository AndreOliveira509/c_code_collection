/*
	Name: Expoentedow
	Author: André Oliveira
	Date: 02/04/26 11:46
	Description: Promagrama que calcula a potencia a partir da base e expoente fornecido pelo o usuario
*/

# include <stdio.h>

main(){
	int base, expoente, potencia;
	
	base = expoente = 0;
	potencia = 1;
	
	printf("Digite a base: ");
	scanf("%d", &base);
	printf("Digite o expoente: ");
	scanf("%d", &expoente);
	if (expoente == 0){
		printf("1");
	}
	do{
		potencia = potencia * base;
		expoente--; 
	}while(expoente > 0);
	
	printf("%d", potencia);
	
}
