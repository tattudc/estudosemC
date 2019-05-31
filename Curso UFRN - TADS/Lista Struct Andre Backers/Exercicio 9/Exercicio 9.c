#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct atletas{
    char nome[50], esporte[50];
    float altura;
    int dia, mes, ano;
};

int main(){
    struct atletas atleta[5];
    int maiorIdade[3], idadeMa, i;
    float maisAlto;
    char maiorP[50], maiorA[50];

    //Inserir dados
    for(i = 0; i < 5; i++){
        printf("Digite o nome do atleta\n");
        setbuf(stdin, NULL);
        scanf("%s", &atleta[i].nome);
        printf("Digite sua data de nascimento\n");
        setbuf(stdin, NULL);
        scanf("%i %i %i", &atleta[i].dia, &atleta[i].mes, &atleta[i].ano);
        printf("Digite o esporte do atleta\n");
        setbuf(stdin, NULL);
        scanf("%s", &atleta[i].esporte);
        printf("Digite a altura do atleta\n");
        setbuf(stdin, NULL);
        scanf("%f", &atleta[i].altura);
    }

    //Iniciando o mais velho
    maiorIdade[0] = atleta[0].ano;
    maiorIdade[1] = atleta[0].mes;
    maiorIdade[2] = atleta[0].dia;
    strcpy(maiorP, atleta[0].nome);
    maisAlto = atleta[0].altura;
    strcpy(maiorA, atleta[0].nome);

    //Fazendo comparações
    for(i = 0; i < 5; i++){
        if(atleta[i].ano <= maiorIdade[0]){
            if(atleta[i].ano == maiorIdade[0] && atleta[i].mes <= maiorIdade[1]){
               if(atleta[i].mes == maiorIdade[1] && atleta[i].dia < maiorIdade[2]){
                    maiorIdade[0] = atleta[i].ano;
                    maiorIdade[1] = atleta[i].mes;
                    maiorIdade[2] = atleta[i].dia;
                    strcpy(maiorP, atleta[i].nome);
               }
            }
            else{
                maiorIdade[0] = atleta[i].ano;
                maiorIdade[1] = atleta[i].mes;
                maiorIdade[2] = atleta[i].dia;
                strcpy(maiorP, atleta[i].nome);
            }
        }
        if(atleta[i].altura > maisAlto){
            maisAlto = atleta[i].altura;
            strcpy(maiorA, atleta[i].nome);
        }
    }
    idadeMa = 2019 - maiorIdade[0];
    printf("O atleta com maior idade e %s\nNascido em %i/%i/%i\n%i anos\n", maiorP, maiorIdade[2], maiorIdade[1], maiorIdade[0], idadeMa);
    printf("O atleta com maior altura e %s\n Medindo %.2f\n", maiorA, maisAlto);

    system("pause");
    return 0;
}
