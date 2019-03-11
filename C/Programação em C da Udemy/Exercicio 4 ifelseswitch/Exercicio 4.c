#include <stdio.h>
#include <stdlib.h>
/* Para doar sangue é necessário ter entre 18 e 67 anos. Faça um aplicativo na linguagem C que pergunte a idade de uma pessoa e diga se ela pode doar sangue ou não. 
Use alguns dos operadores lógicos OU (||) e E (&&). 
*/
int main(){
	int idade;
	printf("Digite a sua idade: \n");
	scanf("%i", &idade);
	
	if(idade < 18 || idade > 67)
		printf("Voce nao pode doar sangue\n");
	else if(idade >= 18 && idade <= 67)
		printf("Voce pode doar sangue\n");
	else
		printf("Comando invalido\n");
	
	system("pause");
    return 0;
}
