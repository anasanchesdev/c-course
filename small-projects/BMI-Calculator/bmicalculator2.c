#include <stdio.h>

int main(){

    float weight;
    printf("Type in your weight (in Kg):\n > ");
    scanf("%f", &weight);
    
    float height;
    printf("Type in your height (in m):\n > ");
    scanf("%f", &height);

    float bmi = weight / (height * height);


    if (bmi < 18.5) {
        printf("\nYour BMI is %.2f. Weight status: Underweight", bmi);
    }

    else if (bmi < 25) {
        printf("\nYour BMI is %.2f. Weight status: Healthy", bmi);
    }

    else if (bmi < 30) {
        printf("\nYour BMI is %.2f. Weight status: Overweight", bmi);
    }

    else if (bmi < 35) {
        printf("\nYour BMI is %.2f. Weight status: Obesity", bmi);
    }

    else {
        printf("\nYour BMI is %.2f. Weight status: Extreme obesity", bmi);
    }

    return 0;
}