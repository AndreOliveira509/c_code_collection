/*
	Name: Tabuada.cpp
	Author: André Olivera
	Date: 02/04/26 11:40
	Description: Tabuada com for
*/
# include <stdio.h>

main(){
	int num, cont, res;
	num = res = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	for(cont = 1; cont <= 10; cont++){
		res = num * cont;
		printf("%d x %d = %d \n", num, cont, res);
	}
}
