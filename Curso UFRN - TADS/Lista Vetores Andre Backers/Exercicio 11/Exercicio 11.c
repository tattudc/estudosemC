#include <stdio.h>
#include <stdlib.h>

int main(){
    int A[20], B[20], i;

    //Lendo A e inserindo em B
    printf("Digite 20 numeros inteiros e descubra os seus quadrados\n");
    for(i = 0; i < 20; i++){
        scanf("%i", &A[i]);
        B[i] = A[i] * A[i];
    }

    printf("\n");
    //Printando A e B
    printf("Vetor A e: \n");
    for(i = 0; i < 20; i++){
        printf("%i ", A[i]);
    }
    printf("\n");

    printf("E o quadrado de A e igual ao vetor B: \n");
    for(i = 0; i < 20; i++){
        printf("%i ", B[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}
/* Leia um conjunto de numeros reais armazenados em um vetor. Em seguida calcule o quadrado de cada elemento
desse vetor armazenando o resultado desse calculo em outro vetor. Os conjuntos tem no máximo 20 elementos cada
Imprima os dois conjuntos */
