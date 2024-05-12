#include <stdio.h>
#include <math.h> // necessário

int main(){

    const float PI = 3.141;
    
    double a = pow(4, 0.5); // potencia
    double b = sqrt(9);     // raiz quadrada
    int c = round(PI);      // arredondar para número inteiro
    int d = ceil(PI);       // arredondar para cima
    int e = floor(PI);      // arredondar para baixo
    double f = fabs(-50);   // módulo
    double g = log(100);    // log natural
    double h = sin(PI);     // seno *angulo deve ser em radianos
    double i = cos(PI);     // cosseno    
    double j = tan(PI);     // tangente    

    printf("%lf", j);

    return 0;
}

