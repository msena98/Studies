/*3) Construa um programa que leia o nome e o sexo de uma pessoa e construa e apresente uma string com o texto
“BOM DIA SR. <NOME>” caso o sexo seja masculinho, e “BOM DIA SRA. <NOME>” caso o sexo seja feminino.*/

//inclusao biblioteca
#include <stdio.h>

//funcao principal
int main()
{
    //inicializacao variaveis
    char nome[40], sexo[20], frase[100], *masculino="masculino", *feminino="feminino";

    //leitura dos dados
    printf("Digite seu nome:\n");
    gets(nome);
    fflush(stdin);
    printf("Voce se identifica como sexo FEMININO ou MASCULINO?\n");
    gets(sexo);

    //analise de dados
    if (strcmp(sexo, feminino))
    {
        //impressao resultado (verdadeiro)
        sprintf(frase, "\nBOM DIA SR. %s", nome);
        puts(frase);
    }else
    {
        //impressao resultado (falso)
        sprintf(frase, "\nBOM DIA SRA. %s", nome);
        puts(frase);
    }
    
    
    return 0;
}
