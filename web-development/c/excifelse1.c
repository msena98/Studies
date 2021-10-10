/*1) Escreva um programa que leia um nome e informe o tamanho deste nome, classificando-o como “nome curto”,
se possuir menos que 10 caracteres.*/

//inclusao bibliotecas
#include <stdio.h>

//funcao principal
int main()
{
    //incializacao variaveis
    char nome[40];

    //leitura dos dados
    printf("Digite o nome:\n");
    gets(nome);

    //avaliacao dos dados
    if (strlen(nome)<10)
    {
        //impressao do resultado (verdadeiro)
        printf("Nome curto!");
    }else
    {
        //impressao do resultado (falso)
        printf("Nome NAO e curto!");
    }
    
    return 0;
}
