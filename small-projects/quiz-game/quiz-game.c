#include <stdio.h>
#include <ctype.h>

int main()
{
    char guess;
    int right_guesses = 0;

    char questions[][100] = 
    {
        "1. What does \"int\" define?",
        "2. What is the function to display values on the terminal?",
        "3. Loop structure?"
        ""
    };
    char options[][100] = 
    {
        "A. Integer value\nB. Float number",
        "A. printf()\nB. scanf()",
        "A. switch()\nB. for()"
    };
    char answers[100] = {'A', 'A', 'B'};

    int num_of_questions = sizeof(questions)/sizeof(questions[0]);
    
    for (int i = 0; i < num_of_questions; i++)
    {
        printf("\n\n%s\n%s", questions[i], options[i]);
        printf("\n > ");
        scanf(" %c", &guess);
        guess = toupper(guess);
        if (guess == answers[i])
        {
            printf("\nYou got it right!");
            right_guesses += 1;
        }
        else
        {
            printf("\nThat's wrong.");
        }
    }

    printf("\n\nCongratulations! You finished the Quiz Game!");
    printf("\nYour score is %d/%d", right_guesses, num_of_questions);

    return 0;
}
