#include <stdio.h>
#include <stdlib.h>

int main(){
	struct personagem{
		char nome[50];
		int forca;
		int dex;
		int vig;
	};
	int save, slot;
	char saveChar[4] = {};
	
	
	do{
		printf("Digite nome do char: \n");
		fgets(personagem.nome, 50, stdin);
		printf("Digite for, dex e vig do char: \n");
		scanf("%i %i %i", &personagem.forca, &personagem.dex, &personagem.vig);
		printf("O nome do seu char e: %s", personagem.nome);
		printf("A forca dele e %i, Dextreza e %i e vigor igual a %i\n", personagem.forca, personagem.dex, personagem.vig);
		printf("Voce quer salvar o jogo?\n");
		scanf("%i", &save);
		
		if(save == 1){
			printf("Qual slot?");
			scanf("%i", &slot);
			saveChar[slot] = personagem;
			
		}
	}while(save == 0);
	
	system("pause");
	return 0;
}
