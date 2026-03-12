/*
	Name: Calculadora.cpp
	Author: André Oliveira
	Date: 11/03/26 18:31
	Description:  O programa deve mostrar um menu com 4 opções de operações matemáticas (Soma, Subtração, Multiplicação e Divisão). O utilizador escolhe a operação e introduz dois números. O programa calcula o resultado e mostra-o.
*/

# include <stdio.h>

main()
{
	int opcao, n1, n2;
	float res;
	opcao = n1 = n2 = 0;
	res = 0.0;
	// conferir operação
	printf("============================================\n");
	printf("---------- Calculadora Simples -----------\n");
	printf("--SELECIONE A OPERAÇÃO (1-4)-- \n");
	printf("1. Soma\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
	scanf("%d", &opcao);
	// conferir se selecionou um valor valido
	if(opcao < 1 || opcao > 4) {
		printf("Erro: Opcao invalida. O programa sera encerrado.\n");
		return 1;
	}
	printf("Digite um Numero: \n");
	scanf("%d", &n1);
	printf("Digite um Numero: \n");
	scanf("%d", &n2);
	
	switch (opcao) {
		case 1:
			res = n1 + n2;
			printf("%d + %d = %f", n1, n2, res);
			break;
		case 2:
			res = n1 - n2;
			printf("%d - %d = %f", n1, n2, res);
			break;
		case 3:
			res = n1 * n2;
			printf("%d x %d = %f", n1, n2, res);
			break;
		case 4:	
			res = n1 / n2;
			printf("%d / %d = %f", n1, n2, res);
			break;
	}
	
}
