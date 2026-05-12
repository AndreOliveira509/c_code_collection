/*
	Name: FIBONACCICERTO.cpp
	Author: André Oliveira
	Date: 12/04/26 13:15
	Description: Programa que calcula o sequencia de fibonacci de acordo com o numero dado pelo usuario
*/
# include <stdio.h>

main(){
	int atual, ante, prox, seq, cont;
	
	atual = ante = prox = seq;
	
	atual = 1;
	ante = 1;
	
	scanf("%d", &seq);
	if(seq >= 2){
		seq = seq - 2;
		printf("%d, %d ", atual, ante);
		for(cont = 1; cont <= seq; cont++){
			prox = atual + ante;
			if(cont < seq){
			printf(", %d,  ", prox);
			}else{
			printf("%d ", prox);
			}
			
			
			ante = atual;
			atual = prox;
			
		}		
	}else if(seq = 1){
		printf("%d", atual);
	} else {
		printf("Valor invalido");
	}
	

}
