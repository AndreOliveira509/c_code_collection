# include <stdio.h>

main(){
	int d, v, cont;
	
	v = 0;
	
	scanf("%d", &d);
	
	if(d<=5){
		for(cont = 0; cont < d; cont++){
			v = v + 2;
		}
	}else{
		for(cont = 0; cont < 5; cont++){
			v = v + 2;
		}
		for(cont; cont < d; cont++){
			v = v + 5;
		}
	}
	printf("Multa: R$ %d", v);
}
