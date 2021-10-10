/******************************************************************************
4) Faça um programa que leia um vetor de inteiros, positivos ou negativos, com 8 posições. 
Crie e mostre dois vetores resultantes, um contendo somente os números positivos e o outro somente os negativos.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int vet[8], positivos[8]={0,0,0,0,0,0,0,0}, negativos[8]={0,0,0,0,0,0,0,0}, i, x, aux;

    for (i = 0; i < 8; i++)
    {
        printf("\nDigite um numero: ");
        scanf("%d", &vet[i]);
        fflush(stdin);
    }
    for ( i = 0; i < 8; i++)
    {
        if (vet[i] > 0){
            positivos[i] = vet[i];
        }else if(vet[i]<0){
            negativos[i] = vet[i];
        }else{}
    }
    
    for (i = 0; i <8; i++)
    {
        //sei que nao foi pedido mas quis ordenar em crescente
        for (x = i+1; x<8; x++)
        {
            if(positivos[i]>positivos[x]){aux=positivos[i]; positivos[i]=positivos[x]; positivos[x]=aux;}
            if(negativos[i]>negativos[x]){aux=negativos[i]; negativos[i]=negativos[x]; negativos[x]=aux;}
        }
        
    }
    
    printf("\nPositivos = ");
    for (i = 0; i<8; i++)
    {
       if (positivos[i]>0)
       {
            printf(" %d", positivos[i]);
       }else{}
       
    }
    printf("\nNegativos = ");
    for (i = 0; i<8; i++)
    {
        if (negativos[i]<0)
       {
            printf(" %d", negativos[i]);
       }else{}
    }
    
    return 0;
}