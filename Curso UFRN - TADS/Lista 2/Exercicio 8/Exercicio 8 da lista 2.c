#include <stdio.h>
#include <stdlib.h>

int main(){
	float celsius, fahre;
	printf("Digite a temperatura em Celcius: \n");
	scanf("%f", &celsius);
	fahre = celsius * (9.0 / 5.0) + 32;
	printf("A temperatura em Celsius e %.2f que convertido fica %.2f fahrenheit\n", celsius, fahre);
	system("pause");
	return 0;
}
