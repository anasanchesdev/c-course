#include <stdio.h>

/*
Como mudar o valor de uma variável local em outra função utilizando ponteiro e endereço
*/

void atualizaLocal(int*);

void main(){
    int numero = 10;
    printf("Antes: %d", numero);
    atualizaLocal(&numero);
    printf("\nDepois: %d", numero);
}

void atualizaLocal(int* local){
    *local = *local - 1;
}
