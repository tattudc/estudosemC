#include <stdio.h>
#include <stdlib.h>
/* Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro
e cresce 3 centímetros por ano. Construa um algoritmo que calcule e escreva
quantos anos seriam necessários para que Zé ficasse maior que Chico*/

int main(){
	float altChico = 1.50, altZe = 1.10;
	int anos;
	
	while(altChico > altZe){
		altChico = altChico + 0.02;
		altZe = altZe + 0.03;
		anos++;
	}
	printf("Em %i anos a altura de Chico seria %.2f e a de Ze seria %.2f\n", anos, altChico, altZe);
	system("pause");
	return 0;
}
