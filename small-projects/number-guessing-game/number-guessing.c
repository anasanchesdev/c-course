#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand(time(0));
    int random = (rand() % 100) + 1; // 1-100
    int input;
    printf("===NUMBER GUESSING GAME===\n");
    printf("Welcome to the Number Guessing Game!\nYour goal is to guess a number between 1 and 100.\nThroughout your guesses, you'll receive hints such as \"Too low!\" or \"Too high!\" ... Good luck :)");


    return 0;
}