#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Implemente um algoritmo que efetue a leitura de 3 valores numéricos e realize
o cálculo da equação completa de 2º grau, utilizando a fórmula de Bhaskara.
Considere para a solução do problema que para delta < 0 não há solução real e
que a equação do 2º grau é completa quando possui todos os coeficientes
diferentes de 0. */

int main(){
    float num1, num2, num3, delta, x1, x2;

    printf("Para calcular a formula de baskara precisamos dos valores de A, B e C\n");
    printf("Digite o valor de A\n");
    scanf("%f", &num1);
    printf("Digite o valor de B\n");
    scanf("%f", &num2);
    printf("Digite o valor de C\n");
    scanf("%f", &num3);

    delta = num2 * num2 - 4 * num1 * num3;
    x1 = (-num2 + sqrt(delta)) / (2*num1);
    x2 = (-num2 - sqrt(delta)) / (2*num1);

    if(delta < 0){
        printf("Nao ha solucao real. Delta = %.0f\n", delta);
    }
    else{
        printf("O valor de x1: %.2f\n", x1);
        printf("O valor de x2: %.2f\n", x2);
    }

    system("pause");
    return 0;
}
