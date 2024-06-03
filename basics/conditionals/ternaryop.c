#include <stdio.h>
#include <stdbool.h>
/*
OPERADORES TERNÁRIOS
Útil para retornar valores diante de uma condição, de forma mais simplificada
*/
double findMin(double a, double b) {
    
    // (condição) ? a se for true : b se for falso
    return (a < b) ? a : b; 

}


int main() {

    double num1;
    double num2;

    printf("Enter a number: \n > ");
    scanf("%lf", &num1);

    printf("Enter another number: \n > ");
    scanf(" %lf", &num2);

    double min = findMin(num1, num2);
    printf("The lowest number between %.2lf and %.2lf is %.2lf", num1, num2, min);

    return 0;
}
