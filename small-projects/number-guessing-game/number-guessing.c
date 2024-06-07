#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    // usa o tempo atual como seed 
    srand(time(0));

    // numero aleatório entre 1 e 100
    int random = (rand() % 100) + 1;

    // número adivinhado
    int input;

    // número de tentativas
    int guesses = 0;
    
    printf("===NUMBER GUESSING GAME===\n");
    printf("Welcome to the Number Guessing Game!\nYour goal is to guess a number between 1 and 100.\nThroughout your guesses, you'll receive hints such as \"Too low!\" or \"Too high!\" ... Good luck :)\n");

    while (1)
    {
        printf("\nEnter a number between 1 and 100 or type 0 to exit:\n > ");
        scanf("%d", &input);

        if (input == random)
        {
            printf("Nice, you got it right after %d guesses!", guesses + 1);
            break;
        }

        else if (0 < input && input < random)
        {   
            printf("Too low!");
        }

        else if (input > random)
        {
            printf("Too high!");
        }

        else
        {
            break;
        }

        guesses += 1;
    }
    

    return 0;
}