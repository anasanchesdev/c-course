#include <stdio.h>

int main() {
    
    float weight;
    float height;
    float bmi;

    printf("Type in your weight (in Kg):\n > ");
    scanf("%f", &weight);
    
    printf("Type in your height (in m):\n > ");
    scanf(" %f", &height);

    bmi = weight / (height * height);
    printf("%f", bmi);

    return 0;
}