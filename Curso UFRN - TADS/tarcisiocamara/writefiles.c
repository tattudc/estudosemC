#include <stdio.h>
#include <stdlib.h>

int main(){
	system("date /t > report.txt");
	system("time /t >> report.txt");
	system("impar >> report.txt");
	
	
	return 0;
}
