#include <stdio.h>
#include <stdlib.h>

struct tempos{
    int hora, minuto, segundo;
};

int main(){
    struct tempos tempo[5];
    int i, maiorTempo[3];

    //Lendo dados
    for(i = 0; i < 5; i++){
        printf("Digite uma hora, minuto e segundo\nPrimeiro digite a hora:\n");
        scanf("%i", &tempo[i].hora);
            while(tempo[i].hora > 23 || tempo[i].hora < 0){
                printf("Hora incorreta, digite uma hora entre 0 e 24\n");
                scanf("%i", &tempo[i].hora);
            }
        printf("Digite os minutos\n");
        scanf("%i", &tempo[i].minuto);
            while(tempo[i].minuto > 59 || tempo[i].minuto < 0){
                printf("Minuto incorreto, digite minutos entre 0 e 60\n");
                scanf("%i", &tempo[i].minuto);
            }
        printf("Digite os segundos\n");
        scanf("%i", &tempo[i].segundo);
            while(tempo[i].segundo > 59 || tempo[i].segundo < 0){
                printf("Segundos incorretos, digite segundos entre 0 e 60\n");
                scanf("%i", &tempo[i].segundo);
            }
    }

    //Inciando os valores do maior
    maiorTempo[0] = tempo[0].hora;
    maiorTempo[1] = tempo[0].minuto;
    maiorTempo[2] = tempo[0].segundo;

    //Comparando o tempo
    for(i = 0; i < 5; i++){
        if(tempo[i].hora >= maiorTempo[0]){
            if(tempo[i].hora == maiorTempo[0] && tempo[i].minuto >= maiorTempo[1]){
               if(tempo[i].minuto == maiorTempo[1] && tempo[i].segundo > maiorTempo[2]){
                        maiorTempo[0] = tempo[i].hora;
                        maiorTempo[1] = tempo[i].minuto;
                        maiorTempo[2] = tempo[i].segundo;
               }
            }
            else{
                maiorTempo[0] = tempo[i].hora;
                maiorTempo[1] = tempo[i].minuto;
                maiorTempo[2] = tempo[i].segundo;
            }
        }
    }
    printf("O maior tempo foi %i:%i:%i\n", maiorTempo[0], maiorTempo[1], maiorTempo[2]);

    system("pause");
    return 0;
}
