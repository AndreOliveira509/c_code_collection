# include<stdio.h>

main(){
	int w, h, cont, cont2, num, pontodacela, maior, menori, menor;
	
	scanf("%d", &w);
	scanf("%d", &h);
	
	int matriz[h][w];
	
	for(cont = 0; cont < h; cont++){
		for(cont2 = 0; cont2 < w; cont2++){
			printf("Posicao |%d| |%d|: ", cont, cont2);
			scanf("%d", &num);
			matriz[cont][cont2] = num;
		}
	}
	
	for(cont = 0; cont < h; cont++){
		for(cont2 = 0; cont2 < w; cont2++){
			
			printf("|%d|", matriz[cont][cont2]);
		}
		printf("\n");
	}
	for(cont = 0; cont < h; cont++){
		maior = matriz[0][0];
		menori = 0;
		// menor da linha
		for(cont2 = 0; cont2 < w; cont2++){
			if (menor > matriz[cont][cont2]){
				menor = matriz[cont][cont2];
				menori = cont2;
			}
			
		}
		pontodacela = 1;
		for(int k = 0; k < h; k++){
		if (matriz[k][menori] > menor){
		pontodacela = 0;
		}	
		}
		
	if (pontodacela == 1){
			printf("Ponto de sela encontrado: %d na posicao [%d][%d]\n", menor, cont, menori);
		}
		
	}
	
}
