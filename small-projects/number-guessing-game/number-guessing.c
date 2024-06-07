#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand(time(0));
    int random = (rand() % 100) + 1; // 1-100
    int input;
    int guesses = 0;
    printf("===NUMBER GUESSING GAME===\n");
    printf("Welcome to the Number Guessing Game!\nYour goal is to guess a number between 1 and 100.\nThroughout your guesses, you'll receive hints such as \"Too low!\" or \"Too high!\" ... Good luck :)\n");

    while (1)
    {
        printf("\nEnter a number between 1 and 100 or type 0 to exit:\n > ");
        scanf("%d", &input);

        if (input == random)
        {
            guesses += 1;
            printf("Nice, you got it right after %d guesses!", guesses);
            break;
        }

        else if (0 < input && input < random)
        {   
            guesses += 1;
            printf("Too low!");
        }

        else if (input > random)
        {
            guesses += 1;
            printf("Too high!");
        }

        else
        {
            break;
        }
    }
    

    return 0;
}