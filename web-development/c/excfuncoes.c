/*le_vet( ) - função que faz a leitura de um vetor de números inteiros. Esta função deve poder fazer a leitura de um vetor de inteiros de qualquer tamanho. Para isso ela deverá receber, por parâmetro,
 um vetor de inteiros e a quantidade de elementos do vetor.
 intercala_vet( ) - função que intercala os elementos de dois vetores de inteiros preenchendo um terceiro vetor que possui a quantidade exata de elementos resultante da soma dos elementos dos dois primeiros vetores. 
 Esta função deverá receber, por parâmetro, os dois vetores de inteiros já preenchidos, a quantidade de elementos de cada um, além de outros parâmetros que julgar necessários.
imprime_vet( ) - função que imprime um vetor de inteiros de qualquer tamanho. Ela deverá receber, por parâmetro, 
um vetor de inteiros e a quantidade de elementos do vetor.*/
#include <stdio.h>

void leVetor(int vetor[], int tamanho_vetor);
void imprimeVetor(int vetor[], int tamanho_vetor);
void concatenaVetor(int vetor1[], int vetor2[], int vetor3[], int tamanho_vetor1, int tamanho_vetor2);

void leVetor(int vetor[], int tamanho_vetor){
    for (int i=0; i<tamanho_vetor; i++)
    {
        printf("Digite o valor da posição %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }
}
void imprimeVetor(int vetor[], int tamanho_vetor){
    for (int i=0; i<tamanho_vetor; i++)
    {
        printf("|%d|", vetor[i]);
    }
}
void concatenaVetor(int vetor1[], int vetor2[], int vetor3[], int tamanho_vetor1, int tamanho_vetor2){
    int ultima_posicao, z=0;
    for (int i=0; i <tamanho_vetor1; i++)
    {
        vetor3[i]=vetor1[i];
        ultima_posicao = i;
    }
    for (int i=ultima_posicao+1; i <(ultima_posicao+1)+tamanho_vetor2; i++)
    {
        vetor3[i]=vetor2[z];
        z++;
    }
}

int main()
{
    int tamanho_vetor1, tamanho_vetor2, vetor1[tamanho_vetor1], vetor2[tamanho_vetor2];
    printf("Digite o tamanho do vetor1 a ser lido: ");
    scanf("%d", &tamanho_vetor1);
    leVetor(vetor1, tamanho_vetor1);
    printf("Digite o tamanho do vetor2 a ser lido: ");
    scanf("%d", &tamanho_vetor2);
    leVetor(vetor2, tamanho_vetor2);
    int vetor3[tamanho_vetor1+tamanho_vetor2];
    concatenaVetor(vetor1, vetor2, vetor3, tamanho_vetor1, tamanho_vetor2);
    printf("Vetor1 e Vetor2 concatenados: ");
    imprimeVetor(vetor3, (tamanho_vetor1+tamanho_vetor2));
}