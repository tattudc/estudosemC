#include <stdio.h>
#include <stdlib.h>
//FALTA CONCLUIR!!!
int main(){
    int A[10] = {}, B[10], i, j;

    //Lendo A
   printf("Digite 10 numeros inteiros\n");
    for(i = 0; i < 10; i++){
        scanf("%i", &A[i]);

        for(j = 0; j < 10; j++){
            if(A[i] == A[j]){
                B[i] = A[i];
            }
        }
    }


    printf("\n");
    printf("Vetor A e: ");
    for(i = 0; i < 10; i++){
        printf("%i ", A[i]);
    }
    printf("\n");
    printf("Os numeros repetidos sao: ");
    for(i = 0; i < 10; i++){
        printf("%i ", B[i]);
    }

    system("pause");
    return 0;
}
/* Escreva um vetor de 10 posições, verifique se existem numeros iguais e imprima na tela */
