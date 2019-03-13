#include <stdio.h>
#include <stdlib.h>
/* Faça um programa que receba o salário de um funcionário, calcule e mostre o
novo salário, acrescido de bonificação e auxílio escola, de acordo com as
tabelas abaixo: */

int main(){
	float salarioAtual, salarioAtualizado, bonus, auxilio;
	
	printf("Digite o seu salario\n");
	scanf("%f", &salarioAtual);
	
	if(salarioAtual <= 500){
		bonus = salarioAtual * 0.05;
	}
	else if(salarioAtual > 500 && salarioAtual <= 1200){
		bonus = salarioAtual * 0.12;
	}
	else{
		bonus = 0;
	}
	
	if(salarioAtual <= 600){
		auxilio = 150.00;
	}
	else{
		auxilio = 100.00;
	}
	salarioAtualizado = salarioAtual + bonus + auxilio;
	
	printf("Salario antigo: %.2f\nBonus: %.2f\nauxilio escola: %.2f\nSalario Atual: %.2f\n", salarioAtual, bonus, auxilio, salarioAtualizado);
	 
	system("pause");
	return 0;
}
