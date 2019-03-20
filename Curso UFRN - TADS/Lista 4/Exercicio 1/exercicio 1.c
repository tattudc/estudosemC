#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que receba do usuário um mês do ano (1 a 12), e apresente a
seguinte descrição de acordo com o mês dado: */

int main(){
	int mes;
	printf("Digite um mes do ano: \n");
	scanf("%i", &mes);
	
	if(mes == 1)
		printf("Ferias\n");
	else if(mes >= 2 && mes <= 6)
		printf("1º semestre letivo\n");
	else if(mes == 7)
		printf("Recesso\n");
	else if(mes >= 8 && mes <= 11)
		printf("2º semestre letivo\n");
	else if(mes == 12)
		printf("Ferias\n");
	else
		printf("Error...\n");
		
	system("pause");
	return 0;
}
