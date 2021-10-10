//1) Faça um programa que receba três notas, calcule e mostre a média aritmética entre elas.

#include <stdio.h>
int main()
{
    //inicialização das variáveis
    int n1, n2, n3;

    //leitura das notas
    printf("Digite a primeira nota: \n");
    scanf("%d", &n1);
    printf("Digite a segunda nota: \n");
    scanf("%d", &n2);
    printf("Digite a terceira nota: \n");
    scanf("%d", &n3);

    //resultado da média aritmética
    printf("A media aritmetica dessa tres notas e: %d", ((n1+n2+n3)/3));
    return 0;
}
