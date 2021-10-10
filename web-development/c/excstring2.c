/*2. Faça um programa que lê os nomes de três pessoas e imprime a
frase abaixo através de uma única string, sem utilizar a função
sprintf.
“ NOME 1, NOME 2 e NOME 3 são colegas de faculdade. ”*/

//inclusão de bibliotecas
#include <stdio.h>

int main()
{
    //incialização variáveis
    char nome[40], nome2[40], nome3[40];

    //leitura dos dados
    printf("Diga o primeiro nome:");
    gets(nome);
    fflush(stdin);
    printf("Diga o segundo nome:");
    gets(nome2);
    fflush(stdin);
    printf("Diga o terceiro nome:");
    gets(nome3);
    fflush(stdin);
    
    //impressão dos dados
    printf("%s, %s e %s sao colegas de faculdade.", nome, nome2, nome3);
    return 0;
}
