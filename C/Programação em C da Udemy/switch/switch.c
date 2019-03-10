#include <stdio.h>
#include <stdlib.h>

int main(){
         int idade;
         printf("Informe um valor: \n");
         scanf("%i", &idade);

         switch(idade){
         case 1:
            printf("Classificada para departamento A\n");
            break;
         case 2:
            printf("Classificada para departamento B\n");
            break;
         case 3:
            printf("Classificada para departamento C\n");
            break;
         default:
            printf("Esta Desclassificada\n");
            break;
         }
         system("pause");
         return 0;
         }
