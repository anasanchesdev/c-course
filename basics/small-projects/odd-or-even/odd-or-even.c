#include <stdio.h>

int main(){
    // odd -> impar , even -> par
    int num;
    
    printf("Enter an integer number: \n > ");
    scanf("%d", &num);

    int sei = (num % 2 == 0) ? "Even" : "Odd";

    printf("%d is %s", num, sei);

    return 0;
}
