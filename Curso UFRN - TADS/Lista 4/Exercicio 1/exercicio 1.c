#include <stdio.h>
#include <stdlib.h>
/*Fa�a um programa que receba do usu�rio um m�s do ano (1 a 12), e apresente a
seguinte descri��o de acordo com o m�s dado: */

int main(){
	int mes;
	printf("Digite um mes do ano: \n");
	scanf("%i", &mes);
	
	if(mes == 1)
		printf("Ferias\n");
	else if(mes >= 2 && mes <= 6)
		printf("1� semestre letivo\n");
	else if(mes == 7)
		printf("Recesso\n");
	else if(mes >= 8 && mes <= 11)
		printf("2� semestre letivo\n");
	else if(mes == 12)
		printf("Ferias\n");
	else
		printf("Error...\n");
		
	system("pause");
	return 0;
}
