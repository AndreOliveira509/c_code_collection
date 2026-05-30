# include <stdio.h>

int main(){
	int t, Q1, L1,  Q2, L2,  Q3, L3, D1, D2, D3, maior, LC1, LC2, LC3;
	
	scanf("%d", &t);
	
		scanf("%d %d", &Q1, &L1);
		scanf("%d %d", &Q2, &L2);
		scanf("%d %d", &Q3, &L3);
		
		D1 = t/Q1;
		D2 = t/Q2;
		D3 = t/Q3;
		
		LC1 = L1 * D1;
		LC2 = L2 * D2;
		LC3 = L3 * D3;
		
		maior = LC1;
		
		if(LC2 > maior){
			maior = LC2;
		}
		if (LC3 > maior){
			maior = LC3;
		}
		printf("%d", maior);
	
}
