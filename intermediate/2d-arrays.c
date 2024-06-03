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
    - primeiro [] -> matriz mãe; segundo, terceiro, ... [] -> matrizes subsequentes
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
    int element = 1;  // aij
    for (int i = 0; i <= 2; i++) // i = linhas
    {
        for (int j = 0; j <= 2; j++)  // j = colunas
        {
            A[i][j] = element;
            element += 1;
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }


    return 0;
}