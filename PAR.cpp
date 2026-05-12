/*
	Name: PAR.cpp
	Author: André Oliveira
	Date: 12/04/26 13:15
	Description: Programa que ve se o numero é par ou impar
	
*/
# include <stdio.h>

main(){
	int num, resto, quociente;
	
	num = resto = quociente = 0;
	
	scanf("%d", &num);
	
	quociente = num / 2;
	resto = num - (quociente * 2);
	
	if(resto == 0){
		printf("PAR");
	}else {
		printf("Impar");
	}
}
