/*
	Name: Expoentew
	Author: André OLiveira
	Date: 02/04/26 11:55
	Description: romagrama que calcula a potencia a partir da base e expoente fornecido pelo o usuario com enquanto
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
	while(expoente > 0){
		potencia = potencia * base;
		expoente--; 
	}
	
	printf("%d", potencia);
	
}
