/******************************************************************************
4) Faça um programa que leia um vetor de inteiros, positivos ou negativos, com 8 posições.
Crie e mostre dois vetores resultantes, um contendo somente os números positivos e o outro somente os negativos.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int vet[8], positivos[8], negativos[8], i, posCounter=0, negCounter=0;

    for (i = 0; i < 8; i++)
    {
        printf("\nDigite um numero: ");
        scanf("%i", &vet[i]);
        fflush(stdin);
    }
    for ( i = 0; i < 8; i++)
    {
        if (vet[i] < 0)
        {
            negativos[i] = vet[i];
            negCounter++;
        }
    }
    for (i = 0; i < 8; i++)
    {
        if (vet[i]>0 && vet[i]!=0)
        {
            positivos[i] = vet[i];
            posCounter++;
        }
    }
    /*for (i = 0; i < 8; i++)
    {
        printf(" %d", vet[i]);
    }*/

    printf("\nPositivos = ");
    for (i = 0; i<posCounter; i++)
    {
        printf(" %d", positivos[i]);
    }
    printf("\nNegativos = ");
    for (i = 0; i<negCounter; i++)
    {
        printf(" %d", negativos[i]);
    }

    return 0;
}
