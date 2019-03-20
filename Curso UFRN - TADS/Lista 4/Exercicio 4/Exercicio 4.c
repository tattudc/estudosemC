#include <stdio.h>
#include <stdlib.h>
/* A prefeitura de Asa Branca est� em elei��es. Apresentaram-se 3 candidatos: JOS�
com o n� 1, MARIA com o n� 2 e JO�O com o n� 3. Cada eleitor marca uma
c�dula com sua op��o, que pode ser o n� de um candidato (1,2,3), voto branco (n�
4) ou voto nulo (n� 5). Preparar um algoritmo que receba e processe os votos at�
que seja digitado 0 para o voto, escrevendo os seguintes dados:

a)o n� de voto de cada uma das 5 op��es;
b)o nome do candidato vencedor (S� considere os 3 candidatos e caso
d� empate, a sa�da deve ser �segundo turno�)*/

int main(){
	int opcao, votos, n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, total = 0;

	do{
		printf("Para votar no: \nJose digite 1\nMaria digite 2\nJoao digite 3\nPara Branco digite 4\nPara anular digite 5\nPara encerrar a eleicao digite 0\n");
		scanf("%i", &opcao);
		printf("Voto computado\n");
		if(opcao != 0){
			total++;	
		}
		switch(opcao){
			case 1:
				n1++;
				break;
			case 2:
				n2++;
				break;
			case 3:
				n3++;
				break;
			case 4:
				n4++;
				break;
			case 5:
				n5++;
				break;
			default:
				printf("OPCAO INVALIDA\n\n");
				break;
		}
	}while(opcao != 0);
	printf("O resultado das eleicoes foi: \nJose %i votos\nMaria %i votos\nJoao %i votos\nBranco %i votos\nNulo %i votos\nTotal de votos %i\n", n1, n2, n3, n4, n5, total);
	
	if(n1 > n2 && n1 > n3)
		printf("Jose ganhou\n");
	else if(n2 > n1 && n2 > n3)
		printf("Maria Ganhou\n");
	else if(n3 > n1 && n3 > n2)
		printf("Joao Ganhou\n");
	else if(n1 == n2)
		printf("Segundo turno entre Jose e Maria\n");
	else if(n1 == n3)
		printf("Segundo turno entre Jose e Joao\n");
	else if(n1 == n2)
		printf("Segundo turno entre Joao e Maria\n");
		
	system("pause");
	return 0;
}
