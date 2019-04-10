#include <stdio.h>
#include <stdlib.h>

int main(){
	int l2, num = 1;
	
	printf("Informe a quantidade de linhas: ");
	scanf("%d", &l2);
	
	for(int l = 1; l <= l2; l++){
		for(int c = 0; c < l; c++){
			printf("%d ", num++);
		}
		putchar('\n');
	}
	
	system("pause");
	return 0;
}
