#include <stdio.h>
#include <stdlib.h>

int main(){
	int tamL, num = 1;
	
	printf("Digite quantas linhas\n");
	scanf("%d", &tamL);
	
	for(int i = 1; i <= tamL; i++){
		for(int j = 0; j < i; j++){
			printf("%d ", num++);
		}
		
		putchar('\n');
	}
	system("pause");
	return 0;
}
