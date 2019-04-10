#include <stdio.h>

int main(){
	int tam, i, j;
	
	printf("Informe o tamanho da sua matriz\n");
	scanf("%i", &tam);
		
	for(i = 0; i < tam ; i++){
		for(j = 0; j < tam; j++){
			if(i == j)
				printf("1 ");
			else
				printf("0 ");
		}
		printf("\n");
	}
	return 0;
}
