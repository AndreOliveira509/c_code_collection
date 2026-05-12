/*
	Name: fatorial.cpp
	Author: André Oliveira
	Date: 12/04/26 13:15
	Description: Programa que calcula o fatorial do num até 10
*/
# include <stdio.h>

main(){
	int num, fat, res;
	
	num = 0;
	res = 1;
	
	scanf("%d", &num);
	
	if(num > 10){
		return 1;
	} else{
		for(fat = 1; fat <= num; fat++){
			res = res * fat;
			if(fat < num){
			printf("%d x ", fat);
			} else{
			printf("%d =", fat);
			}
		}
		printf("%d", res);
		
	}
}
