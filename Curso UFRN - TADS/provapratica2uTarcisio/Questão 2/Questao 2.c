#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j, tam, soma;
	
	printf("Digite o tamanho da sua matriz quadrada:\n");
	scanf("%i", &tam);
	int matriz[tam][tam];
	
	printf("Digite os elementos da sua matriz:\n");
	for(i = 0; i < tam; i++){
		for(j = 0; j < tam; j++){
			scanf("%i", &matriz[i][j]);
		}
	}
	printf("\nA sua matriz foi:\n");
	for(i = 0; i < tam; i++){
		for(j = 0; j < tam; j++){
			printf("%i ", matriz[i][j]);
			//Diagonal principal
			if(i == j){
				soma = soma + matriz[i][j];
			}
			//Diagonal Secundária
			else if((i == 0 && j == tam - 1) || (i == tam - 1 && j == 0)){
				soma = soma + matriz[i][j];
			}
		}
		printf("\n");
	}
	
	printf("A soma das diagonais e igual a: %i\n", soma);
	
	
	system("pause");
	return 0;
}

/* 
2.Desenvolva um algoritmo usando a linguagem de programação C que defina uma matriz quadrada de números inteiros de tamanho 
informado pelo usuário e some todos os elementos das diagonais (principal e secundária), mostrando na tela.
Dica: Atenção para não somar um mesmo elemento duas vezes, como no caso de uma matriz 3x3, onde o elemento da posição [1][1] 
participa da diagonal principal e da secundária, conforme o exemplo abaixo.

*/
