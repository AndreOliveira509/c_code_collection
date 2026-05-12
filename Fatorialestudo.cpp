/*
	Name: Fatorialestudo.cpp
	Author: André Oliveira
	Date: 15/04/26 11:07
	Description: Programa para calcular o fatorial do numero
*/
#include <iostream>
#include <string>
#include <iostream>
using namespace std;

int main(){
	int num, resto, quociente, cont;
	string binario;
	
	num = resto = quociente = cont = 0;
	binario = "";
	
	scanf("%d", &num);
	if(num < 0 || num > 15){
		return 1;
	}else{
		while(num>cont){
			quociente = num/2;
			resto = num - quociente * 2;
			binario = to_string(resto) + binario;
			num = quociente;
			cont++;
		}
		if(binario = ""){
			binario = '0';
			cont++;
		}
		while (cont < 4){
			binario = "0"+binario;
			cont++;
		}
	}
}
