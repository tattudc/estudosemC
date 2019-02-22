#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//vertices cubo
int main()
{
    int vertices, faces = 6, arestas = 12;
    vertices = arestas + 2 - faces;
    printf("Atividades do Livro de algoritmos de Medina\n");
    printf("------------------------------------------------------------------------\n");
    printf("Problema 1 - Calcular o numero de vertices de um cubo\n");
    printf("O cubo tem %i arestas, %i faces e %i vertices\n", arestas, faces, vertices);
    printf("------------------------------------------------------------------------\n");
    printf("Problema 2 - Encontrar as raizes de uma equacao de 2 grau\n");
    float delta, x1, x2, num1 = 2, num2 = 4, num3 = -3;
    delta = pow(-num2, 2) - 4 * num1 * num3;
    printf("O delta da expressao 2x2+4x-3 e igual a %.2f\n", delta);
    x1 = (-num2 + (sqrt(delta)))/ (2 * num1);
    x2 = (-num2 - (sqrt(delta)))/ (2 * num1);
    printf("O valor de x1 = %.2f e x2 = %.2f\n", x1, x2);
    printf("------------------------------------------------------------------------\n");
    printf("Problema 3 - Adaptando o problema 1\n");
    int vertices2, faces2, arestas2;
    printf("Escreva o numero de faces do objeto geometrico\n");
    scanf("%i", &faces2);
    printf("Escreva o numero de arestas do objeto geometrico\n");
    scanf("%i", &arestas2);
    vertices2 = arestas2 + 2 - faces2;
    printf("O numero de faces e %i, de arestas e %i e de vertices e %i\n", faces2, arestas2, vertices2);
    printf("------------------------------------------------------------------------\n");
    printf("Problema 4 - Troca de valores\n");
    int num4 = 4, num5 = 7, temporario;
    printf("O X e igual a %i e o Y e igual a %i\n", num4, num5);
    temporario = num4;
    num4 = num5;
    num5 = temporario;
    printf("Trocou!\n");
    printf("Agora o X e %i e o Y e %i\n", num4, num5);
    printf("------------------------------------------------------------------------\n");
    return 0;
}
