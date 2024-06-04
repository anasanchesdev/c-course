#include <stdio.h>
#include <string.h>

/*
ARRAY DE STRINGS
- Como cada string é um conjunto de caracteres em uma array -> strings são arrays
- Para guardar strings dentro de arrays, basta usar a mesma síntaxe de "2d-arrays"
- É como se fosse 2D arrays
- [!] Strings são imutáveis

*/

int main()
{
    // array de array de caracteres
    char foods[][10] = {"Pasta", "Rice", "Salad"};
    // foods[0] = "OK"; -> strings são imutáveis diretamente
    // strcpy(str1, str2) : copia o valor de str2 para str1 -> alternativa

    // - Uma forma de alterar valores de arrays de strings é utilizando strcpy():
    strcpy(foods[0], "Apple");

    // - Para printar uma array de strings utiliza-se o for loop:
    for (int i = 0; i < sizeof(foods)/sizeof(foods[0]); i++)
    {
        printf("%s\n", foods[i]);
    }

    return 0;
}
