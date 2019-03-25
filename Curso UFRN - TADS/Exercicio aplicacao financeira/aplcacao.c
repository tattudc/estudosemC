#include <stdio.h>
#include <stdlib.h>

int main(){
	float x = 100, y = 200;
	int mes;
	
	do{
		mes++;
		x = x + x * 0.05;
		y = y + y * 0.03;
		printf("x = %.2f e y = %.2f\n", x, y);
	}while(x <= y);
	
	printf("A aplicacao x ficou %.2f e a y ficou %.2f depois de %d meses\n\n", x, y, mes);
	
	system("pause");
	return 0;
}
