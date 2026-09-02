/*
	Name: VerificarImparPar.cpp
	Author: André Oliveira
	Date: 20/08/26 10:11
	Description: programa para verificar se é impar os par
*/

// seção de importação

# include <stdio.h>

// seção de prototipação

int lerNum();

void verificarParimar(int);



main(){
		
	verificarParimar(lerNum());
	
		
}

int lerNum(){
	int n;
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	return n;
}

void verificarParimar(int a){
	int resto, quociente;
	quociente = a / 2;
	resto = a -  (quociente * 2);
	if (resto == 1){
		printf("Impar");
	}else{
		printf("Par");
	}
}
