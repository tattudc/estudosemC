#include <stdio.h>
#include <stdlib.h>

int main(){
	float premio = 780000.00, primeiro, segundo, terceiro;
	primeiro = premio * 0.46;
	segundo = premio * 0.32;
	terceiro = premio * (1 - 0.46 - 0.32);
	printf("Do premio total de %.2f \nO primeiro ganhou: %.2f \nO segundo ganhou: %.2f \nO terceiro ganhou: %.2f\n", premio, primeiro, segundo, terceiro);
	system("pause");
	return 0;
}
