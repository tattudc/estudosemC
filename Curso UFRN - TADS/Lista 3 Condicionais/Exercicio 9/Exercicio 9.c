#include <stdio.h>
#include <stdlib.h>
/* Leia 2 valores com uma casa decimal (x e y), que devem representar as
coordenadas de um ponto em um plano. A seguir, determine qual o quadrante
ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na
origem (x = y = 0). */

int main(){
	float x, y;
	
	printf("Digite o primeiro valor: \n");
	scanf("%f", &x);
	printf("Digite o segundo valor: \n");
	scanf("%f", &y);
	
	if(x > 0 && y > 0){
		printf("Q1\n");
	}
	else if(x > 0 && y < 0){
		printf("Q4\n");
	}
	else if(x < 0 && y < 0){
		printf("Q3\n");
	}
	else if(x < 0 && y > 0){
		printf("Q2\n");
	}
	else if(x == 0 && y > 0){
		printf("O ponto esta entre o Q1 e Q2\n");
	}
	else if(x > 0 && y == 0){
		printf("O ponto esta entre o Q1 e Q4\n");		
	}
	else if(x < 0 && y == 0){
		printf("O ponto esta entre o Q2 e Q3\n");		
	}
	else if(x == 0 && y < 0){
		printf("O ponto esta entre o Q3 e Q4\n");		
	}
	else{
		printf("Origem\n");
	}
	
	system("pause");
	return 0;
}
