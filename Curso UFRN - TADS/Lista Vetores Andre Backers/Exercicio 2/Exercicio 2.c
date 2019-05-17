#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeros[6], i, j;

    printf("Digite 6 numeros inteiros\n");
    for(i = 0; i < 6; i++){
        scanf("%i", &numeros[i]);
    }

    printf("\nOs numeros digitados foram: ");
    for(i = 0; i < 6; i++){
        printf("%i ", numeros[i]);
    }
    printf("\n");

    printf("Os numeros digitados na ordem inversa foram: ");
    for(j = 5; j >= 0; j--){
        printf("%d ", numeros[j]);
    }
    printf("\n");


    system("pause");
    return 0;
}
/* Crie um programa que leia 6 valores inteiros e depois coloque-os na ordem inversa */
