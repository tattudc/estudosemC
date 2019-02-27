#include <stdio.h>
#include <stdlib.h>

int main(){
	float velKh, velMs;
	printf("Digite quantos km/h o carro esta: \n");
	scanf("%f", &velKh);
	velMs = velKh / 36;
	printf("A velocidade e %.2f km/h que convertido fica %.2f m/s \n", velKh, velMs);
	system("pause");
	return 0;
}
