/*4) Fa�a um programa que receba do usu�rio uma matriz 10x10 de inteiro e depois fa�a:
a. Troque a segunda linha e a oitava;
b. Troque a sexta coluna e a nona;
c. Mostre como ficou a matriz.*/

  int matrizA[10][10], temp;
    int i,j;

    //preenchendo a matriz
    for(int k=0;k<10;k++)
    {
        for(int l=0;l<10;l++)
        {
            matrizA[k][l] = k+l;
        }
    }

    for(i=0;i<10;i++)
    {
        temp = matrizA[1][i];
        matrizA[1][i] = matrizA[7][i];
        matrizA[7][i] = temp;
    }

    for(j=0;j<10;j++)
    {
        temp = matrizA[j][3];
        matrizA[j][3] = matrizA[j][9];
        matrizA[j][9] = temp;
    }

    //imprimindo
    for(int k=0;k<10;k++)
    {
        for(int l=0;l<10;l++)
        {
            printf("%d ", matrizA[k][l]);
        }
        printf("\n");
    }
