#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeros[10], i, negativos = 0, soma = 0;

    printf("Digite 10 numeros inteiros\n");
    for(i = 0; i < 10; i++){
        scanf("%i", &numeros[i]);
        if(numeros[i] > 0){
            soma = soma + numeros[i];
        }
        else if(numeros[i] < 0){
            negativos++;
        }
    }
    for(i = 0; i < 10; i++){
        printf("%i ", numeros[i]);
    }
    printf("\nO vetor possui %i numeros negativos\nA soma dos positivos e %i\n", negativos, soma);

    system("pause");
    return 0;
}
/* Faça um programa que preencha 10 numeros reais, em seguida calcule e mostre quantos numeros negativos e a
soma de numeros positivos desse vetor */
