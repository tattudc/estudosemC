#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct pontos{
    float x, y;
};

int main(){
    struct pontos p1;
    float dist;

    printf("Digite duas coordenadas de um plano cartesiano\n");
    setbuf(stdin, NULL);
    scanf("%f %f", &p1.x, &p1.y);
    dist = sqrt(pow((p1.x - 0), 2) + pow((p1.y - 0), 2));
    printf("Os pontos %.0f e %.0f para a origem 0,0 e de %.2f\n", p1.x, p1.y, dist);

    system("pause");
    return 0;
}
