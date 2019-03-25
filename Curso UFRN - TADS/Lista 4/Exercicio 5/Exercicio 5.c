#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcao;
    float salarioFunc;

    do{
        printf("Bem vindo, digite uma opcao do menu abaixo: \n");
        printf("---------------------Empresa Funcionario Feliz----------------\n");
        printf("DIGITE A OPCAO DESEJADA: \n");
        printf("1 - Calculo de imposto\n");
        printf("2 - Calculo de aumento salarial\n");
        printf("3 - Verifica situacao do funcionario\n");
        printf("4 - Sair\n");
        printf("--------------------------------------------------------------\n");
        scanf("%i", &opcao);
        if(opcao == 1){
            printf("Digite o seu salario\n");
            scanf("%f", &salarioFunc);
            if(salarioFunc < 500){
                salarioFunc = salarioFunc * 0.05;
                printf("O desconto do imposto de 5 porcento foi de %.2f\n\n", salarioFunc);
            }
            else if(salarioFunc >= 500 && salarioFunc < 850){
                salarioFunc = salarioFunc * 0.10;
                printf("O desconto do imposto de 10 porcento foi de %.2f\n\n", salarioFunc);
            }
            else{
                salarioFunc = salarioFunc * 0.15;
                printf("O desconto do imposto de 15 porcento foi de %.2f\n\n", salarioFunc);
            }
        }
        else if(opcao == 2){
            printf("Digite o seu salario\n");
            scanf("%f", &salarioFunc);
            if(salarioFunc >= 1500){
                salarioFunc = salarioFunc + 25;
                printf("O salario com o aumento de 25 reais foi de %.2f reais\n\n", salarioFunc);
            }
            else if(salarioFunc >= 750 && salarioFunc < 1500){
                salarioFunc = salarioFunc + 50;
                printf("O salario com o aumento de 50 reais foi de %.2f reais\n\n", salarioFunc);
            }
            else if(salarioFunc >= 450 && salarioFunc < 750){
                salarioFunc = salarioFunc + 75;
                printf("O salario com o aumento de 75 reais foi de %.2f reais\n\n", salarioFunc);
            }
            else{
                salarioFunc = salarioFunc + 100;
                printf("O salario com o aumento de 100 reais foi de %.2f reais\n\n", salarioFunc);
            }
        }
        else if(opcao == 3){
            printf("Digite o seu salario\n");
            scanf("%f", &salarioFunc);
            if(salarioFunc <= 700){
                printf("Funcionario mal remunerado\n");
            }
            else{
                printf("Funcionario bem remunerado\n");
            }
        }
        else if(opcao == 4){
            printf("Saindo do programa\n");
        }
        else{
            printf("Opcao invalida\n");
        }
    }while(opcao != 4);

    system("pause");
    return 0;
}
/* Faça um programa que apresente o menu a seguir, permita ao usuário escolher a
opção desejada, receba os dados necessários para executar a operação e mostre o
resultado. Verifique a possibilidade de opção inválida.
 */
