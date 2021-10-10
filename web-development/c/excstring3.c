/*3. Faça um programa que lê o nome, a idade, e o endereço (rua e
número) de uma pessoa, e imprime as frases abaixo através de
uma única string, usando a mesma formatação.
“ Nome: _____________________
 Idade: _______
 Endereço: _______________________, ____. ”*/

//inclusao de bibliotecas
#include <stdio.h>

int main()
{
    //inicialização variáveis
    char nome[40], rua[40], frase[200];
    int idade, numeroCasa;

    //leitura dos dados
    printf("Digite o nome:\n");
    gets(nome);
    fflush(stdin);
    printf("Digite a idade:\n");
    scanf("%d", &idade);
    fflush(stdin);
    printf("Digite o nome da rua:\n");
    gets(rua);
    fflush(stdin);
    printf("Digite o numero da casa:\n");
    scanf("%d", &numeroCasa);
    //unindo em 1 string
    sprintf(frase, "\nNome: %s, \nIdade: %d, \nEndereco: %s, %d.\n", nome, idade, rua, numeroCasa);

    //impressão dos dados
    puts(frase);
    return 0;
}
