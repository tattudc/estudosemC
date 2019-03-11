#include <stdio.h>
#include <stdlib.h>
/*Implemente um algoritmo que receba o ano de nascimento de uma pessoa e
informe se ela é: Jovem (0 a 18 anos); Adulta (19 a 59 anos) ou Idosa (acima
de 60 anos) */

int main(){
    int ano, idade;

    printf("Digite o ano que nasceu: \n");
    scanf("%i", &ano);

    idade = 2019 - ano;

    if(idade <= 18)
        printf("Jovem (0 a 18 anos)\n");
    else if(idade >= 19 && idade <= 59)
        printf("Adulta (19 a 59 anos)\n");
    else
        printf("Idosa (acima de 60 anos)\n");

    system("pause");
    return 0;
}
