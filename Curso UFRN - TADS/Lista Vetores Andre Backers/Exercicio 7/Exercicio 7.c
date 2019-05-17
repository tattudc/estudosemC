#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeros[10], i, maior, menor;

    printf("Digite 10 numeros inteiros\n");
    for(i = 0; i < 10; i++){
        scanf("%i", &numeros[i]);
        if(numeros[i] > maior){
            maior = numeros[i];
        }
        else if(numeros[i] < menor){
            menor = numeros[i];
        }
    }
    for(i = 0; i < 10; i++){
        printf("%i ", numeros[i]);
    }
    printf("\nO maior numero do vetor e %i e o menor e %i\n", maior, menor);

    system("pause");
    return 0;
}
/* Faça um programa que receba do usuário um vetor X com 10 posições, em seguida deverão ser impressos
o maior e o menor elemento desse vetor */
