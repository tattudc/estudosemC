#include <stdio.h>
#include <stdlib.h>

int main(){
	char sexo = 'F';
	char nome[] = "Tarcisio";
	int dia = 31;
	float media = 9.5;
	printf("%c e %i e %.2f\n", sexo, dia, media);
	printf("%s\n", nome);
	system("pause");
	return 0;
}
