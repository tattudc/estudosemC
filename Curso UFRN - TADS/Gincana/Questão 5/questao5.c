#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int tam, i, cont = 0, flag = 0;
	printf("Informe a quantidade de itens da lista: ");
	scanf("%d", &tam);
	
	char lista[tam][50];
	char listaAux[50];
	
	do{
		printf("Digite o item: ");
		setbuf(stdin, NULL);
		gets(listaAux);
		for(i = 0; i < tam; i++){
			if(strcasecmp(listaAux, lista[i])== 0){
				printf("Item já existente, digite novamente\n");
				flag = 1;
				break;
			}
		}
		if(flag == 0){
			strcpy(lista[cont], listaAux);
			cont++;
		}
		flag = 0;
	}while(cont < tam);
	
	printf("\nLista:\n");
	for(i = 0; i < tam; i++){
		printf("%s\n", lista[i]);
	}
	
	return 0;
}

