# include<stdio.h>

main(){
	int h1, c1, h2, c2, maior, menor, cp, cm, tempo;
	
	scanf("%d", &h1);
	scanf("%d", &c1);
	scanf("%d", &h2);
	scanf("%d", &c2);
	
	if(h1 > h2 && c1 >= c2){
		printf("Impossivel");
		return 0;
	}else if (h2 > h1 && c2 >= c1){
		printf("Impossivel");
		return 0;
	}
	
	if(h1 > h2){
		maior = h1;
		menor = h2;
		cm = c1;
		cp = c2;
	}else{
		maior = h2;
		menor = h1;
		cm = c2;
		cp = c1;
	}
	
	for(menor; menor <= maior; tempo++){
		menor = menor + cp;
		maior = maior + cm;
	}
	printf("%d", tempo);
}
