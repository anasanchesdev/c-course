#include <stdio.h>

int main(){

    float weight;
    printf("Type in your weight (in Kg):\n > ");
    scanf("%f", &weight);
    
    float height;
    printf("Type in your height (in cm):\n > ");
    scanf("%f", &height);

    float bmi = weight / pow(height, 2);
    printf("power: %d", pow(height, 2));
    printf("Your BMI is %.2f", bmi);

    return 0;
}