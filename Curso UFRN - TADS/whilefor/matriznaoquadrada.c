#include <stdio.h>

int main(){
	int tamL, tamC, num = 1;
	
	printf("Digite quantas linhas e quantas colunas\n");
	scanf("%i %i", &tamL, &tamC);
	
	for(int i = 0; i < tamL; i++){
		for(int j = 0; j < tamC; j++){
			printf("%i ", num++);
		}
		
		printf("\n");
	}
	return 0;
}
