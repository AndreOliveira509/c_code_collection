# include <stdio.h>
#include <string.h>

int main(){
	int n;
	
	scanf("%d", &n);
	char nome[105];
	
	for (int cont = 0; cont < n; cont++){
	
	
	scanf(" %s", nome);
	
	int tamanho = strlen(nome);
	
	for(int k = 0; k < tamanho; k++){
		
			if(nome[k] == 'A' || nome[k] == 'B' || nome[k] == 'C'){
                printf("2");
            }else if(nome[k] == 'D' || nome[k] == 'E' || nome[k] == 'F'){
                printf("3");
            }else if(nome[k] == 'G' || nome[k] == 'H' || nome[k] == 'I'){
                printf("4");
            }else if(nome[k] == 'J' || nome[k] == 'K' || nome[k] == 'L'){
                printf("5");    
            }else if(nome[k] == 'M' || nome[k] == 'N' || nome[k] == 'O'){
                printf("6");
            }else if(nome[k] == 'P' || nome[k] == 'Q' || nome[k] == 'R' || nome[k] == 'S'){
                printf("7");
            }else if(nome[k] == 'T' || nome[k] == 'U' || nome[k] == 'V'){
                printf("8");
            }else if(nome[k] == 'W' || nome[k] == 'X' || nome[k] == 'Y' || nome[k] == 'Z'){
                printf("9");
            }
            
	}
	printf("\n");
	
	}
}
