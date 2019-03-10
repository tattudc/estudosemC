#include <stdio.h>
#include <stdlib.h>
/* 1. Faça um programa que peça três números ao usuário e mostre qual o maior e qual o menor.*/

int main(){
    int num1, num2, num3;
    printf("Digite o primeiro numero: \n");
    scanf("%i", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%i", &num2);
    printf("Digite o terceiro numero: \n");
    scanf("%i", &num3);

    if(num1 > num2 && num1 > num3){
        if(num2 > num3){
            printf("O numero %i e o maior e o numero %i e o menor\n", num1, num3);
        }
        else{
            printf("O numero %i e o maior e o numero %i e o menor\n", num1, num2);
        }
    }
    else if(num2 > num1 && num2 > num3){
        if(num1 > num3){
            printf("O numero %i e o maior e o numero %i e o menor\n", num2, num3);
        }
        else{
            printf("O numero %i e o maior e o numero %i e o menor\n", num2, num1);
        }
    }
    else{
        if(num1 > num2){
            printf("O numero %i e o maior e o numero %i e o menor\n", num3, num2);
        }
        else{
            printf("O numero %i e o maior e o numero %i e o menor\n", num3, num1);
        }
    }
    system("pause");
    return 0;
}
