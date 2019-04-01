#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia uma sequência de 10 números inteiros, imprima o maior valor e quantas vezes ele foi lido??*/
int main(){
	int num, num2 = 0, i = 0, maior = 0;
	
	do{
		printf("Digite um numero\n");
		scanf("%i", &num);
		if(num > num2){
			num2 = num;
			maior = 0;
		}
		else{
			maior++;
		}
		
		i++;
	}while(i < 10);
	printf("O maior numero da sequencia e %i\nEle foi o maior %i vezes\n", num2, maior);
	
	system("pause");
	return 0;
}
