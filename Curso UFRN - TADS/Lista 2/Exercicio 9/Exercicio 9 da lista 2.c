#include <stdio.h>
#include <stdlib.h>

int main(){
	float pi = 3.141592, g1, r1;
	printf("Digite o valor do angulo em graus: \n");
	scanf("%f", &g1);
	r1 = g1 * (pi /180);
	printf("O angulo %.2f em radianos fica %.2f\n", g1, r1);
	system("pause");
	return 0;
}
