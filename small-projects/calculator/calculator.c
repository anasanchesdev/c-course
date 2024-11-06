#include <stdio.h>
#include <math.h>

int main(){

    char operator;
    int run = 1;
    double a, b, result; 
    printf("Instructions:\n| + to sum\n| - to subtract\n| * to multiply\n| / to divide\n| e to exit\n");
    while (run)
    {
        printf("Number 1:\n > ");
        scanf("%lf", &a);
    
        printf("Operator:\n > ");
        scanf(" %c", &operator);
    
        printf("Number 2:\n > ");
        scanf("%lf", &b);
    
        switch(operator){
            case 'e':
                printf("Program finished.");
                run = 0;
                break;
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
    }
    return 0;
}

    return 0;
}
