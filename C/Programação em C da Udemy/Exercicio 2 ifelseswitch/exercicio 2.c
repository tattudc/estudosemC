#include <stdio.h>
#include <stdlib.h>
/* 2. Escreva um programa em C que recebe dois n�meros inteiro. O primeiro valor deve ser maior que o segundo.
No final diga se o resto da divis�o do primeiro n�mero pelo segundo � par ou �mpar. Use o operador matem�tico %
(resto da divis�o ou m�dulo) e o teste condicional if.
*/

int main(){
    int num1, num2, resultado;
    printf("Digite o primeiro numero: \n");
    scanf("%i", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%i", &num2);

   while(num1 < num2){
        printf("O primeiro numero deve ser maior que o segundo\n");
        printf("Digite o primeiro numero: \n");
        scanf("%i", &num1);
    }
    resultado = num1 % num2;

    printf("%i\n", resultado);

    if(resultado % 2 == 0)
        printf("Par\n");
    else
        printf("Impar\n");

    system("pause");
    return 0;
}
