#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
	srand(time(NULL));
	char A[10][10], palSort[10];
	int i, sort = 0;
	
	sort = rand() % 10;
	
	//Inserindo dados
	printf("Insira os itens da lista:\n");
	for(i = 0; i < 10; i++){
		scanf("%s", &A[i][10]);
		
		if(i == sort){
			strcpy(palSort, A);
		}
	}
	
	//Indice do vetor
	printf("O indice foi %i\n", sort);
	printf("Palavra sorteada foi\n%s\n", palSort);
		
	system("pause");
	return 0;
}

/* 
Desenvolva um algoritmo usando a linguagem de programação C que defina um vetor com 10 palavras e sorteie aleatoriamente uma das palavras armazenadas, mostrando na tela. 
Lembrete: Use a função srand(time(NULL)) no início de sua função principal para gerar a semente de aleatoriedade baseada no tempo atual. A função rand() deverá ser ajustada
 para sortear uma das palavras armazenadas. 
As funções acima estão nas bibliotecas stdlib.h e time.h 
*/
