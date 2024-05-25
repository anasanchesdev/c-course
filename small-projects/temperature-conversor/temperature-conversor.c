#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float initial_temp;
    float converted_temp;

    printf("\nEnter the temperatures unit (F) (C):\n > ");
    scanf("%c", &unit);
    unit = toupper(unit);

    printf("Enter the temperature (numerical values only)\n > ");
    scanf("%f", &initial_temp);

    switch(unit) {
        case 'C':
            converted_temp = 1.8 * initial_temp + 32; // c to f
            printf("%.2fC = %.2fF", initial_temp, converted_temp);
            break;
        case 'F':
            converted_temp = (initial_temp - 32 ) / 1.8; // f to c
            printf("%.2fF = %.2fC", initial_temp, converted_temp);
            break;
        default:
            printf("\nYou must enter a valid unit. Try again.");
    }

    return 0;
}
