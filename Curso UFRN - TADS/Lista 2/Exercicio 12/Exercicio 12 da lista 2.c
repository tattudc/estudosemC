#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159

int main(){
    float raio, altura, areaCilin;
    printf("Digite o raio em cm para descobrir a area do cilindro: \n");
    scanf("%f", &raio);
    printf("Digite a altura em cm para descobrir a area do cilindro: \n");
    scanf("%f", &altura);
    areaCilin = PI * pow(raio, 2) * altura;
    printf("O raio foi de %.2f, a altura de %.2f e a area do circulo e de %.2f cm2\n", raio, altura, areaCilin);
    system("pause");
    return 0;
}
