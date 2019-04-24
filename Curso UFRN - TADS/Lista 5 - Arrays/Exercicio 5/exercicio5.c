#include <stdio.h>
#include <stdlib.h>

int main(){
	int tam, aux, trocado, i;
	//Dizer o tamanho do vetor
	printf("Informe o tamanho do vetor\n");
	scanf("%d", &tam);
	int vetorA[tam];
	
	//Inserir dados no vetor
	printf("Insira os dados do vetor\n");
	for(i = 0; i < tam; i++){
		scanf("%d", &vetorA[i]);
	}
	
	//Leitura vetor
	for(i = 0; i < tam; i++){
		printf("%d ", vetorA[i]);
	}
	printf("\n");
	
	//ordenação
	do{
		trocado = 0; //false
		for(i = 0; i < tam - 1; i++){ //Percorre o vetor do primeiro elemento
			if(vetorA[i] > vetorA[i+1]){ //compara uma posição com a próxima e troca se for maior
				aux = vetorA[i];
				vetorA[i] = vetorA[i+1];
				vetorA[i+1] = aux;
				trocado = 1; //verdadeiro, pois todos os numeros foram trocados
			}
		}
	}while(trocado == 1);
	
	//Leitura depois da ordenação
	for(i = 0; i < tam; i++){
		printf("%d ", vetorA[i]);
	}
	
	return 0;
}
/* Faça um algoritmo que coloque em ordem crescente os valores dentro de um
vetor de tamanho n, definido pelo usuário (Dica: Pesquise algoritmo da bolha). */
