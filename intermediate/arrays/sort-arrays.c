#include <stdio.h>
#include <string.h>

void sort(int[], int);
void printArray(int[], int);

int main()
{

    int array[] = {3, 2, 6, 7, 9, 1}; // é possível usar arrays de caracteres também
    int len = sizeof(array) / sizeof(array[0]);

    sort(array, len);
    printArray(array, len);

    return 0;
}
// len = 6 (len - 1 = 5 -> índices)
void sort(int array[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1; j++)
        {   

            // se o elemento atual j é maior que o próximo, trocam de posição até que eventualmente o maior elemento seja o último da lista
            // ao trocar > por <, a lista é ordenada de maneira decrescente -> os menores números passarão a ser jogados para a direita
            if (array[j] > array[j + 1])
            {
                // j é guardado em uma variável temporária
                // j assume o valor do próximo elemento
                // o próximo elemento troca de lugar com j
                int temp_element = array[j]; 
                array[j] = array[j + 1];
                array[j + 1] = temp_element;
            }
        }
    }
}

void printArray(int array[], int len)
{
    for(int i = 0; i < len; i++)
    {
        printf("%d", array[i]);
    }
}