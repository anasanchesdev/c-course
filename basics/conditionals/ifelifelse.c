#include <stdio.h>
/*
if-else-elif
>, >=, <, <=, ==, !=
*/
// checks if you can ride an amusement park attraction
int main(){

    double height;

    printf("Enter you height in cm:\n > ");
    scanf("%lf", &height);

    if (height >= 150) {
        printf("You can ride the roller coaster! :)");
    }
    else if (height <= 0) {
        printf("Hey, are you a dwarf?!");
    }
    else {
        printf("I'm sorry! You don't have the minimum height to ride the roller coaster. :(");
    }

    return 0;
}
