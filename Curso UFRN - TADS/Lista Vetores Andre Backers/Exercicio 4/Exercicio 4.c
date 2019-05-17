#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeros[6] = {1, 0, 5, -2, -5, 7}, soma = 0;
    int i;

    for(i = 0; i < 6; i++){
        if(i == 0 || i == 1 || i == 5){
         soma = soma + numeros[i];
        }
        if(i == 4){
            numeros[i] = 100;
        }
    }
    printf("A soma dos vetores e de %i: \n", soma);

    printf("\nOs numeros digitados foram: \n");
    for(i = 0; i < 6; i++){
        printf("%i\n", numeros[i]);
    }

    system("pause");
    return 0;
}
/*
Faça um programa que possua um array de nome A e que armazene 6 numeros inteiros
O programa deve executar os seguintes passos
a) Atribuir esses valores pro array: 1, 0, 5, -2, -5, 7
b) Armazenar em uma variavel a soma dos valores nas posições A[0], A[1] e A[5]
do array e mostre essa soma
c) Modifique o array na posição 4, atribuindo a essa posição o valor 100
d) Mostre na tela o valor do array em cada linha
 */
