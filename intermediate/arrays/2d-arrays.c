#include <stdio.h>
/*
2D ARRAYS
- É uma array contendo outras arrays
- Útil quando se precisa de uma tabela, matri, etc.

*/

int main()
{
    /*
    - adicionar [] para cada nível
    - SINTAXE: numbers[acessa array dentro da array][acessa elemento especifico desta array]
    - é preciso especificar o tamanho máximo de cada array
    - neste caso: [nº linhas (uma array inteira)][nº colunas (elementos de cada array)]
    */
    int numbers[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    // criação dinamica de matriz 3x3
    int A[3][3];

    // int = 4 Bytes -> 12 Bytes por array -> 36 Bytes no total

    // calculo do numero de linhas:
    // tamanho total da matriz / tamanho de uma linha (array) (Bytes)
    // neste caso: 36 / 12 = 3 linhas
    int rows = sizeof(A) / sizeof(A[0]);

    // calculo do numero de colunas:
    // tamanho de uma linha (array) / tamanho de um elemento (Bytes)
    // neste caso: 12 / 4 = 3 colunas
    int columns = sizeof(A[0]) / sizeof(A[0][0]);
    int element = 1;  // aij
    for (int i = 0; i < rows; i++) // i = linhas
    {
        for (int j = 0; j < columns; j++)  // j = colunas
        {
            A[i][j] = element;
            element += 1;
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}