/*8) Crie um programa que organize os dados em uma tabela conforme o exemplo a seguir. Os dados referentes à
coluna “Número de Votos” devem ser informados via teclado. O “Percentual de Votos” e o “Total de Votos”
devem ser calculados. Procure usar somente %f, %s e %d para definir o formato e a posição dos dados. Não
tente preencher os espaços com brancos.
Por exemplo, use printf ("%-20d, VotosJoao); */

#include <stdio.h>
#include <math.h>

int main()
{
    //criação das variáveis votos
    float votosJoao, votosPedro, votosJose;

    //leitura dos votos via teclado
    printf("Digite o numero de votos de Joao: \n");
    scanf("%f", &votosJoao);
    printf("Digite o numero de votos de Pedro: \n");
    scanf("%f", &votosPedro);
    printf("Digite o numero de votos de Jose: \n");
    scanf("%f", &votosJose);

    //impressão dos resultados
    printf("________________________________________________________________");
    printf("\n|%-15s|%-20s|%25s|", "Candidato", "Numero de Votos", "Percentual de Votos");
    printf("\n|_______________|____________________|_________________________|");
    printf("\n|%-15s|%-20.f|%24.f%%|", "Joao", votosJoao, (votosJoao/((votosJoao+votosPedro+votosJose)/100)));
    printf("\n|%-15s|%-20.f|%24.f%%|", "Pedro", votosPedro, (votosPedro/((votosJoao+votosPedro+votosJose)/100)));
    printf("\n|%-15s|%-20.f|%24.f%%|", "Jose", votosJose, (votosJose/((votosJoao+votosPedro+votosJose)/100)));
    printf("\n|_______________|____________________|_________________________|");
    printf("\n|%36s|%-25.f|", "Total de Votos", votosJoao+votosPedro+votosJose);
    printf("\n|______________________________________________________________|");
    return 0;
}

