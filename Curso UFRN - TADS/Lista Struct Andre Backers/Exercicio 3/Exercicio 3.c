#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct pontos{
    float x, y;
};

int main(){
    struct pontos p1, p2;
    float dist;

    printf("Digite duas coordenadas de um plano cartesiano\n");
    setbuf(stdin, NULL);
    scanf("%f %f", &p1.x, &p1.y);
    printf("Digite mais duas coordenadas de um plano cartesiano\n");
    setbuf(stdin, NULL);
    scanf("%f %f", &p2.x, &p2.y);
    dist = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
    printf("Os pontos %.0f e %.0f para %.0f e %.0f e de %.2f\n", p1.x, p1.y, p2.x, p2.y, dist);

    system("pause");
    return 0;
}
