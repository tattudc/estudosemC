#include <stdio.h>
#include <stdlib.h>
/* 1.Escreva um programa que apresente três opções para o usuário: cálculo dos n termos de uma PA, 
cálculo dos n termos de uma PG e sair. Caso a opção seja 1 ou 2, peça o primeiro termo, 
a quantidade de termos e a razão da progressão, conforme mostrado no exemplo abaixo: */
int main(){
	int opcao, primTermo, quanTermo, razao, i;
	printf("Digite 1 para PA, digite 2 para PG e digite 3 para sair: ");
	do{
		scanf("%i", &opcao);
		i = 0;
		if(opcao == 1){
			printf("Informe o primeiro termo, a quantidade de termos e a razao de progressao: \n");
			scanf("%i %i %i", &primTermo, &quanTermo, &razao);
			printf("%i ", primTermo);
			while(i < quanTermo - 1){
				primTermo = primTermo + razao;
				printf("%i ", primTermo);
				i++;
			}
			printf("\n");
			printf("Digite 1 para PA, digite 2 para PG e digite 3 para sair: ");	
		}
		else if(opcao == 2){
			printf("Informe o primeiro termo, a quantidade de termos e a razao de progressao: \n");
			scanf("%i %i %i", &primTermo, &quanTermo, &razao);
			printf("%i ", primTermo);
			while(i < quanTermo - 1){
				primTermo = primTermo * razao;
				printf("%i ", primTermo);
				i++;
			}
			printf("\n");
			printf("Digite 1 para PA, digite 2 para PG e digite 3 para sair: ");
		}
		else if(opcao == 3){
			printf("Saindo do programa\n");
		}
		else{
			printf("Codigo invalido\n");
		}	
	}while(opcao != 3);
		
	system("pause");
	return 0;
}
