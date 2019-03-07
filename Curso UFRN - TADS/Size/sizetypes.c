#include <stdio.h>

int main() {

	int z1 = 0x2F; // inicializa z1 com número hexa 2F
	int z2 = 0x1A;
	int z3 = 0112; // número octal 112

	char x = 'a';
	int y = -100;
	short z = 25;
	float pi = 3.1416;
	double area = 1.456789;
	long u = 12345;
	unsigned char q = 30;
	float b1 = 01101.11001;

	printf("b1: %f\n", b1);

	printf("x (DEC): %d, x (HEX): %X\n", x, x);
	printf("x (OCT): %o, x (CHAR): %c\n", x, x-32);


	return 0;
}
