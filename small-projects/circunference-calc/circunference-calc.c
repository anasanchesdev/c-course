#include <stdio.h>
#include <math.h>

int main(){

    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nType in the radius of the circle (in cm):\n > ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * pow(radius, 2);

    printf("\nCircumference = %.2lfcm\nArea = %.2lfcm^2\n", circumference, area);

    return 0;
}
