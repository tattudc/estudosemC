#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alunos{
    char nome[50];
    float matricula, notas[3];
};

int main(){
    struct alunos aluno[5];
    float media[5], maiorM;
    int i, j;
    char maiorA[50];

    //Inserir dados
    for(i = 0; i < 5; i++){
        printf("Digite o nome do aluno, matricula e suas 3 notas da disciplina\n");
        setbuf(stdin, NULL);
        scanf("%s", &aluno[i].nome);
        setbuf(stdin, NULL);
        scanf("%f", &aluno[i].matricula);
        printf("Digite as 3 notas\n");
        for(j = 0; j < 3; j++){
            setbuf(stdin, NULL);
            scanf("%f", &aluno[i].notas[j]);
            };
        media[i] = (aluno[i].notas[0] + aluno[i].notas[1] + aluno[i].notas[2]) / 3;
    }

    //Dar inicio ao maior
    maiorM = media[0];
    strcpy(maiorA, aluno[0].nome);

    //Ler dados
    for(i = 0; i < 5; i++){
        printf("Nome %s\nMatricula: %.0f\nNotas: %.2f/%.2f/%.2f\nMedia: %.2f\n", aluno[i].nome, aluno[i].matricula, aluno[i].notas[0], aluno[i].notas[1], aluno[i].notas[2], media[i]);
        if(media[i] > maiorM){
            maiorM = media[i];
            strcpy(maiorA, aluno[i].nome);
        }
    }
    printf("O aluno: %s, teve a maior media de valor %.2f\n", maiorA, maiorM);

    system("pause");
    return 0;
}
