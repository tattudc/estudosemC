#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct criarQuestao{
    char dominio[50], tema[50], questao[100], resposta[100];
    int dificuldade;
};

void cadastrarBd(){
    char comando[500];
    struct criarQuestao increment;

            printf("Para cadastrar questoes voce vai escolha o dominio, o tema, a dificuldade, a questao e a resposta\n");
            printf("Digite o dominio\n");
            setbuf(stdin, NULL);
            gets(increment.dominio);
            printf("Digite o tema\n");
            setbuf(stdin, NULL);
            gets(increment.tema);
            printf("Digite a dificuldade de 1 a 3\n");
            setbuf(stdin, NULL);
            scanf("%i", &increment.dificuldade);
            while(increment.dificuldade < 1 || increment.dificuldade > 3){
                printf("Escolha errada!\nInsira uma dificuldade de 1 a 3\n");
                setbuf(stdin, NULL);
                scanf("%i", &increment.dificuldade);
            };
            printf("Digite o Questao\n");
            setbuf(stdin, NULL);
            gets(increment.questao);
            printf("Digite a resposta\n");
            setbuf(stdin, NULL);
            gets(increment.resposta);
            printf("INSERT INTO public.questoes(id, dominio, tema, dificuldade, texto, resposta) VALUES (2, '%s', '%s', %d, '%s', '%s');", increment.dominio, increment.tema, increment.dificuldade, increment.questao, increment.resposta);
            printf("\n");
            //chamarMenu();
        }

void buscarBd(){
    int opcaoBus = 0;
    char comandoBus[500];

    do{
        printf("Para buscar questoes em nosso data base, escolha uma das opcoes abaixo de busca:\n");
        printf("1 - Dominio\n2 - Tema\n3 - Dificuldade\n4 - Questao\n5 - Sair\n");
        scanf("%i", &opcaoBus);
        switch(opcaoBus){
            case 1:
                opcaoBus = 5;
                printf("Digite o dominio que quer pesquisar\n");
                scanf("%s", &comandoBus);
				printf("SELECT * FROM public.questoes WHERE dominio = '%s';\n", comandoBus);
				break;
            case 2:
                opcaoBus = 5;
                printf("Digite o tema que quer pesquisar\n");
                scanf("%s", &comandoBus);
				printf("SELECT * FROM public.questoes WHERE tema = '%s';\n", comandoBus);
				break;
            case 3:
                opcaoBus = 5;
                printf("Digite a dificuldade que quer pesquisar\n");
                scanf("%s", &comandoBus);
				printf("SELECT * FROM public.questoes WHERE dificuldade = '%s';\n", comandoBus);
				break;
            case 4:
                opcaoBus = 5;
                printf("Digite a questao que quer pesquisar\n");
                scanf("%s", &comandoBus);
				printf("SELECT * FROM public.questoes WHERE questao = '%s';\n", comandoBus);
				break;
            case 5:
                break;
            default:
                printf("Opcao invalida\n");
        }
    }while(opcaoBus != 5);

    printf("Saindo do programa\n");
}

void listarBd(){
	printf("Listar questões!\n");
	char opcaoListar = 0;
	do {
		printf("Listar de acordo com:\n1-Temas\n2-Dominios\n3-Dificuldades\n4-Sair\n ");
		scanf("%d", &opcaoListar);
		switch(opcaoListar) {
			case 1:
				opcaoListar = 4;
				strcpy(command, "SELECT tema FROM public.questoes;");
				break;
			case 2:
				opcaoListar = 4;
				strcpy(command, "SELECT dominio FROM public.questoes;");
				break;
			case 3:
				opcaoListar = 4;
				strcpy(command, "SELECT dificuldade FROM public.questoes;");
				break;
			case 4:
				break;
			default:
				printf("Opcao invalida");
		}

	} while(opcaoListar != 4);
}

void telaInicial(){
    int opcaoCad = 0;
    char command[150];

    do{
        printf("Bem vindo ao banco de questoes, escolha uma das opcoes abaixo\n");
        printf("1 - Cadastrar questao\n2 - Buscar questao\n3 - Sair\n");
        scanf("%i", &opcaoCad);
        switch(opcaoCad){
        case 1:
            opcaoCad = 4;
            cadastrarBd();
            break;
        case 2:
            opcaoCad = 4;
            buscarBd();
            break;
        case 3:
            opcaoCad = 4;
            listarBd();
            break;
        case 4:
            break;
        default:
            printf("Opcao invalida\n");
        }
    }while(opcaoCad != 4);
}

int main(){
    /* Daqui em diante eu fiz */
    telaInicial();
    /*printf("Bem vindo ao banco de questoes, escolha uma das opcoes abaixo\n");
    printf("1 - Cadastrar questao\n2 - Buscar questao\n3 - Sair\n");
    scanf("%i", &opcaoCad);
    while(opcaoCad != 3){
        if(opcaoCad == 1){
            printf("Para cadastrar questoes voce vai escolha o dominio, o tema, a dificuldade, a questao e a resposta\n");
            printf("Digite o dominio\n");
            setbuf(stdin, NULL);
            gets(increment.dominio);
            printf("Digite o tema\n");
            setbuf(stdin, NULL);
            gets(increment.tema);
            printf("Digite a dificuldade de 1 a 3\n");
            setbuf(stdin, NULL);
            scanf("%i", &increment.dificuldade);
            while(increment.dificuldade < 1 || increment.dificuldade > 3){
                printf("Escolha errada!\nInsira uma dificuldade de 1 a 3\n");
                setbuf(stdin, NULL);
                scanf("%i", &increment.dificuldade);
            };
            printf("Digite o Questao\n");
            setbuf(stdin, NULL);
            gets(increment.questao);
            printf("Digite a resposta\n");
            setbuf(stdin, NULL);
            gets(increment.resposta);
            printf("INSERT INTO public.questoes(id, dominio, tema, dificuldade, texto, resposta) VALUES (2, '%s', '%s', %d, '%s', '%s');", increment.dominio, increment.tema, increment.dificuldade, increment.questao, increment.resposta);

        }
        else if(opcaoCad == 2){
           /* printf("Para buscar questoes em nosso data base, escolha uma das opcoes abaixo de busca:\n");
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
*/
    system("pause");
    return 0;
}

//Não criei as tabelas mas vou deixar uma para registrar o dominio, tema e dificuldade e outra para
//as perguntas e respostas. A primeira se chamara pergCateg e a segunda se chamara pergResp
