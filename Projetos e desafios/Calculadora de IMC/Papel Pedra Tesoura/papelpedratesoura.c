#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL,"");
    srand(time(NULL));
    //DECLARAÇÃO DE VARIÁVEIS
    int inicioJogo, i, escolhaJogador, escolhaIa, pontosPart, pontosJogador[5];
    char jogador[10];

    //INICIO JOGO
    do{
    chamadaTela();
    printf("Bem vindo ao jogo! Selecione a opção desejada:\n1 - NOVO JOGO\n2 - RANKING\n3 - REGRAS\n4 - SAIR\n");
    scanf("%d", &inicioJogo);

    //INCIIO DE JOGO
    if(inicioJogo == 1){
        printf("Olá! Digite o nome do jogador: \n");
        scanf("%s", &jogador);
        for(i = 0; i < 10; i++){
            printf("Escolha 1 para Pedra, 2 para Papel e 3 para Tesoura\n");
            scanf("%d", &escolhaJogador);
            escolhaIa = rand()% 3 + 1;
            if(escolhaJogador == escolhaIa){
                printf("Jogador escolheu %d e IA escolheu %d\n", escolhaJogador, escolhaIa);
                printf("Jogo empatado, 1 ponto!\n");
                pontosPart = pontosPart + 1;
            }
            else{
                if(escolhaJogador == 1 && escolhaIa == 2){
                    printf("Jogador escolheu %d e IA escolheu %d\n", escolhaJogador, escolhaIa);
                    printf("IA ganhou, 0 ponto!\n");
                }
                else if(escolhaJogador == 1 && escolhaIa == 3){
                    printf("Jogador escolheu %d e IA escolheu %d\n", escolhaJogador, escolhaIa);
                    printf("Vitória jogador, 3 ponto!\n");
                    pontosPart = pontosPart + 3;
                }
                else if(escolhaJogador == 2 && escolhaIa == 1){
                    printf("Jogador escolheu %d e IA escolheu %d\n", escolhaJogador, escolhaIa);
                    printf("Vitória jogador, 3 ponto!\n");
                    pontosPart = pontosPart + 3;
                }
                else if(escolhaJogador == 2 && escolhaIa == 3){
                    printf("Jogador escolheu %d e IA escolheu %d\n", escolhaJogador, escolhaIa);
                    printf("IA ganhou, 0 ponto!\n");
                }
                else if(escolhaJogador == 3 && escolhaIa == 1){
                    printf("Jogador escolheu %d e IA escolheu %d\n", escolhaJogador, escolhaIa);
                    printf("IA ganhour, 0 ponto!\n");
                }
                else if(escolhaJogador == 3 && escolhaIa == 2){
                    printf("Jogador escolheu %d e IA escolheu %d\n", escolhaJogador, escolhaIa);
                    printf("Vitória jogador, 3 ponto!\n");
                    pontosPart = pontosPart + 3;
                }
            }
        }
        printf("O jogador %s fez %d pontos\n", jogador, pontosPart);
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
    printf("************************PAPEL*PEDRA*TESOURA**************************************\n");
    printf("*********************************************************************************\n");
}
void regrasJogo(){
    printf("Para se jogar Pedra, Papel e Tesoura, clica-se em NOVO JOGO e será iniciado uma rodada com 10 jogadas\n");
    printf("O jogador deve escolher entre: Pedra = 1, Papel = 2 ou Tesoura = 3\nFeita a escolha o IA escolherá a dele\n");
    printf("Após as escolhas será decidido entre vitória, empate ou derrota. Lembrando que:\n");
    printf("Pedra perde para papel\nPedra ganha da tesoura\nPapel ganha de pedra\nPapel perde para tesoura\n");
    printf("Tesoura perde para pedra\nTesoura ganha de papel\n");
    printf("Decidido o vencedor, perdedor ou empate o ranking subirá de acordo com o resultado, sendo que:\n");
    printf("Vencedor soma 3 pontos no ranking, empate soma 1 ponto no ranking e o perdedor não ganha ponto\n");
    delay(5);
    system("cls");
}

void delay(int number_of_seconds) {
    int milli_seconds = 1000 * number_of_seconds;
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds);
}

/*
JOGO: PAPEL - PEDRA - TESOURA
ALUNOS: TARCISIO, GUSTAVO, CLARA, SILMARA E NIEDSON
CRIADO EM 01 DE MAIO DE 2019
*/
