#include <stdio.h>
#include <stdlib.h>

void telaInicial();
struct personagem{
  char personName[50];
  int forca, dex, vita, PA, PD, PV, XP, NV;
};

int main(){
int menu, pntsdistri = 5, distri, distriEscol;
struct personagem person;

do{
	telaInicial();
	printf("Digite 1 para Novo Jogo\nDigite 2 para load game\nDigite 3 para sair\n");
	scanf("%i", &menu);
	
	if(menu == 1){
		//Código Jogo
		system("cls");
		printf("Bem vindo ao URBAN DEAD\nDigite o nome do seu personagem\n");
    setbuf(stdin, NULL);
		fgets(person.personName, 50, stdin);
		printf("Seu nome e %s, confere?\n", person.personName);
    printf("Vamos distribuir os pontos do seu char\nVoce tem 5 pontos para distribuir entre 3 atributos\nForca, Dextreza e Vitalidade\n");
    person.forca = 0;
    person.dex = 0;
    person.vita = 0;
    do{
      printf("Quer distribuir quantos pontos?\n");
      scanf("%i", &distri);
      pntsdistri = pntsdistri - distri;
      printf("Em qual atributo?\n1 - Forca\n2 - Dextreza\n3 - Vitalidade\n");
      scanf("%i", &distriEscol);
      if(distriEscol == 1){
        person.forca = person.forca + distri;
      }
      else if(distriEscol == 2){
        person.dex = person.dex + distri;
      }
      else if(distriEscol == 3){
        person.vita = person.vita + distri;
      }
      else{
        printf("Escolha incorreta\nDigite uma alternativa válida\n");
        scanf("%i", &distriEscol);
      }
    }while(pntsdistri != 0);
    person.PA = person.forca + person.dex;
    person.PD = person.dex + person.vita;
    person.PV = person.vita * 5;
    person.NV = 1;
    person.XP = 0;
    printf("Nome: %s; Nivel = %i; XP = %i\n", person.personName, person.NV, person.XP);
    printf("Forca: %i; Dex = %i; Vita = %i\nPA = %i; PD = %i; PV = %i\n", person.forca, person.dex, person.vita, person.PA, person.PD, person.PV);
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

void telaInicial(){
  printf("----------------------------------------------------------\n");
  printf("----------------------URBANDEAD--------------------------\n");
  printf("----------------------------------------------------------\n");
};
