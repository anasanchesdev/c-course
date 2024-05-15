#include <stdio.h>
#include <math.h>


int main(){

    double bill;
    double num_of_people;
    double tip_perc;
    double tip;
    double split_bill;

    printf("Enter the bill value:\n > ");
    scanf("%lf", &bill);
    printf("Enter the number of people to split the bill:\n > ");
    scanf("%lf", &num_of_people);
    printf("Enter the tip percentage:\n > ");
    scanf("%lf", &tip_perc);

    tip = tip_perc / 100 * bill;
    bill += tip;
    split_bill = bill / num_of_people;
    printf("Each one should pay %.2lf$", split_bill);

    return 0;
}
