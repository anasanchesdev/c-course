#include <stdio.h>
#include <stdbool.h>

int main(){
    int x = 4;
    int y = 2;
    int w = 3;
    float v = 5;
    printf("X = %d\nY = %d\nW = %d\nV = %d", x, y, w, v);

    // divisão (tomar cuidado!!)
    // float z = x / (float) y;
    // printf("%f", z);

    // resto de divisão
    // int z = x % y;
    // printf("%d", z);

    // incremento de 1 inteiro
    // x++;
    // printf("%d", x);

    // decremento de 1 inteiro
    // x--;
    // printf("%d", x);

    // igual em python - mudar valor de variável numérica dinamicamente
    x += 5;
    y -= 3;
    w *= 4;
    v /= (float) 2;
    printf("\n\nX = %d\nY = %d\nW = %d\nV = %f", x, y, w, v);

    return 0;
}
