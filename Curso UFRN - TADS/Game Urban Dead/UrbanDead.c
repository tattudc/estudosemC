#include <stdio.h>
#include <stdlib.h>

int main(){
int menu, personAtr[3];
char personName[10];

do{
	printf("----------------------------------------------------------\n");
	printf("----------------------URBAN DEAD--------------------------\n");
	printf("----------------------------------------------------------\n");
	printf("Digite 1 para Novo Jogo\nDigite 2 para load game\nDigite 3 para sair\n");
	scanf("%i", &menu);
	
	if(menu == 1){
		//Código Jogo
		system("cls");
		printf("Bem vindo ao URBAN DEAD\nDigite o nome do seu personagem\n");
		scanf("%s", &personName);
		printf("Seu nome e %s, confere?\n", personName);
	}
	else if(menu == 2){
		//Load dos chars do BD
		system("cls");
		printf("Qual o personagem que voce quer carregar? \n");
		printf("Digite 1 para char 1\nDigite 2 para char 2\nDigite 3 para char 3\n");
	}
	else if(menu == 3){
		printf("Saindo do jogo\n");
	}
	else{
		printf("Comando invalido\n");
	}
	
}while(menu != 3);

system("pause");
return 0;
}
