/*5) Faça um programa que solicite um número positivo e maior que zero, calcule e mostre:
a) o número digitado ao quadrado;
b) o número digitado ao cubo;
c) a raiz quadrada do número digitado;
d) a raiz cúbica do número digitado.*/

#include <stdio.h>
#include <math.h>

int main()
{
    //inicialização das variáveis
    float n;

    //leitura dos dados
    printf("Digite um numero positivo e maior que zero:\n");
    scanf("%f", &n);

    //impressão dos resultados
    printf("a) o numero digitado ao quadrado: %f\n", pow(n,2));
    printf("a) o numero digitado ao cubo: %f\n", pow(n,3));
    printf("a) a raiz quadrada do numero digitado: %f\n", sqrt(n));
    printf("a) a raiz cubica do numero digitado: %f\n", cbrt(n));
    return 0;
}
