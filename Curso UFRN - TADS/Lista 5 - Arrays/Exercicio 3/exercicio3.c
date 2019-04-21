#include <stdio.h>
#include <stdlib.h>

int main(){
    float vetorA[5], maior1 = 0, maior2 = 0;
    int i;

    for(i = 0; i < 5; i++){
        printf("Entre com um numero real: ");
        scanf("%f", &vetorA[i]);

        if(vetorA[i] > maior1){
            maior1 = vetorA[i];
        }
        else if(vetorA[i] > maior2 && vetorA[i] != maior1){
            maior2 = vetorA[i];
        }
    }
    printf("Os dois numeros maiores da sequencia sao %.0f e %.0f", maior1, maior2);

    return 0;
}
/* Faça um programa que leia 5 números reais e os armazene em um vetor A. A
saída do programa deve ser o maior e o segundo maior elemento do vetor. */
