#include <stdio.h>

/*
For loop - repete código por uma contagem determinada

Sintaxe:
for(contador inicial = i -> index; repetir enquanto a condição for satisfeita; muda o valor do contador a cada interação -> i +/-*= x)
{
    código a ser repetido;
}

*/

int main() 
{
    // i++: incrementa 1 a cada itr
    for(int i = 1; i <= 10; i++) 
    {
        printf("%d\n", i);
    }

    // i--: decrementa 1 a cada itr
    for(int i = 10; i >= 1; i--) 
    {
        printf("%d\n", i);
    }

    return 0;
}