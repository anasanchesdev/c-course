#include <stdio.h>

/*
= ARRAYS =
- Lista contendo vários elementos >do mesmo tipo<.
Sintaxe: tipo var[número de elementos*] = {x, y, z, w}
*opcional
[!] Uma string é um conjunto de caractéres em uma array
[!] Para acessar cada elemento de uma array, é preciso referir-se ao índice de cada um. Índices começam no 0.
Sintaxe: var[int]
*/

int main()
{
    //            0  1  2  3  4
    int nums[] = {1, 2, 3, 4, 5};
    char name[] = {'j', 'o', 'h', 'n'};

    printf("%d\n", nums[0]);
    nums[0] = nums[4];
    printf("%d", nums[0]);

    return 0;
}