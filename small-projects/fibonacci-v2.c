/*
    Sequencia de Fibonacci: cada termo a partir do terceiro é a soma dos dois termos anteriores
    1, 1, 2, 3, 5, 8, ...
*/
#include <stdio.h>

// limite -> até que numero a sequencia vai ser calculada
unsigned char Fibonacci(unsigned char limite)
{
    char lista[100];
    unsigned char indice = 0, penultimo = 0, ultimo = 1, novo = 0;
    lista[indice] = penultimo; // seta o primeiro item da lista = 1
    indice++; // acresce indice em 1 (indice = 1)
    lista[indice] = ultimo; // seta o segundo item da lista = 1
    while (novo < limite)
    {
        novo = penultimo + ultimo;
        lista[indice] = novo;
        penultimo = ultimo;
        ultimo = novo;
        indice++;
    }
    return (indice);
}

void main()
{
    Fibonacci(40);
}
