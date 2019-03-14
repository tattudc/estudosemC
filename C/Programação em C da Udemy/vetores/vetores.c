#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(){
    int vetNotas[TAM], media = 0;
    int i;

    for(i = 0; i < TAM; i++){
    printf("Informe a sua nota: \n");
    scanf("%i", &vetNotas[i]);
    }

    for(i = 0; i < TAM; i++){
    printf("%i\t", vetNotas[i]);
    }

    system("pause");
    return 0;
}
