
//4) Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: Área = π * R²

#include <stdio.h>
#include <math.h>
int main() {
    float raio;
    printf("Digite o RAIO do circulo:");
    scanf("%f", &raio);
    printf("A area deste circulo = %f \n", (M_PI *(pow(raio, 2))));
    return 0;
}
