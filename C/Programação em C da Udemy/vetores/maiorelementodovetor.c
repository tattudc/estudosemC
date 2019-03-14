#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(){
    int vetNotas[TAM], i, maior, indiceMaior;

    for(i = 0; i < TAM; i++){
        printf("Informe a sua nota: ");
        scanf("%i", &vetNotas[i]);
    }

    indiceMaior = 0;
    for(i = 1; i < TAM; i++){
        if(vetNotas[i] > vetNotas[indiceMaior]){
            indiceMaior = i;
        }
    }
    printf("Maior e igual a %i, na posicao %i\n", vetNotas[indiceMaior], indiceMaior);

    system("pause");
    return 0;
}
