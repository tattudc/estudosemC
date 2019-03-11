#include <stdio.h>
#include <stdlib.h>
/*Implemente um algoritmo que receba um número e diga se este número está
no intervalo entre 100 e 200. */

int main(){
    int num1;

    printf("Digite um numero inteiro: \n");
    scanf("%i", &num1);

    if(num1 >= 100 && num1 <= 200)
        printf("%i esta no intervalo de 100 a 200\n", num1);
    else
        printf("%i esta fora do intervalo de 100 a 200\n", num1);

    system("pause");
    return 0;
}
