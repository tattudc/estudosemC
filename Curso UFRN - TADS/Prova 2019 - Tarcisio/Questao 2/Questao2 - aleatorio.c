#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Escreva uma rotina que gere n�meros aleat�rios entre 5 e 9. Coloque dentro de um la�o para que mostre 20 vezes.*/
int main(){
	srand(time(NULL));
	int ale, i;
	
	while(i < 20){
		ale = rand() % 10;
		if(ale >= 5 && ale <= 9){
			printf("%i\n", ale);
			i++;
		}
		
	};
	
	system("pause");
	return 0;
}
	
