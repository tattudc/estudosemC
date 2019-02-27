#include <stdio.h>
#include <stdlib.h>

int main(){
	float num1, num2, num3, num4, media;
	printf("Digite um numero: \n");
	scanf("%f", &num1);
	printf("Digite segundo numero: \n");
	scanf("%f", &num2);
	printf("Digite terceiro numero: \n");
	scanf("%f", &num3);
	printf("Digite quarto numero: \n");
	scanf("%f", &num4);
	media = (num1 + num2 + num3 + num4) / 4;
	printf("A media aritimetica de %f, %f, %f, %f e igual a %f\n", num1, num2, num3, num4, media);
	system("pause");
	return 0;
}
