/*6) Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a) a idade desta pessoa baseada somente no ano;
b) quantos anos ela terá em 2050.*/

//inclusão de bibliotecas
#include <stdio.h>
#include <time.h>

int main()
{
    //inicialização de váriaveis
    int anoNascimento;

    //ponteiro para struct que armazena data e hora
    struct tm *dataAtual;

    //variável do tipo time_t para armazenar o tempo em segundos
    time_t segundos;

    //obtendo o tempo em segundos
    time(&segundos);

    /*para converter de segundos para o tempo local
    utilizamos a função localtime*/
    dataAtual = localtime(&segundos);

    //leitura dos dados
    printf("Digite o ano de nascimento da pessoa:\n");
    scanf("%d", &anoNascimento);

    //impressão e cálculo dos resultados  
    printf("A idade da pessoa e: %d", (dataAtual->tm_year+1900-anoNascimento));
    printf("\nA pessoa tera em 2050: %d", (2050-anoNascimento));
    return 0;
}
