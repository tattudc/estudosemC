#include <stdio.h>
#include <stdlib.h>
/*Implemente um algoritmo que receba 3 números inteiros e mostre-os em
ordem crescente*/

int main(){
    int num1, num2, num3;

    printf("Digite o primeiro numero: \n");
    scanf("%i", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%i", &num2);
    printf("Digite o terceiro numero: \n");
    scanf("%i", &num3);

    if(num1 > num2 && num1 > num3){
        if(num2 > num3)
            printf("(%i %i %i)\n", num3, num2, num1);
        else
            printf("(%i %i %i)\n", num2, num3, num1);
    }
    else if(num2 > num1 && num2 > num3){
        if(num1 > num3)
            printf("(%i %i %i)\n", num3, num1, num2);
        else
            printf("(%i %i %i)\n", num1, num3, num2);
    }
    else{
        if(num1 > num2)
            printf("(%i %i %i)\n", num2, num1, num3);
        else
            printf("(%i %i %i)\n", num1, num2, num3);
    }

    system("pause");
    return 0;
}
