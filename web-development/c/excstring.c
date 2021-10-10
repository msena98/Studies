/*1. Faça um programa que lê os nomes de duas pessoas e suas
idades, e imprime as frases abaixo através de uma única string,
utilizando a formatação apresentada e os dados lidos.
“ NOME 1 tem ___ anos e NOME 2 tem ___ anos.
Seus nomes somam ___ caracteres. ” */

//inclusão das bibliotecas
#include <stdio.h>
int main()
{
    //inicialização das variáveis
    char nome[40], nome2[40], frase[200];
    int idade, idade2;

    //leitura dos dados
    printf(" Digite o nome 1: \n");
    gets(nome);
    printf(" Digite a idade 1: \n");
    scanf("%i", &idade);
    fflush(stdin);
    printf(" Digite o nome 2: \n");
    gets(nome2);
    printf(" Digite a idade 2: \n");
    scanf("%i", &idade2);

    //união em uma só string
    sprintf(frase, "%s tem %d anos e %s tem %d anos.\nSeus nomes somam %d caracteres.", nome, idade, nome2,
     idade2, (strlen(nome)+strlen(nome2)));

     //impressão dos dados
    puts(frase);
    return 0;
}
