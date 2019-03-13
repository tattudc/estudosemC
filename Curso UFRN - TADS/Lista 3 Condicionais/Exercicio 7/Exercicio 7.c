#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Faça um programa que leia três valores inteiros que representam os lados de
um triângulo. Verifique se esses valores formam um triângulo (|b – c| < a < b
+ c) e indique se ele é equilátero (3 lados iguais), escaleno (3 lados diferentes)
ou isósceles (2 lados iguais e 1 diferente). */

int main(){
	int a1, b1, c1, triang;
	
	printf("Digite o primeiro numero: \n");
	scanf("%i", &a1);	
	printf("Digite o segundo numero: \n");
	scanf("%i", &b1);
	printf("Digite o terceiro numero: \n");
	scanf("%i", &c1);
		
	triang = ((fabs(b1 - c1) < a1) && (a1 < (b1 + c1)));
	
	
	if(triang == 1){
		if(a1 == b1 && a1 == c1 && b1 == c1){
			printf("O triangulo e equilatero\n");
		}
		else if(a1 != b1 && a1 != c1 && b1 != c1){
			printf("O triangulo e escaleno\n");
		}
		else{
			printf("O triangulo e isosceles\n");
		}
	}
	else{
		printf("Nao e triangulo\n");
	}
		 
	system("pause");
	return 0;
}
