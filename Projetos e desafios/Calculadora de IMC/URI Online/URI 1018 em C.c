#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int valor, cem, cinquenta, vinte, dez, cinco, dois, um,resto;

    scanf("%d", &valor);
    printf("%d\n", valor);
    cem = valor/100;
    printf("%d Nota(s) de R$ 100,00\n", cem);
    resto = valor%100;
    cinquenta = resto/50;
    printf("%d Nota(s) de R$ 50,00\n", cinquenta);
    resto = resto%50;
    vinte = resto/20;
    printf("%d Nota(s) de R$ 20,00\n", vinte);
    resto = resto%20;
    dez = resto/10;
    printf("%d Nota(s) de R$ 10,00\n", dez);
    resto = resto%10;
    cinco = resto/5;
    printf("%d Nota(s) de R$ 5,00\n", cinco);
    resto = resto%5;
    dois = resto/2;
    printf("%d Nota(s) de R$ 2,00\n", dois);
    resto = resto%2;
    um = resto/1;
    printf("%d Nota(s) de R$ 1,00\n", um);
    resto = resto%1;
    return 0;
}

/*Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser
decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de
notas necessárias.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

Saída
Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo
fornecido. Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa apresentará a
mensagem: “Presentation Error”.*/
