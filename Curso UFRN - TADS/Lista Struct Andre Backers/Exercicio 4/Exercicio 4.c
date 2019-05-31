#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct pontos{
    float x, y;
};
float valorAbs(float x){
    if(x >= 0.0) return x;
    else return -x;
}

int main(){
    struct pontos p1, p2;
    float diag, ladoA, ladoB, perim, areaR;

    printf("Digite dois pontos para o plano cartesiano:\n");
    setbuf(stdin, NULL);
    scanf("%f %f", &p1.x, &p1.y);
    printf("Digite mais dois pontos para o plano cartesiano, diferente do primeiro:\n");
    setbuf(stdin, NULL);
    scanf("%f %f", &p2.x, &p2.y);
    diag = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
    ladoA = valorAbs(p1.x - p2.x);
    ladoB = valorAbs(p1.y - p2.y);
    perim = (ladoA*2)+(ladoB*2);
    areaR = ladoA * ladoB;
    printf("Os pontos (%.0f e %.0f) e (%.0f e %.0f)\n", p1.x, p1.y, p2.x, p2.y);
    printf("Sua diagonal foi %.2f e seus lados sao %.0f e %.0f\n", diag, ladoA, ladoB);
    printf("Seu perimetro e %.2f e sua area e %.2f\n", perim, areaR);

    system("pause");
    return 0;
}
