#include <stdio.h>
#include <stdlib.h>

int main(){
	float valorReal, valorDolar;
	printf("Quantos reais voce tem? \n");
	scanf("%f", &valorReal);
	valorDolar = valorReal * 0.27;
	printf("Seus %.2f reais valem %.2f dolares\n", valorReal, valorDolar);
	system("pause");
	return 0;
}
