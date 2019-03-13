#include <stdio.h>
#include <stdlib.h>
/* O IMC – Índice de Massa Corporal é um critério da Organização Mundial de
Saúde para dar uma indicação sobre a condição de peso de uma pessoa adulta.
A fórmula é IMC = peso / ( altura ) 2. Elabore um algoritmo que leia o peso e
a altura de um adulto e mostre sua condição de acordo com a tabela abaixo.
 */
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
