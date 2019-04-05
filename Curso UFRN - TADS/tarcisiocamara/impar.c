#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	
	for(i = 0; i <= 100; i++){
		if(i%2 == 1)
			printf("%i\t", i);
	}
	
	return 0;
}
