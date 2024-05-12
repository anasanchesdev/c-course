#include <stdio.h>

int main(){

    int age;
    printf("Type in your age:\n > ");
    scanf("%d", &age);

    int years_left = 90 - age;
    int months_left = years_left * 12;
    int weeks_left = years_left * 52;
    int days_left = years_left * 365;

    printf("\nIf you lived until 90 years, you would have: %d years, %d months, %d weeks and %d days left.\n", years_left, months_left, weeks_left, days_left);

    return 0;
}
