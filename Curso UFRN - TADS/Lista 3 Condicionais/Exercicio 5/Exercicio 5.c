#include <stdio.h>
#include <stdlib.h>
/* Faça um programa que receba o sexo e a altura (em metros) de uma pessoa e
calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (onde h é
altura): */

int main(){
    char sexo;
    float altura, pesoIdeal;

    printf("Diga a sua altura em metros: \n");
    scanf("%f", &altura);
    printf("Qual o seu sexo? \n");
    scanf("%s", &sexo);

    if(sexo == 'm' || sexo == 'M'){
            pesoIdeal = (72.7 * altura) - 58;
       printf("Homens que medem %.2f devem pesar %.2f\n", altura, pesoIdeal);
    }
    else if(sexo == 'f' || sexo == 'F'){
        pesoIdeal = (62.1 * altura) - 44.7;
       printf("Mulheres que medem %.2f devem pesar %.2f\n", altura, pesoIdeal);
    }
    else{
        printf("Opcao invalida\n");
    }

    system("pause");
    return 0;
}
