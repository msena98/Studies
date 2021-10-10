/*2) Faça um programa que recebe o nome de um funcionário, seu salário, e o percentual de aumento que ele irá
receber. Calcule e mostre o nome do funcionário, o valor do aumento e o novo salário.*/

#include <stdio.h>
int main()
{
    //inicialização das variáveis
    char nomeFuncionario;
    int salarioFuncionario, aumentoSalario;

    //leitura dos dados
    
    printf("Digite o nome do funcionario:\n");
    gets(&nomeFuncionario);
    printf("Digite o salario do funcionario:\n"),
    scanf("%d", &salarioFuncionario);
    printf("Digite o aumento do salario(%%):\n");
    scanf("%d", &aumentoSalario);

    //impressão dos novos dados
    printf("\n");
    puts(&nomeFuncionario);
    printf("Aumento salario: %d \nNovo salario: %d", ((salarioFuncionario/100)*aumentoSalario), (salarioFuncionario+((salarioFuncionario/100)*aumentoSalario)));

    return 0;
}
