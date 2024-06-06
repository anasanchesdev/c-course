#include <stdio.h>
#include <conio.h> // getch()
// necessários
#include <stdlib.h> 
#include <time.h>

/*
Pseudo-números aleatórios -> valores estatiticamente aleatórios
*/

int main()
{
    srand(time(0));  // gera novos números a cada vez

    // gera um número aleatório entre 1 e 10
    // % permite estabelecer a abrangencia
    int number1; // 0 - 32.767 por padrão
    int input;

    while (1)
    {
        printf("- Press Enter to generate a random number between 1 and 10\n- Press anything else to exit the code\n");
        input = getch(); // retorna input do usuário no terminal
        if (input == 13) // Enter em decimal (ASCII)
        {
            number1 = (rand() % 10) + 1;
            printf("%d\n", number1);
        }
        else
        {
            break;
        }
        
    }

    return 0;
}