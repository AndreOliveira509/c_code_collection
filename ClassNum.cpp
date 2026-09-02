/*
	Name: ClassNum.cpp
	Author: André Oliveira
	Date: 31/08/26 10:32
	Description: 
*/

# include <stdio.h>

//Seção de Prototipação

void classificarNum(int);


main(){

	
	int num;
	

	printf("Digite um numero:");
	scanf("%d", &num);
	
	classificarNum(num);
	
}	




void classificarNum(int num){
	
	if(num > 0){
		printf("Positivo");
	}else if(num == 0){
		printf("Nulo");
	}else{
		printf("Negativo");
	}
}
