#include <stdio.h>
#include <stdlib.h>

struct pessoa{
    char nome[50], endereco[80];
    int idade;
};

int main(){
    struct pessoa p1;

    printf("Digite o nome, idade e seu endereco\n");
    setbuf(stdin, NULL);
    scanf("%s", &p1.nome);
    setbuf(stdin, NULL);
    scanf("%i", &p1.idade);
    setbuf(stdin, NULL);
    fgets(p1.endereco, 80, stdin);
    printf("Seu nome e %s, voce tem %i anos e mora em %s", p1.nome, p1.idade, p1.endereco);

    system("pause");
    return 0;
}
