#include <stdio.h>
#include <stdlib.h>
/*2.	Fa�a um programa para verificar se
determinado n�mero inteiro lido � divis�vel por 3 ou 5, mas n�o simultaneamente pelos dois.*/

int main(){
    int num;
    printf("Digite um numero inteiro: \n");
    scanf("%i", &num);
    if(num % 3 == 0 && num % 5 == 0)
        printf("Invalido\n");
    else if(num % 3 == 0 && num % 5 != 0)
        printf("Valido\n");
    else if(num % 3 != 0 && num % 5 == 0)
        printf("Valido\n");
    else
        printf("Nao e divisivel por 3 e 5\n");

    system("pause");
    return 0;
}
