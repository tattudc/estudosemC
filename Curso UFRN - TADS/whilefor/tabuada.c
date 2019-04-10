#include <stdio.h>

int main(){
	int x, i= 0;
	
	printf("Informe a tabuada que vc quer\n");
	scanf("%i", &x);
		
	for(; i <= 10 ; i++){
		printf("%i X %i e igual a %i\n", x, i, x*i );
	}
	return 0;
}
