#include <stdio.h>
#include <string.h>

void sort(int[], int);
void printArray(int[], int);

int main()
{

    int array[] = {3, 2, 6, 7, 9, 1};
    int len = sizeof(array) / sizeof(array[0]);

    sort(array, len);
    printArray(array, len);

    return 0;
}

void sort(int array[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1; j++)
        {   

            // se o elemento atual é maior que o próximo, trocam de posição até que eventualmente o maior elemento seja o último da lista
            if (array[j] > array[j + 1])
            {
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