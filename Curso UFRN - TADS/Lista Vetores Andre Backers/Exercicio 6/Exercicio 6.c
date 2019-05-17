#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeros[10], i, cont = 0;

    printf("Digite 10 numeros inteiros\n");
    for(i = 0; i < 10; i++){
        scanf("%i", &numeros[i]);
        if(numeros[i]%2 == 0){
            cont++;
        }
    }
    printf("\nForam digitados %i numeros pares nesse vetor\n", cont);

    system("pause");
    return 0;
}
/* Escreva do teclado um vetor de 10 posições, em seguida diga quantos numeros pares foram digitados nesse vetor  */
