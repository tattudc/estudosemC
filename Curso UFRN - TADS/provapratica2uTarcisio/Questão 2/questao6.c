#include  <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char frase[100];
int  cont = 1, i;

//Inserindo dados
printf("Digite uma Frase: \n");
gets(frase);

//Comparando
	for(i = 0; i < strlen(frase); i++){
		if(frase[i] == ' ')
			cont++;
	}
printf("A frase foi: %s\n", frase);
printf("A quantidade de palavras na frase: %i\n", cont);

system("pause");
return 0;
}
