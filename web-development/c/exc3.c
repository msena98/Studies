/*3) Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa.
(h2=c12+c22)*/

//inclusão das bibliotecas
#include <stdio.h>
#include <math.h>
int main()
{
    //inicialização das variáveis
    float c1, c2;

    //leitura dos dados
    printf("Digite o valor do cateto 1:\n");
    scanf("%f", &c1);
    printf("Digite o valor do cateto 2:\n");
    scanf("%f", &c2);

    //impressão do resultado
    printf("O valor da hipotenusa e: %f",sqrt(pow(c1, 2)+pow(c2, 2)));
    
    return 0;
}
