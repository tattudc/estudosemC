#include <stdio.h>
#include <stdlib.h>

int main(){
	float numero, quintaParte;
	printf("Digite um numero: \n");
	scanf("%f", &numero);
	quintaParte = numero * 1/5;
	printf("O numero digitado foi %f e a quinta parte desse numero e %f\n", numero, quintaParte);	
	system("pause");
	return 0;
}
