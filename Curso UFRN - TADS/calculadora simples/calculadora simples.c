#include <stdio.h>
#include <stdlib.h>

void calc(){
	int escolha;
	printf("\t\t\tInforme a operacao desejada\n");
	printf("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n5 - Sair\n");
	printf("------------------------------------------------------------------------------\n");
	scanf("%i", &escolha);
	if (escolha == 1){
		int num1, num2, result;
		printf("Digite o primeiro numero: \n");
		scanf("%i", &num1);
		printf("Digite o segundo numero: \n");
		scanf("%i", &num2);
		result = num1 + num2;
		printf("A soma de %i + %i e igual a %i\n", num1, num2, result);
	}
	else if (escolha == 2){
		int num1, num2, result;
		printf("Digite o primeiro numero: \n");
		scanf("%i", &num1);
		printf("Digite o segundo numero: \n");
		scanf("%i", &num2);
		result = num1 - num2;
		printf("A subtracao de %i - %i e igual a %i\n", num1, num2, result);
	}
	else if (escolha == 3){
		int num1, num2, result;
		printf("Digite o primeiro numero: \n");
		scanf("%i", &num1);
		printf("Digite o segundo numero: \n");
		scanf("%i", &num2);
		result = num1 * num2;
		printf("A soma de %i * %i e igual a %i\n", num1, num2, result);
	}
	else if (escolha == 4){
		int num1, num2, result;
		printf("Digite o primeiro numero: \n");
		scanf("%i", &num1);
		printf("Digite o segundo numero: \n");
		scanf("%i", &num2);
		result = num1 / num2;
		printf("A divisao de %i / %i e igual a %i\n", num1, num2, result);
	}
	else{
		printf("Adeus\n");
	}
}
int main(){
	printf("------------------------------------------------------------------------------\n");
	calc();
	system("pause");
	return 0;
}
