#include <stdio.h>
#include <stdlib.h>

int main() {
    float peso, altura, imc;
    printf ("Bem vindo a calculadora de IMC\nPor favor digite a sua altura em m; \n");
    scanf("%f", &altura);
    printf ("Agora digite o seu peso: \n");
    scanf ("%f", &peso);
    printf ("-----------------------------\n");
    imc = peso / (altura * altura);
    printf("Voce mede %.2f e pesa %.2f e seu IMC e %.2f\n", altura, peso, imc);
    if(imc <= 18.00)
        printf ("Voce esta abaixo do peso\n");
    else if(imc >= 18.01 && imc <= 24.90)
        printf ("Seu peso esta normal\n");
    else if(imc >= 24.91 && imc <= 29.9)
        printf ("Sobrepeso\n");
    else if(imc >= 29.91 && imc <= 34.9)
        printf ("Obesidade grau I\n");
    else if(imc >= 34.91 && imc <= 40)
        printf ("Obesidade grau II\n");
    else
        printf ("Obesidade grau III\n");
    system("pause");
    return 0;
}