#include <stdio.h>
#include <stdlib.h>

int main(){
	int num1, ante, suce;
	printf("Digite um numero inteiro: \n");
	scanf("%i", &num1);
	ante = num1 - 1;
	suce = num1 + 1;
	printf("O seu numero escolhido foi %i, o seu antecessor e %i e seu sucessor %i\n", num1, ante, suce);
	system("pause");
	return 0;
}
