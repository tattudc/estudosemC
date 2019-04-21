#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeros[10];
    int i, cont = 0;

    //Entrada de dados
    for(i = 0; i < 10; i++){
        printf("Digite um numero inteiro na posicao %d\n", i + 1);
        scanf("%i", &numeros[i]);
    };

    printf("\n");
    //Ler o vetor
    for(i = 0; i < 10; i++){
        if(numeros[i] >= 50){
            printf("%d na posicao %d\n", numeros[i], i + 1);
        }
        else{
            cont++;
        }
    }
    if(cont == 10){
            printf("Nao ha nenhum numero acima de 50\n");
    }
    return 0;
}

/* Fa�a um programa que preencha um vetor com 10 n�meros inteiros, calcule e
mostre os n�meros superiores a 50 e suas respectivas posi��es no vetor. O
programa dever� mostrar uma mensagem se n�o existir nenhum n�mero nessa
condi��o*/
