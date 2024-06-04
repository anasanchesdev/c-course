#include <stdio.h>
#include <string.h>


int main()
{

    // VALORES MUTÁVEIS
    // char x = 'X';
    // char y = 'Y';
    // char temp;  // variável temporária

    // temp = x;
    // x = y;
    // y = temp;
    // printf("\nx = %c\ny = %c", x, y);

    // VALORES IMUTÁVEIS (string)
    // [!] comportamento indesejado em strcpy se a segunda string for maior que a primeira string
    // [!] solução: colocar o mesmo tamanho ao declarar as strings
    char x[15] = "water";
    char y[15] = "lemonade";
    char temp[15];

    // necessário utilizar strcpy
    strcpy(temp, x);
    printf("%s", temp);
    strcpy(x, y);
    strcpy(y, temp);

    printf("\nx = %s\ny = %s", x, y);

    return 0;
}
