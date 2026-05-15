# include <stdio.h>
#include <ctype.h>


main(){
	int n, ano, letras, cont, i;
	ano = letras = n = 0;
	
	char nome[50];
	
	printf("Digite o numero de alunos:");
	scanf("%d", &n);
	
	for(cont = 0; cont < n; cont++){
	
	printf("\n Digite seu nome e ano: EX:(André|2026): ");
	scanf(" %[^|]|%d", nome, &ano);
	
	printf("%s - %d", nome, ano);
	
	// pecorre todas as posições do arrays e para as maiusculas
	for(i = 0; nome[i] != '\0'; i++){
		
		if (nome [i] != ' '){
			letras++;
			
		if( i == 0 || nome[i-1] == ' '){
			printf("%c", toupper(nome[i]));
		}
		
		}
	}
	printf("%d", letras);
	letras = 0;
	}
	
	
	
	
	
}
