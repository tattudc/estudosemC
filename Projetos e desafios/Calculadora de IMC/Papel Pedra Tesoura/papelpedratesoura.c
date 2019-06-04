#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void chamadaTela();
void regrasJogo();
void delay(int number_of_seconds);

struct jogadores{
  char nome[50];
  int pontosPart;
};

int main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    //DECLARAÇÃO DE VARIÁVEIS
    int inicioJogo, i, escolhaJogador, escolhaIa, pontosJogador[5];
    struct jogadores jogador;
    //INICIO JOGO
    do{
    chamadaTela();
    printf("Bem vindo ao jogo! Selecione a opção desejada:\n1 - NOVO JOGO\n2 - RANKING\n3 - REGRAS\n4 - SAIR\n");
    scanf("%d", &inicioJogo);

    //INCIIO DE JOGO
    if(inicioJogo == 1){
        printf("Olá! Digite o nome do jogador: \n");
        setbuf(stdin, NULL);
        fgets(jogador.nome, 50, stdin);
        jogador.pontosPart = 0;
        for(i = 0; i < 10; i++){
            printf("Escolha 1 para Pedra, 2 para Papel, 3 para Tesoura, 4 para Lagarto e 5 para Spock\n");
            scanf("%d", &escolhaJogador);
            escolhaIa = rand()% 5 + 1;
            if(escolhaJogador == 1 || escolhaJogador == 2 || escolhaJogador == 3 || escolhaJogador == 4 || escolhaJogador == 5){
				if(escolhaJogador == escolhaIa){
                	printf("Jogador escolheu %d e IA escolheu %d\n", escolhaJogador, escolhaIa);
                	printf("Jogo empatado, 1 ponto!\n\n");
                	jogador.pontosPart = jogador.pontosPart + 1;
            	}
	            else{
	                if(escolhaJogador == 1 && escolhaIa == 2){
	                    printf("Jogador escolheu %d e IA escolheu %d\n", escolhaJogador, escolhaIa);
	                    printf("IA ganhou, 0 ponto!\n\n");
	                }
                else if(escolhaJogador == 1 && escolhaIa == 3){
                    printf("Jogador escolheu %d e IA escolheu %d\n", escolhaJogador, escolhaIa);
                    printf("Vitória jogador, 3 ponto!\n\n");
                    jogador.pontosPart = jogador.pontosPart + 3;
                }
                else if(escolhaJogador == 1 && escolhaIa == 4){
                    printf("Jogador escolheu %d e IA escolheu %d\n", escolhaJogador, escolhaIa);
                    printf("Vitória jogador, 3 ponto!\n\n");
                    jogador.pontosPart = jogador.pontosPart + 3;
                }
                else if(escolhaJogador == 1 && escolhaIa == 5){
                    	printf("Jogador escolheu %d e IA escolheu %d\n", escolhaJogador, escolhaIa);
	                    printf("IA ganhou, 0 ponto!\n\n");
                }
                else if(escolhaJogador == 2 && escolhaIa == 1){
                    printf("Jogador escolheu %d e IA escolheu %d\n", escolhaJogador, escolhaIa);
                    printf("Vitória jogador, 3 ponto!\n\n");
                    jogador.pontosPart = jogador.pontosPart + 3;
                }
                else if(escolhaJogador == 2 && escolhaIa == 3){
                    printf("Jogador escolheu %d e IA escolheu %d\n", escolhaJogador, escolhaIa);
                    printf("IA ganhou, 0 ponto!\n\n");
                }
                else if(escolhaJogador == 2 && escolhaIa == 4){
                    printf("Jogador escolheu %d e IA escolheu %d\n", escolhaJogador, escolhaIa);
                    printf("IA ganhou, 0 ponto!\n\n");
                }
                else if(escolhaJogador == 2 && escolhaIa == 5){
                    printf("Jogador escolheu %d e IA escolheu %d\n", escolhaJogador, escolhaIa);
                    printf("Vitória jogador, 3 ponto!\n\n");
                    jogador.pontosPart = jogador.pontosPart + 3;
                }
                else if(escolhaJogador == 3 && escolhaIa == 1){
                    printf("Jogador escolheu %d e IA escolheu %d\n", escolhaJogador, escolhaIa);
                    printf("IA ganhour, 0 ponto!\n\n");
                }
                else if(escolhaJogador == 3 && escolhaIa == 2){
                    printf("Jogador escolheu %d e IA escolheu %d\n", escolhaJogador, escolhaIa);
                    printf("Vitória jogador, 3 ponto!\n\n");
                    jogador.pontosPart = jogador.pontosPart + 3;
                }
                else if(escolhaJogador == 3 && escolhaIa == 4){
                    printf("Jogador escolheu %d e IA escolheu %d\n", escolhaJogador, escolhaIa);
                    printf("Vitória jogador, 3 ponto!\n\n");
                    jogador.pontosPart = jogador.pontosPart + 3;
                }
                else if(escolhaJogador == 3 && escolhaIa == 5){
                    printf("Jogador escolheu %d e IA escolheu %d\n", escolhaJogador, escolhaIa);
                    printf("IA ganhour, 0 ponto!\n\n");
                }
                else if(escolhaJogador == 4 && escolhaIa == 1){
                    printf("Jogador escolheu %d e IA escolheu %d\n", escolhaJogador, escolhaIa);
                    printf("IA ganhour, 0 ponto!\n\n");
                }
                else if(escolhaJogador == 4 && escolhaIa == 2){
                    printf("Jogador escolheu %d e IA escolheu %d\n", escolhaJogador, escolhaIa);
                    printf("Vitória jogador, 3 ponto!\n\n");
                    jogador.pontosPart = jogador.pontosPart + 3;
                }
                else if(escolhaJogador == 4 && escolhaIa == 3){
                    printf("Jogador escolheu %d e IA escolheu %d\n", escolhaJogador, escolhaIa);
                    printf("IA ganhour, 0 ponto!\n\n");
                }
                else if(escolhaJogador == 4 && escolhaIa == 5){
                    printf("Jogador escolheu %d e IA escolheu %d\n", escolhaJogador, escolhaIa);
                    printf("Vitória jogador, 3 ponto!\n\n");
                    jogador.pontosPart = jogador.pontosPart + 3;
                }
                else if(escolhaJogador == 5 && escolhaIa == 2){
                    printf("Jogador escolheu %d e IA escolheu %d\n", escolhaJogador, escolhaIa);
                    printf("IA ganhour, 0 ponto!\n\n");
                }
                else if(escolhaJogador == 5 && escolhaIa == 1){
                    printf("Jogador escolheu %d e IA escolheu %d\n", escolhaJogador, escolhaIa);
                    printf("Vitória jogador, 3 ponto!\n\n");
                    jogador.pontosPart = jogador.pontosPart + 3;
                }
                else if(escolhaJogador == 5 && escolhaIa == 4){
                    printf("Jogador escolheu %d e IA escolheu %d\n", escolhaJogador, escolhaIa);
                    printf("IA ganhour, 0 ponto!\n\n");
                }
                else if(escolhaJogador == 5 && escolhaIa == 3){
                    printf("Jogador escolheu %d e IA escolheu %d\n", escolhaJogador, escolhaIa);
                    printf("Vitória jogador, 3 ponto!\n\n");
                    jogador.pontosPart = jogador.pontosPart + 3;
                }
            }
         }
         	else{
         		printf("Escolha errada! Vitória do IA\n0 pontos!\n");
			 }
       }
        system("cls");
        printf("O jogador %s fez %d pontos\n", jogador.nome, jogador.pontosPart);
    	delay(10);
    	system("cls");
	}
    //RANKING
    else if(inicioJogo == 2){

    }
    //REGRAS
    else if(inicioJogo == 3){
    system("cls");
    regrasJogo();
    }
    //SAIR DO JOGO
    else if(inicioJogo == 4){
        printf("Saindo do jogo\n");
    }
    //DIGITO ERRADO
    else{
        printf("Opção inválida\n");
    }

    }while(inicioJogo != 4);

    system("pause");
    return 0;
}
void chamadaTela(){
    printf("*********************************************************************************\n");
    printf("********************PAPEL*PEDRA*TESOURA*SPOCK*LIZARD*****************************\n");
    printf("*********************************************************************************\n");
};
void regrasJogo(){
	printf("Jogo baseado na série de BIG BANG THEORY, onde a diferença do jogo tradicional é o fato de ter mais duas mãos\nSão elas: SPOCK e LIZARD\n");
    	printf("Para se jogar Pedra, Papel, Tesoura, Spock e Lizard clica-se em NOVO JOGO e será iniciado uma rodada com 10 jogadas\n");
    	printf("O jogador deve escolher entre: Pedra = 1, Papel = 2, Tesoura = 3, Spock = 4 e Lizard = 5\nFeita a sua escolha o IA escolherá a dele\n");
    	printf("Após as escolhas será decidido entre vitória, empate ou derrota. Lembrando que:\n");
    	printf("PEDRA ganha de TESOURA e LAGARTO mas perde para SPOCK E PAPEL\nPAPEL ganha de PEDRA e SPOCK mas perde para TESOURA e LAGARTO\n");
    	printf("TESOURA ganha de PAPEL e LAGARTO mas perde para SPOCK e PEDRA\nSPOCK ganha de TESOURA e PEDRA mas perde de PAPEL e LAGARTO\n");
    	printf("LAGARTO ganha de PAPEL E SPOCK mas perde de TESOURA e PEDRA\n");
    	printf("Decidido o vencedor, perdedor ou empate o ranking subirá de acordo com o resultado, sendo que:\n");
    	printf("Vencedor soma 3 pontos no ranking, empate soma 1 ponto no ranking e o perdedor não ganha ponto\n");
    	delay(30);
    	system("cls");
};

void delay(int number_of_seconds) {
    int milli_seconds = 1000 * number_of_seconds;
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds);
};

/*
JOGO: PAPEL - PEDRA - TESOURA - SPOCK - LIZARD
ALUNOS: TARCISIO DANTAS CÂMARA
CRIADO EM 01 DE MAIO DE 2019
MODIFICADO EM 04 DE JUNHO DE 2019
*/
