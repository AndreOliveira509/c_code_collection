/*
	Name: Idadeemdias.cpp
	Copyright: 
	Author: André Oliveira
	Date: 15/03/26 19:56
	Description: um algoritmo que le a idade de uma pessoa em anos, meses e dias e mostra quantos dias esta pessoa já viveu
*/
# include <stdio.h>

main()
{
	int a, m, d, t;
	//Anos, meses, dias, total
	a = m = d = t = 0;
	printf("Escreva sua Idade (Anos, meses e dias), Respectivamente:");
	scanf("%d %d %d", &a, &m, &d);
	t = (a * 365) + (m * 30) + d;
	printf("Sua Idade em dias é %d", t);
	
}
