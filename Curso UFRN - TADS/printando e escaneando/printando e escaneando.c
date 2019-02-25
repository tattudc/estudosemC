#include <stdio.h>
#include <stdlib.h>

int main(){
	char sexo[10];
	char nome[10];
	int dia, mes, ano;
	float media;
	printf("Digite seu nome\n");
	scanf("%s", &nome);
	printf("Digite o dia do seu nascimento\n");
	scanf("%d", &dia);
	printf("Digite o mes do seu nascimento\n");
	scanf("%d", &mes);
	printf("Digite o ano do seu nascimento\n");
	scanf("%d", &ano);
	printf("Digite o seu sexo\n");
	scanf("%s", &sexo);
	printf("Digite a sua media\n");
	scanf("%f", &media);
	printf("Seu nome e %s, voce nasceu em %d/%d/%d, voce e do sexo %s e sua nota foi %.2f\n", nome, dia, mes, ano, sexo, media);
	system("pause");
	return 0;
}
