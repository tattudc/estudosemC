#include <stdio.h>
#include <stdlib.h>
/* Leia 3 valores com ponto flutuante, referentes às notas de um aluno da UFRN.
Calcule a média aritmética desse aluno e informe se ele está “Aprovado”, “Em
4ª Prova” ou “Reprovado”, sabendo que para estar aprovado ele precisa ter
média maior ou igual a 7 e todas as notas devem ser maiores ou iguais a 3,
para estar em 4ª Prova sua média deve ser maior ou igual à 3 e menor que 7,
caso contrário o aluno estará reprovado.  */

int main(){
	float a1, b1, c1, media;
	
	printf("Digite o primeira nota: \n");
	scanf("%f", &a1);	
	printf("Digite o segunda nota: \n");
	scanf("%f", &b1);
	printf("Digite o terceira nota: \n");
	scanf("%f", &c1);
	
	media = (a1 + b1 + c1) / 3;
	
	if(media >= 7.0 && a1 >= 3.0 && b1 >= 3.0 && c1 >= 3.0){
		printf("Aluno aprovado\n");
	}
	else if((media >= 3.0) && (a1 <= 3.0 || b1 <= 3.0 || c1 <= 3.0)){
		printf("Aluno em quarta prova\n");
	}
	else if(media < 3.0){
		printf("Aluno reprovado\n");
	}
	else{
		printf("\n");
	}
	 
	system("pause");
	return 0;
}
