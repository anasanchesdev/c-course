#include <stdio.h>
#include <stdbool.h> // necessário

int main(){

    /*
    __________________

    Operadores lógicos
    __________________

    AND - &&: retorna true somente se todas as condições forem verdadeiras.
    OR - ||: retorna true se pelo menos uma das condições for verdadeira.
    NOT - !: reverte o estado lógico da condição.
    
    */

    float temperature;
    bool rainy = false;

    printf("Enter today's temperature in Celsius:\n > ");
    scanf ("%f", &temperature);

    // &&! : and not
    if (temperature >= 0 && temperature <= 25 &&! rainy){  // não é válido: 0 <= temperature <= 10, não sei por quê!
        printf("Good weather.");
    }

    else if (temperature < 0 || temperature > 25 || rainy){
        printf("The weather is bad!");
    }

    return 0;
}
