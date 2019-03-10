#include <stdio.h>
#include <stdlib.h>

int main(){
         int idade;
         printf("Informe a idade: \n");
         scanf("%i", &idade);

         if(idade >= 18 && idade <= 25){
            printf("Classificada para departamento A\n");
         }
         else if(idade > 25 && idade <= 30){
            printf("Classificada para departamento B\n");
         }
         else if(idade > 30 && idade <= 35){
            printf("Classificada para departamento C\n");
         }
         else{
            printf("Desclassificada\n");
         }
         system("pause");
         return 0;
         }
