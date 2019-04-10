#include <stdio.h>
#define TAM  4

int main(){
	float nota, soma = 0, i = 0;
	
	for(; i < TAM ; i++){
		printf("Informe a nota da unidade %.0f\n", i + 1);
		scanf("%f", &nota);
		soma += nota;
	}
	printf("A media do aluno foi %.2f\n", soma/TAM);
	
	return 0;
}
