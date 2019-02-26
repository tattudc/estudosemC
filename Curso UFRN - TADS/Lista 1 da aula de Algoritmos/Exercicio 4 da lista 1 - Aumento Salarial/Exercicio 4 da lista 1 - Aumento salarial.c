#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario, aumento = 1.25, salarAumento;
    printf("Digite o seu salario: \n");
    scanf("%f", &salario);
    printf("Calculando...\n");
    salarAumento = salario * aumento;
    printf("O seu salario e de %.2f, o aumento foi de 25 porcento o que fica no total de %.2f\n", salario, salarAumento);
    return 0;
}
