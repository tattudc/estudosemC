#include <stdio.h>

int main() {
    int NUMBER, HORAS;
    float SALARY, SALAR;
    scanf("%i", &NUMBER);
    scanf("%i", &HORAS);
    scanf("%f", &SALAR);
    SALARY = SALAR * HORAS;
    printf("NUMBER = %i\n", NUMBER);
    printf("SALARY = U$ %.2f\n", SALARY);
	return 0;
}