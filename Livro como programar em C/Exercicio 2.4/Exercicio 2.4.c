#include <stdio.h>
#include <stdlib.h>
//O programa calculara o produto de 3 numeros inteiros
int main(){
    int x, y, z, resultado;
    printf("Digite 3 numeros inteiros\n");
    scanf("%d %d %d", &x, &y, &z);
    resultado = x * y * z;
    printf("O produto e %d\n", resultado);

    system("pause");
    return 0;
}
