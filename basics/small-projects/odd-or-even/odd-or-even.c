#include <stdio.h>


int main(){

    int num;
    char odd[3] = "Odd";
    char even[4] = "Even";

    
    printf("Enter a integer number: \n > ");
    scanf("%d", &num);

    char result[4] = (num % 2 == 0) ? "Odd" : "Even";

    printf("%s", result);


    return 0;
}
