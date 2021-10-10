/*2) Construa um programa que leia dois nomes e diga se ambos têm o mesmo tamanho. Caso não tenham, diga o
tamanho de cada um deles.*/

//inclusao bibliotecas
#include <stdio.h>

//funcao principal
int main()
{
    //incializacao variaveis
    char nome[40], nome2[40];

    //leitura dos dados
    printf("Digite o nome:\n");
    gets(nome);
    fflush(stdin);
    printf("Digite o nome2:\n");
    gets(nome2);

    //avaliacao dos dados
    if (strlen(nome)==strlen(nome2))
    {
        //impressao do resultado (verdadeiro)
        printf("Possuem o mesmo nmro de caracteres!");
    }else
    {
        //impressao do resultado (falso)
        printf("Nome 1 tamanho: %d", strlen(nome));
        printf("\nNome 2 tamanho: %d", strlen(nome2));
    }
    
    return 0;
}
