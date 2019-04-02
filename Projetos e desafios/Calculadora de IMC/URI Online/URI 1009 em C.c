#include <stdio.h>

int main(){
    char NM[50]; double SL, VLT, TOTAL;
    scanf("%s", NM);
    scanf("%lf", &SL);
    scanf("%lf", &VLT);
    TOTAL=SL+(VLT*0.15);
    printf("TOTAL = R$ %.2lf\n", TOTAL);
    return 0;
}
