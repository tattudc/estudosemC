#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int pessoa, cont = 0, ale = rand() % 10 + 1;
	
	printf("Digite um numero de 0 a 10\n");
	
	do{
		cont++;
		scanf("%i", &pessoa);
		if(pessoa > ale)
			printf("Esta alto\n");
		else if(pessoa < ale)
			printf("Esta baixo\n");
	}
	while(pessoa != ale);
	printf("Voce acertou!\n");
	if(cont == 1){
		printf("UAU! De primeira!\n");
	}
	else if(cont > 1 && cont < 5){
		printf("Acertou miseravel!\n");
	}
	else{
		printf("Foi ralado ne!?\n");
		}
	printf("Voce precisou de %i tentativas\n", cont);
	system("pause");
	return 0;
}
