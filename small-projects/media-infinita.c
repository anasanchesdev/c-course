#include <stdio.h>

int main()
{

    float soma = 0;
    float numero_atual = 0;
    int quantidade_numeros = 0;
    int run = 1;
    float media;
    char terminar;
    
    while (run)
    {
        printf("\nDigite um numero:\n > ");
        scanf("%f", &numero_atual);
        soma += numero_atual;
        quantidade_numeros++;
        
        printf("Deseja calcular a média? (s/n)\n > ");
        scanf(" %c", &terminar);
        
        if (terminar == 's')
        {
            media = soma / quantidade_numeros;
            printf("\nA média é %.3f", media);
            run = 0;
        }
        
    }
    
    
    return 0;
}
