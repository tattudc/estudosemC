#include <stdio.h>
#include <stdlib.h>

int main(){
    int A[10], B[10], C[10], i;

    //Lendo A
    printf("Digite 10 numeros inteiros para vetor A\n");
    for(i = 0; i < 10; i++){
        scanf("%i", &A[i]);
    }

    //Lendo B
    printf("Digite 10 numeros inteiros para vetor B\n");
    for(i = 0; i < 10; i++){
        scanf("%i", &B[i]);
    }

    //Calculando e Inserindo em C
    for(i = 0; i < 10; i++){
        C[i] = A[i] - B[i];
    }
    printf("\n");
    //Printando C
    printf("Vetor C e: ");
    for(i = 0; i < 10; i++){
        printf("%i ", C[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
/* Faça um programa que receba do usuário, 2 arrays, A e B, com 10 numeros inteiros em cada. Crie um novo array
C calculando C = A - B. Mostre na tela o resultado do Array C */
