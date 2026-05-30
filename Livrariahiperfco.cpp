# include <stdio.h>

int main(){
	int n, alturapassada, pico, cont, teste;
	teste = 1;
	alturapassada = pico = 0;
	
	scanf("%d", &n);
	int a[n];
	for(int cont = 0; cont < n; cont++){
	scanf("%d", &a[cont]);
	}
	alturapassada = a[0];
	for(int cont = 1; cont < n; cont++){
		
		if(pico == 0){
			if(a[cont] < alturapassada){
				
			if(cont == 1) {
                teste = 0; 
           	} else {
                pico = 1; 
            }
				
		 }else if(a[cont] == alturapassada){
            teste = 0; 
        }
		}else{
			if (a[cont] >= alturapassada){
			teste = 0;
		} 	
		}
		alturapassada = a[cont];
		}
	if (teste == 0 || pico == 0) {
		printf("INVÁLIDO\n");
	}else{
		printf("VÁLIDO\n");
	}
	

}
