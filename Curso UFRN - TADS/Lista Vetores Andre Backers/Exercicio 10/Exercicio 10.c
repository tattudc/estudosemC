#include <stdio.h>
#include <stdlib.h>

int main(){
    int A[100] = {}, i, cont = 0;

    //Lendo A
    i = 0;
    while(cont < 100){
        if(i % 7 == 0){
        //ignora
            i++;
        }
        else{
            A[cont] = i;
            i++;
            cont++;
        }
    }
    printf("\n");
    printf("Vetor A e: ");
    for(i = 0; i < 100; i++){
        printf("%i ", A[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
/* Faça um programa que preencha um vetor de tamanho 100 com os primeiros numeros naturais que não são
multiplos de 7, ao final imprima esse vetor na tela */
