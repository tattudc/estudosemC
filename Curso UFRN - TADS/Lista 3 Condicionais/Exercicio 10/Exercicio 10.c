#include <stdio.h>
#include <stdlib.h>
/* Leia 3 valores com ponto flutuante, referentes �s notas de um aluno da UFRN.
Calcule a m�dia aritm�tica desse aluno e informe se ele est� �Aprovado�, �Em
4� Prova� ou �Reprovado�, sabendo que para estar aprovado ele precisa ter
m�dia maior ou igual a 7 e todas as notas devem ser maiores ou iguais a 3,
para estar em 4� Prova sua m�dia deve ser maior ou igual � 3 e menor que 7,
caso contr�rio o aluno estar� reprovado.  */

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
