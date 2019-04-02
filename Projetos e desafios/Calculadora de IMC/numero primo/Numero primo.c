#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, x;
  int div = 0;

  do {
        //ENTRADA DE DADO
    system("cls");
    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &x);
  } while (x <= 0);

  //LAÇO PARA SABER QUANTAS VEZES ELE VAI SER DIVIDIDO
  for (i = 1; i <= x; i++) {
    if (x % i == 0) {
     div++;
    }
  }
//SAIDAD DE DADOS, SE FOR DIVIDIDO POR 1 E ELE MESMO SAI E PRIMO SENAO NAO E
  if (div == 2)
    printf("O numero %d e primo!\n", x);
  else
    printf("O numero %d nao e primo!\n", x);

  return 0;
}
