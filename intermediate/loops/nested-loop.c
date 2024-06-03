#include <stdio.h>

// loop dentro de loop
// Esse programa printa um quadrado/retangulo de acordo com o número de linhas e colunas dado

int main()
{
    int rows;
    int columns;
    char symbol;

    printf("Enter the number of rows:\n > ");
    scanf("%d", &rows);
    printf("Enter the number of columns:\n > ");
    scanf(" %d", &columns);
    printf("Enter a symbol:\n > ");
    scanf(" %c", &symbol);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }
        
    return 0;
}
