#include <stdio.h>


int main(){

    int x;
    int y;

    printf("Type in an integer number:\n > ");
    scanf("%d", &x);
    printf("Type in another integer number:\n > ");
    scanf("%d", &y);

    int sum = x + y;
    printf("%d + %d = %d", x, y, sum);

    return 0;
}