#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeros[6], i;

    printf("Digite 6 numeros inteiros\n");
    for(i = 0; i < 6; i++){
        scanf("%i", &numeros[i]);
    }

    printf("\nOs numeros digitados foram: ");
    for(i = 0; i < 6; i++){
        printf("%i ", numeros[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}
/* Crie um programa que leia seis valores inteiros e em seguida mostre os valores na tela  */
