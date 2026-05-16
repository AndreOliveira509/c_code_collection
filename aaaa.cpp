/*
	Name: Matriz.cpp
	Author: Andr? Oliveira
	Date: 12/05/26 19:23
	Description: Programa que encontra o ponto de cela de uma matriz
*/
# include <stdio.h>

main(){
	int cont, cont2, w, h, num, snum, menor, menori, maior, pontodacela, k;
	w = h = snum = 0;
	scanf("%d", &w);
	scanf("%d", &h);
	
	int matriz[h][w];
	// cont = heigh cont 2 = witdh
	
	
	for (cont = 0; cont < h; cont++){
		for (cont2 = 0; cont2 < w; cont2++){
			printf("Digite o valor para a posi??o [%d][%d]: ", cont, cont2);
			scanf("%d", &num);
			matriz[cont][cont2] = num;
			printf("%d", num);
		}
		printf("\n");
	}
	
	printf("\n--- Matriz Digitada ---\n");

	// FASE 2: Imprimindo a matriz em formato de grade
	for (cont = 0; cont < h; cont++) {
	    for (cont2 = 0; cont2 < w; cont2++) {
	        printf("%d", matriz[cont][cont2]);
	    }
	    printf("\n"); // Quebra a linha ap?s terminar as colunas daquela linha
	}
	
	
	for (cont = 0; cont < h; cont++){
		menor = matriz[cont][0];
		menori = 0;
		
		// menor da linha
		for (cont2 = 0; cont2 < w; cont2++){

			if (matriz[cont][cont2] < menor){
			menor = matriz[cont][cont2];
			menori = cont2;
			}
		}
		int pontodacela = 1;
		
		// maior da coluna
		for (k = 0; k < h; k++){
			if (matriz[k][menori] > menor){
			pontodacela = 0;
			break;
			}
		}
		
		if (pontodacela == 1){
			printf("Ponto de sela encontrado: %d na posicao [%d][%d]\n", menor, cont, menori);
		}
		
	}
	
}
