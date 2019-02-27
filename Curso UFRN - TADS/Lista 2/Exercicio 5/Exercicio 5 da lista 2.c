#include <stdio.h>
#include <stdlib.h>

int main(){
	int anoNascimento, idade, anoAtual;
	printf("Digite qual sera sua idade ao final desse ano: \n");
	scanf("%i", &idade);
	printf("Digite o ano atual: \n");
	scanf("%i", &anoAtual);
	anoNascimento = anoAtual - idade;
	printf("Seu ano de nascimento e %i\n", anoNascimento);
	system("pause");
	return 0;
}
