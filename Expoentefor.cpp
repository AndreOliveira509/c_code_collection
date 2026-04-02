/*
	Name: Expoentefor
	Author: André OLiveira
	Date: 02/04/26 11:55
	Description: romagrama que calcula a potencia a partir da base e expoente fornecido pelo o usuario com para
*/

# include <stdio.h>

main(){
	int base, expoente, potencia, cont;
	
	base = expoente = 0;
	potencia = 1;
	
	printf("Digite a base: ");
	scanf("%d", &base);
	printf("Digite o expoente: ");
	scanf("%d", &expoente);
	for(cont = expoente; cont > 0; cont--){
		potencia = potencia * base;		
	}
	
	printf("%d", potencia);
	
}
