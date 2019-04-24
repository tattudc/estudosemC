#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int contador[6] = {}, num, i;
	
	//Entrada de dados
	for(i = 0; i < 10; i++){
		num = rand()%6 + 1;
		printf("\nDADO: %d\n", num);
		contador[num - 1]++;
	}
	printf("\nFACE\tREPETICOES\n");
	for(i = 0; i < 6; i++){
		printf("%d > %d\n",i+1, contador[i]);
	}
		
	
    return 0;
}

/* Faça um programa que receba o número sorteado por um dado em 10 jogadas,
mostre os números dos dados e a frequência com que apareceram. */
