#include <stdio.h>
#include <stdlib.h>


int main(){
    float vetorA[15], vetorB[5], media;
    int i, j;

    //Entrada de dados
    for(i = 0; i <15; i++){
        printf("Digite um numero real: \n");
        scanf("%f", &vetorA[i]);
    }
        printf("\n");
        i = 0;
    for(j = 0; j < 5; j++){
        media = (vetorA[i] + vetorA[i+1] + vetorA[i+2]) / 3;
        vetorB[j] = media;
        i = i + 3;
    }

    //Saida de dados
        for(i = 0; i < 15; i++){
        printf("%.0f ", vetorA[i]);
    }
    printf("\n");
        for(i = 0; i < 5; i++){
        printf("%.0f ", vetorB[i]);
    }


    return 0;
}

/* Faça um programa que leia do teclado os valores de vetor A 15 elementos
reais, crie um vetor B, de 5 elementos, que receba em cada posição a média de
3 elementos consecutivos do vetor A

Exemplo:
A = {1, 2, 3, 2, 2, 2, 5, 7, 9, 2, 4, 6, 3, 5, 7} (entrada lida)
B = {2, 2, 7, 4, 5} (saída)
 */
