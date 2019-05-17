#include <stdio.h>
#include <stdlib.h>

int main(){
    float numeros[5], media = 0;
    int i;

    printf("Digite 5 numeros inteiros\n");
    for(i = 0; i < 5; i++){
        scanf("%f", &numeros[i]);
        media = media + numeros[i];
    }
    media = media / 5;

    printf("\nOs numeros digitados foram: ");
    for(i = 0; i < 5; i++){
        printf("%.2f ", numeros[i]);
    }
    printf("\n");
    printf("A media dos numeros foi %.2f\n", media);

    system("pause");
    return 0;
}
/* Crie um programa que leia 5 valores e mostre a sua média  */
