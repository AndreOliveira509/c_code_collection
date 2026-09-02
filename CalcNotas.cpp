/*
	Name: CalcNotas.cpp
	Author: André Oliveira
	Date: 31/08/26 10:41
	Description: programa que calcular a maior e media inteiro do aluno
*/
# include <stdio.h>

//Seção de Prototipação
void calcularNotas(float, float, float);


main(){
	float maior, menor, media, aux;
	maior = menor = media = 0.0;
	
	scanf("%f", &maior);
	scanf("%f", &media);
	
	if(media > maior){
		aux = maior;
		maior = media;
		media = aux;
	}
	scanf("%f", &menor);
	
	if(menor > maior){
		aux = menor;
		menor = media;
		media = maior;
		maior = aux;
	}else if(menor > media){
		aux = menor;
		menor = media;
		media = aux;
	}
	
	calcularNotas(maior, menor, media);
}

	void calcularNotas(float maior,float menor, float media){
		float mediaT = 0.0;
		float mediaM = 0.0;
		
		mediaT =  (maior + menor + media) / 3;
		mediaM =  (maior + media)/ 2;
	
		printf("Maior: %f \n Menor: %f", mediaM, mediaT);
		printf("\n Nota mais Alta: %f \n Nota Mais Baixa: %f", maior, menor);
			
	}
