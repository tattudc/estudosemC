#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

int main(){
    float raio, areaCirc;
    printf("Digite o raio em cm para descobrir a area do circulo: \n");
    scanf("%f", &raio);
    areaCirc = PI * pow(raio, 2);
    printf("O raio foi de %.2f e a area do circulo e de %.2f cm2\n", raio, areaCirc);
    system("pause");
    return 0;
}
