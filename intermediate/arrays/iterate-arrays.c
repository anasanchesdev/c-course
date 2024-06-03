#include <stdio.h>

/*
-- Acessar valores de array em for loop --

[!] '\0' Indica o fim de uma string.
[!] sizeof(array) -> retorna o tamanho da array em Bytes
[!] Relembrar quantos Bytes cada tipo de dado ocupa em C:
- char:         1 Bytes
- short/int:    2 Bytes
- long int:     4 Bytes
- float:        4 Bytes
- double:       8 Bytes
- long double: 10 Bytes
[!] Para iterar pelo número correspondente de elementos é preciso dividir o valor total de Bytes da array pelo valor de apenas um elemento em Bytes.

double prices[] = {5.0, 10.0, 15.0}
for (...; sizeof(prices) / sizeofprices[0]; ...){...}

[!] Repare que sizeofprices[0] equivale ao tamanho em Bytes de um elemento qualquer de prices que, neste caso, será igual a 8 Bytes
[!] Resultado: sizeof(prices) / sizeofprices[0] = 24 / 8 = 3 iterações
*/

int main()
{

    char name[] = {'J', 'o', 'h', 'n', '\0'};
    int len = sizeof(name);
    printf("Number of letters: %d\n", len);
    for (int i = 0; i <= len - 1; i++)
    {
        printf("%c", name[i]);
    }

    return 0;
}
