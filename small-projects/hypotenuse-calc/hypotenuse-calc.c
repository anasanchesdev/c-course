#include <stdio.h>
#include <math.h>

int main(){
    double a;
    double b;
    double c;
    char unit[4];

    printf("Type in cathetus A:\n > ");
    scanf("%lf", &a);
    printf("Type in cathetus B:\n > ");
    scanf("%lf", &b);
    printf("Type in the unit for the cathetuses:\n > ");
    scanf("%s", &unit);

    c = sqrt(pow(a, 2) + pow(b, 2));

    printf("Hypotenuse = %.2lf%s", c, unit);

    return 0;
}
