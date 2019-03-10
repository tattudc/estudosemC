#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    float soma, subtracao, multip, divisao, modulo;
    printf("Digite dois numeros\n");
    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);
    soma = num1 + num2;
    subtracao = num1 - num2;
    multip = num1 * num2;
    divisao = num1 / num2;
    modulo = num1 % num2;
    printf("---------------------------------------------------------\n");
    printf("O primeiro numero e %d e o segundo e %d\n", num1, num2);
    printf("A soma e igual a %.2f\n", soma);
    printf("A subtracao e igual a %.2f\n", subtracao);
    printf("A multiplicacao e igual a %.2f\n", multip);
    printf("A divisao e igual a %.2f\n", divisao);
    printf("O modulo e igual a %.2f\n", modulo);


    return 0;
}
