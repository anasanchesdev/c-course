#include <stdio.h>

int main(){

    float weight;
    printf("Type in your weight (in Kg):\n > ");
    scanf("%f", &weight);
    
    float height;
    printf("Type in your height (in m):\n > ");
    scanf("%f", &height);

    float bmi = weight / (height * height);
    printf("Your BMI is %.2f", bmi);

    return 0;
}