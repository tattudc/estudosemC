#include  <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char frase[100];
int  cont;

//Inserindo dados
printf("Digite uma Frase: \n");
fgets(frase, 100, stdin);

//Comparando
	for(int i = 0; i < strlen(frase); i++){
		if((strcmp(frase, " ")) == 1)
			cont++;
		if((strcmp(frase, "\0")) == 1)
			cont++;
		}
		
printf("A frase foi: %s\n", frase);
printf("A quantidade de palavras na frase: %i\n", cont);

system("pause");
return 0;
}
