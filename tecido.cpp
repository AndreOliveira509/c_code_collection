# include <stdio.h>

int main(){
	
	int t, q1, l1, q2, l2, q3, l3, maxlucro, lucroatual, resto, k;
	
	maxlucro = 0;
	lucroatual = 0;
	
	
	scanf("%d", &t);
	
		scanf("%d %d", &q1, &l1);
		scanf("%d %d", &q2, &l2);
		scanf("%d %d", &q3, &l3);
		
		
		//camiseta 1
		for(int i = 0; i * q1 <= t; i++){
		
		// camiseta 2
		for(int j = 0; (i * q1) + (j * q2) <= t; j++){
		
		resto = t - (i * q1) - (j * q2);
		// camiseta 3
		k = resto / q3;
		
		lucroatual = (k * l3) + (i * l1) + (j * l2);
		
		if (lucroatual > maxlucro){
			maxlucro = lucroatual;
		}
		}
		}
		printf("%d ", maxlucro);
	
}


