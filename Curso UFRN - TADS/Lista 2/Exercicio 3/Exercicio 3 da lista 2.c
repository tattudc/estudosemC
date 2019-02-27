#include <stdio.h>
#include <stdlib.h>

int main(){
	int num1, num2, num3, soma;
	printf("Digite um numero inteiro: \n");
	scanf("%i", &num1);
	printf("Digite segundo numero inteiro: \n");
	scanf("%i", &num2);
	printf("Digite terceiro numero inteiro: \n");
	scanf("%i", &num3);
	soma = num1 + num2 + num3;
	printf("A soma de %i + %i + %i e igual a %i\n", num1, num2, num3, soma);
	system("pause");
	return 0;
}
