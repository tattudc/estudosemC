#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoas{
    char nome[50];
    int dia, mes, ano;
};

int main(){
    struct pessoas pessoa[6];
    int i, maiorIdade[3], menorIdade[3], idadeMa, idadeMe;
    char maiorP[50], menorP[50];

    //Inserir dados
    for(i = 0; i < 6; i++){
        printf("Digite o nome da pessoa e sua data de nascimento\n");
        setbuf(stdin, NULL);
        scanf("%s", &pessoa[i].nome);
        printf("Digite sua data de nascimento\n");
        setbuf(stdin, NULL);
        scanf("%i %i %i", &pessoa[i].dia, &pessoa[i].mes, &pessoa[i].ano);
    }

    //Inserir primeiro dado
    maiorIdade[0] = pessoa[0].ano;
    maiorIdade[1] = pessoa[0].mes;
    maiorIdade[2] = pessoa[0].dia;
    strcpy(maiorP, pessoa[0].nome);
    menorIdade[0] = pessoa[0].ano;
    menorIdade[1] = pessoa[0].mes;
    menorIdade[2] = pessoa[0].dia;
    strcpy(menorP, pessoa[0].nome);

    //Comparando o tempo
    for(i = 0; i < 6; i++){
        if(pessoa[i].ano <= maiorIdade[0]){
            if(pessoa[i].ano == maiorIdade[0] && pessoa[i].mes <= maiorIdade[1]){
               if(pessoa[i].mes == maiorIdade[1] && pessoa[i].dia < maiorIdade[2]){
                    maiorIdade[0] = pessoa[i].ano;
                    maiorIdade[1] = pessoa[i].mes;
                    maiorIdade[2] = pessoa[i].dia;
                    strcpy(maiorP, pessoa[i].nome);
               }
            }
            else{
                maiorIdade[0] = pessoa[i].ano;
                maiorIdade[1] = pessoa[i].mes;
                maiorIdade[2] = pessoa[i].dia;
                strcpy(maiorP, pessoa[i].nome);
            }
        }
        if(pessoa[i].ano >= menorIdade[0]){
            if(pessoa[i].ano == menorIdade[0] && pessoa[i].mes >= menorIdade[1]){
               if(pessoa[i].mes == menorIdade[1] && pessoa[i].dia > menorIdade[2]){
                    menorIdade[0] = pessoa[i].ano;
                    menorIdade[1] = pessoa[i].mes;
                    menorIdade[2] = pessoa[i].dia;
                    strcpy(menorP, pessoa[i].nome);
               }
            }
            else{
                menorIdade[0] = pessoa[i].ano;
                menorIdade[1] = pessoa[i].mes;
                menorIdade[2] = pessoa[i].dia;
                strcpy(menorP, pessoa[i].nome);
            }
        }
    }
    idadeMa = 2019 - maiorIdade[0];
    idadeMe = 2019 - menorIdade[0];
    printf("A pessoa com maior idade foi %s\nNascimento: %i:%i:%i\nIdade: %i anos\n", maiorP, maiorIdade[2], maiorIdade[1], maiorIdade[0], idadeMa);
    printf("A pessoa com menor idade foi %s\nNascimento: %i:%i:%i\nIdade: %i anos\n", menorP, menorIdade[2], menorIdade[1], menorIdade[0], idadeMe);

    system("pause");
    return 0;
}
