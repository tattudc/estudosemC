#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(){
    int vetNotas[TAM], i, menor, indiceMenor;

    for(i = 0; i < TAM; i++){
        printf("Informe a sua nota: ");
        scanf("%i", &vetNotas[i]);
    }

    indiceMenor = 0;
    for(i = 1; i < TAM; i++){
        if(vetNotas[i] < vetNotas[indiceMenor]){
            indiceMenor = i;
        }
    }
    printf("O menor elemento e igual a %i, na posicao %i\n", vetNotas[indiceMenor], indiceMenor);

    system("pause");
    return 0;
}
