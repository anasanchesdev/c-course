#include <stdio.h>
#include <ctype.h>

int main()
{
    char guess;
    int right_guesses;
    int i = 0;

    char questions[][100] = 
    {
        "1. What does \"int\" define?:\n > ",
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
    char answers[][6] = {"A", "A", "B"};

    int num_of_questions = sizeof(questions)/sizeof(questions[0]);
    
    while (i < num_of_questions)
    {
        printf("%s\n%s", questions[0], options[0]);
        printf("\n > ");
        scanf("%c", &guess);
    }

    return 0;
}
