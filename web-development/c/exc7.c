/*7) O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do
distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que recebe o preço de fábrica de
um veículo, o percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre:
a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o preço final do veículo.*/

//inclusão das bibliotecas
#include <stdio.h>

int main()
{
    //inicialização das variáveis
    float precoVeiculoFabrica, percentualLucro, percentualImpostos;

    //leitura dos dados
    printf("Digite o preço de fabrica do veiculo:\n");
    scanf("%f", &precoVeiculoFabrica);
    printf("Digite o percentual de lucro do distribuidor:\n");
    scanf("%f", &percentualLucro);
    printf("Digite o percentual de impostos do veiculo:\n");
    scanf("%f", &percentualImpostos);

    //impressão dos resultados
    printf("\na) o valor correspondente ao lucro do distribuidor: %2.f", (precoVeiculoFabrica/100)*percentualLucro);
    printf("\nb) o valor correspondente aos impostos: %2.f", (precoVeiculoFabrica/100)*percentualImpostos);
    printf("\nc) o valor final do veiculo: %2.f", precoVeiculoFabrica+((precoVeiculoFabrica/100)*percentualLucro)+(precoVeiculoFabrica/100)*percentualImpostos);
    return 0;
}
