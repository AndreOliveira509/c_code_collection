# include <stdio.h>

main(){
	int a, at, p, cont, n;
	
	scanf("%d", &n);
	
	a = at = 1;
	
	printf("%d, %d, ", a, at);
	for(cont = 0; cont < n-2; cont++){
		p = a + at;
		a = at;
		at = p;
		if (cont == n-3){
		printf(" %d", p);	
		}else{
		printf(" %d,", p);	
		}
		
		
	}
	
}
