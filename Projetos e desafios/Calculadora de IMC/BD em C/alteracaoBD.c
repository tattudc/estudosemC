#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int opcaoCad, opcaoBus;
    char command[800], incremet[500];

    /* Daqui em diante eu fiz */
    printf("Bem vindo ao banco de questoes, escolha uma das opcoes abaixo\n");
    printf("1 - Cadastrar questao\n2 - Buscar questao\n3 - Sair\n");
    scanf("%i", &opcaoCad);
    while(opcaoCad != 3){
        if(opcaoCad == 1){
            printf("Para cadastrar questoes escolha o dominio, o tema, a dificuldade, a questao e a resposta\n");
            printf("Digite tudo em maiusculo:\n");
            setbuf(stdin, NULL);
            fgets(incremet, 500, stdin);
            strcpy(command, "INSERT INTO pergCateg(DOMINIO, TEMA, DIFICULDADE, QUESTAO, RESPOS) VALUES (");
            strcat(command, incremet);
            strcat(command, ")");
            printf("%s", command);
            printf("\n");
        }
        else if(opcaoCad == 2){
            printf("Para buscar questoes em nosso data base, escolha uma das opcoes abaixo de busca:\n");
            printf("1 - Dominio\n2 - Tema\n3 - Dificuldade\n4 - Questao\n");
            scanf("%i", &opcaoBus);
            strcpy(command, "SELECT");
            if(opcaoBus == 1){
                    printf("Qual o dominio que busca? Digite tudo em maiusculo\n");
                    setbuf(stdin, NULL);
                    fgets(incremet, 500, stdin);
                    strcat(command, " id FROM pergCat WHERE dominio = ");
                    strcat(command, incremet);
                    printf("%s", command);
            }
            else if(opcaoBus == 2){
                    printf("Qual o tema que busca? Digite tudo em maiusculo\n");
                    setbuf(stdin, NULL);
                    fgets(incremet, 500, stdin);
                    strcat(command, " id FROM pergCat WHERE tema = ");
                    strcat(command, incremet);
                    printf("%s", command);
            }
            else if(opcaoBus == 3){
                    printf("Qual a dificuldade que busca? Digite: \n1 - Facil\n2 - Medio\n3 - Dificil\n");
                    setbuf(stdin, NULL);
                    fgets(incremet, 500, stdin);
                    strcat(command, " id FROM pergCat WHERE dificuldade = ");
                    strcat(command, incremet);
                    printf("%s", command);
            }
            else if(opcaoBus == 4){
            }
            else{
                printf("Opcao invalida, por favor escolha uma opcao valida:\n");
                scanf("%i", &opcaoBus);
            }
        }
        else{
            printf("Opcao invalida\nDigite uma opcao valida\n");
            scanf("%i", &opcaoCad);
        }
    }
    printf("Saindo do programa\n");

    system("pause");
    return 0;
}

//Não criei as tabelas mas vou deixar uma para registrar o dominio, tema e dificuldade e outra para
//as perguntas e respostas. A primeira se chamara pergCateg e a segunda se chamara pergResp
