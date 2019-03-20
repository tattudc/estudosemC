#include <stdio.h>
#include <stdlib.h>

int main(){
	int X;
	double Y, consumo;
	scanf("%i", &X);
	scanf("%lf", &Y);
	consumo = X / Y;
	printf("%.3lf km/l\n", consumo);
	system("pause");
	return 0;
}
