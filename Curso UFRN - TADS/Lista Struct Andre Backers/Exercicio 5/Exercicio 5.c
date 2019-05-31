#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct pontos{
    float x, y;
};

int main(){
    struct pontos p1, p2, p3;
    float maiorX, menorX, maiorY, menorY;

    printf("Digite dois pontos para o plano cartesiano:\n");
    setbuf(stdin, NULL);
    scanf("%f %f", &p1.x, &p1.y);
    printf("Digite mais dois pontos para o plano cartesiano, diferente do primeiro:\n");
    setbuf(stdin, NULL);
    scanf("%f %f", &p2.x, &p2.y);
    if(p1.x > p2.x){
       maiorX = p1.x;
       menorX = p2.x;
    }
    else{
        maiorX = p2.x;
        menorX = p1.x;
    }
    if(p1.y > p2.y){
       maiorY = p1.y;
       menorY = p2.y;
    }
    else{
        maiorY = p2.y;
        menorY = p1.y;
    }
    printf("Digite 2 pontos para ver se esta dentro do limite do retangulo:\n");
    setbuf(stdin, NULL);
    scanf("%f %f", &p3.x, &p3.y);
    if((p3.x >= menorX && p3.x <= maiorX) &&(p3.y >= menorY && p3.y <= maiorY))
        printf("Os pontos %.0f e %.0f estao no intervalo do retangulo\n", p3.x, p3.y);
    else
        printf("Os pontos estao fora do retangulo\n");

    system("pause");
    return 0;
}
