#include <stdio.h>

//Ler um numero float
//Separar a parte inteira da parte fracionaria
//Exibir suas partes
typedef unsigned int uint;
void decToBin(uint numDec);

int main(){
	float x;
	scanf("%f", &x);
	int inteiro = (int)x;
	float resto = x - inteiro;
	printf("%.2f = %d + %.2f\n", x, inteiro, resto);
	decToBin(inteiro);
	return 0;
}

void decToBin(uint numDec){
	const uint wordCpu = 16;
	int digit[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int i = 0, j;
	while (numDec >= 2){
		digit[i] = numDec % 2;
		numDec = numDec / 2;
		i++;
	}
	digit[i] = 1;
	//lost quocient
	for(j = wordCpu - 1; j >= 0; j--)
		printf("%d", digit[j]);
	putchar('\n');
}
