#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeros[8], i, X, Y, soma = 0;

    printf("Digite 8 numeros inteiros\n");
    for(i = 0; i < 8; i++){
        scanf("%i", &numeros[i]);
    }

    printf("\nDigite dois indices de vetores para soma-los\n");
    scanf("%i %i", &X, &Y);
    soma = soma + numeros[X] + numeros[Y];

    printf("\nOs numeros digitados foram: ");
    for(i = 0; i < 8; i++){
        printf("%i ", numeros[i]);
    }
    printf("\n");
    printf("A soma dos numeros %i e %i e igual a %i\n", numeros[X], numeros[Y], soma);

    system("pause");
    return 0;
}
/* Fa�a um programa que leia um vetor de 8 posi��es. Em seguida leia 2 valores
de X e Y quaisquer correspondentes a duas posi��es do seu vetor, seu vetor dever� exibir a soma dos
valores encontrados nas respectivas posi��es X e Y  */
