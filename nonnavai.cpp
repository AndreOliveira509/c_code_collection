# include <stdio.h>

main(){
	int q, dorothy, dagmar, res, cont;
	
	scanf("%d", &q);
	
	for(cont = 0; cont < q; cont++){
		scanf("%d", &dorothy);
		scanf("%d", &dagmar);
		res = dorothy + dagmar;
		if (dorothy > dagmar && res > 40) 
		printf("DOROTHY DECIDE E A NONNA VAI\n");
		else if (dorothy > dagmar){
		printf("DOROTHY DECIDE\n");
		} else if (dagmar > dorothy && res > 40){
		printf("DAGMAR DECIDE E A NONNA VAI\n");	
		}else if (dagmar > dorothy){
			printf("DAGMAR DECIDE\n");
		}
	}
}
