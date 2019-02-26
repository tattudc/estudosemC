#include <stdio.h>
#include <stdlib.h>

int main(){
    float horaAula, salarioLiq, inss = 0.88, salarioBruto;
    int horaTrabalhada;
    printf("Digite o valor da hora aula: \n");
    scanf("%f", &horaAula);
    printf("Digite a quantidade de horas trabalhadas no mes: \n");
    scanf("%d", &horaTrabalhada);
    salarioBruto = horaTrabalhada * horaAula;
    salarioLiq = salarioBruto * inss;
    printf("O salario bruto do professor em questao e de %.2f\n", salarioBruto);
    printf("O salario bruto e referente a %d horas de trabalho e %.2f de hora aula\n", horaTrabalhada, horaAula);
    printf("Seu salario liquido e de %.2f, que e o Bruto menos 12 porcento de INSS\n", salarioLiq);
     system("pause");
    return 0;
}
