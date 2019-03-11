#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

int main(){
    float raio, diametro, comprimento, areaCirc;

    printf("Digite o raio em cm para descobrir a area do circulo: \n");
    scanf("%f", &raio);

    diametro = raio * 2;
    comprimento = 2 * PI * raio;
    areaCirc = PI * pow(raio, 2);


    printf("O diametro do circulo e de %.2f cm\n", diametro);
    printf("O comprimento da circuferencia e de %.2f cm\n", comprimento);
    printf("A area do circulo e de %.2f cm2\n", areaCirc);

    system("pause");
    return 0;
}
