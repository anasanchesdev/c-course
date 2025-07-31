#include <stdio.h>
#include <math.h>

void main()
{
    float raio, area;
    printf("Insira o raio da esfera:\n > ");
    scanf("%f", &raio);
    area = 4*3.1415*pow(raio, 2); //4pir²
    printf("A area da esfera é igual a %.2f", area);
}
