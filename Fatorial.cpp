/*
	Name: Fatorial.cpp
	Author: André Oliveira
	Date: 02/04/26 12:02
	Description: Programa que mostra e calcula o numero fatorial digitado pelo usuario

*/
# include <stdio.h>

main(){
	int num, fat, cont;
	
	
	num = 0;
	fat = 1;
	
	printf("digite um numero:");
	scanf("%d", &num);
	
	for(num; num > 0; num--){
		fat = fat * num;
		if(num == 1){
			printf("%d = %d", num, fat);
		}else {
			printf("%d x ", num);
		}
		
	}
}
