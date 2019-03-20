#include <stdio.h>
#include <stdlib.h>
/*Escrever um algoritmo que apresente o seguinte cardápio de uma lanchonete.
O programa deve ler os códigos dos produtos pedidos e as quantidades desejadas.
Ao final o programa deve mostrar o valor a ser pago pelo lanche. Observe que
para encerrar o pedido deve-se digitar 0.*/

int main(){
	int codigo, quantidade;
	float total;
	printf("-------------------CARDAPIO------------------\n");
	printf("CODIGO            PRODUTO               PRECO\n");
	printf("  1             Refrigerante            1,50\n");
	printf("  2           Cachorro quente           1,00\n");
	printf("  3                Bauru                1,30\n");
	printf("  4              Hamburguer             1,40\n");
	printf("  5            Cheeseburguer            1,20\n");
	printf("----------------------------------------------\n");
	printf("          Para encerrar digite 0\n");
	printf("----------------------------------------------\n");
	printf("Digite o codigo do seu pedido: \n");
	scanf("%i", &codigo);
	
	while(codigo != 0){
		if(codigo == 1){
			printf("Quantos refrigerantes?\n");
			scanf("%i", &quantidade);
			total = total + (quantidade * 1.50);
			printf("Algo mais? Digite o codigo: \n");
			scanf("%i", &codigo);
		}
		else if(codigo == 2){
			printf("Quantos Cachorros?\n");
			scanf("%i", &quantidade);
			total = total + (quantidade * 1.00);
			printf("Algo mais? Digite o codigo: \n");
			scanf("%i", &codigo);
		}
		else if(codigo == 3){
			printf("Quantos Baurus?\n");
			scanf("%i", &quantidade);
			total = total + (quantidade * 1.30);
			printf("Algo mais? Digite o codigo: \n");
			scanf("%i", &codigo);
		}
		else if(codigo == 4){
			printf("Quantos Hamburgues?\n");
			scanf("%i", &quantidade);
			total = total + (quantidade * 1.40);
			printf("Algo mais? Digite o codigo: \n");
			scanf("%i", &codigo);
		}
		else if(codigo == 5){
			printf("Quantos Cheeseburgues?\n");
			scanf("%i", &quantidade);
			total = total + (quantidade * 1.20);
			printf("Algo mais? Digite o codigo: \n");
			scanf("%i", &codigo);
		}
		else{
			printf("CODIGO INVALIDO\nAlgo mais? Digite o codigo: \n");
			scanf("%i", &codigo);
		}
	}
	printf("O total do seu pedido foi: R$ %.2f\n", total);
	
	system("pause");
	return 0;
}
