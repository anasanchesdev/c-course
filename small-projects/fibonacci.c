/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    /*
    Sequencia de Fibonacci: cada termo a partir do terceiro é a soma dos dois termos anteriores
    1, 1, 2, 3, 5, 8, ...
    n-> numero de numeros a serem calculados pela sequencia de Fibonacci
    i-> controla o numero de iterações do laço for para o calculo da sequencia
    */
    int n, i;
    unsigned long long primeiro = 1, segundo = 1, proximo;
    
    printf("Digite um numero positivo:\n > ");
    scanf("%d", &n);
    
    if (n <= 0)
    {
        printf("O numero deve ser positivo!");
    }
    else if (n == 1) // se n for 1, a sequencia de fibonacci é 1
    {
        printf("Sequencia de Fibonacci: %llu\n", primeiro);
    }
    else // se n for maior que um, já mostra os dois primeiros valores (1 e 1)
    {
        printf("Sequencia de Fibonacci: %llu, %llu", primeiro, segundo);
    }
    
    for (i=3; i<=n; i++)
    {
        proximo = primeiro + segundo;
        printf(", %llu", proximo);
        primeiro = segundo;
        segundo = proximo;
    }
    printf("\n");
    
}