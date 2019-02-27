#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float ladoA, ladoB, hipo;
    printf("Diga o lado A do triangulo: \n");
    scanf("%f", &ladoA);
    printf("Diga o lado B do triangulo: \n");
    scanf("%f", &ladoB);
    hipo = sqrt((pow(ladoA, 2) + pow(ladoB, 2)));
    printf("Os lados sao %.2f e %.2f e sua hipotenusa e %.2f", ladoA, ladoB, hipo);
    return 0;
}
