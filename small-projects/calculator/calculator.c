#include <stdio.h>
#include <math.h>

int main(){

    char operator;
    double a;
    double b;
    double result; 
    printf("Instructions:\n| + to sum\n| - to subtract\n| * to multiply\n| / to divide\n");
    printf("Number 1:\n > ");
    scanf("%lf", &a);

    printf("Operator:\n > ");
    scanf(" %c", &operator);

    printf("Number 2:\n > ");
    scanf("%lf", &b);

    switch(operator){
        case '+':
            result = a + b;
            printf("%lf + %lf = %lf", a , b, result);
            break;
        case '-':
            result = a - b;
            printf("%lf - %lf = %lf", a , b, result);
            break;
        case '*':
            result = a * b;
            printf("%lf * %lf = %lf", a , b, result);
            break;
        case '/':
            result = a / b;
            printf("%lf / %lf = %lf", a , b, result);
            break;
        default:
            printf("You must type a valid operator. Try again.");
    }   

    return 0;
}
