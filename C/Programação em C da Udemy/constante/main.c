#include <stdio.h>
#include <stdlib.h>
#define CONST 100

int main()
{
    int num1;
    printf("Digite o numero: ");
    scanf("%i", &num1);
    printf("O resultado da soma da constante mais numero e: %i", num1 + CONST);
    return 0;
}
