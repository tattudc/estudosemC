#include <stdio.h>
#include <stdlib.h>

int main(){
	int y, x = 10;
	y = x++;
	printf("X = %i\n", x);
	printf("Y = %i\n", y);
	system("pause");
	return 0;
}
