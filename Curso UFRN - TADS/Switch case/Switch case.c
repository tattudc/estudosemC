#include <stdio.h>
#include <stdlib.h>

int main(){
	int x, y, z, opcao, media;
	printf("Digite 3 numeros inteiros: \n");
	scanf("%i %i %i", &x, &y, &z);
	printf("Digite o calculo escolhido\n1 - Geometrica\n2 - Ponderada\n3 - Aritmetica\n");
	scanf("%i", &opcao);
	
	switch(opcao){
		case 1:
			media = x * y * z;
			printf("A media geometrica e %i\n", media);
			break;
		case 2:
			media = (x + 2 * y + 3 * z) / 6;
			printf("A media ponderada e %i\n", media);
			break;
		case 3:
			media = (x + y + z) / 3;
			printf("A media aritmetica e %i\n", media);
			break;
		default:
			printf("Escolha invalida\n");
			break;
	}
	
	system("pause");
	return 0;
}
