#include <stdio.h>

int main(){

    /*
    =FORMATAÇÃO DE DADOS PARA DISPLAY=

    x [é um nº inteiro]:
        > %.x - limita a quantidade de números após a vírgula para x;
        > %x - adiciona x de espaçamento entre o texto anterior e o texto da variável;
        > %- - define o alinhamento para esquerda
    */

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;
    printf("Item 1: R$%-5.2f\n", item1);
    printf("Item 2: R$%-5.2f\n", item2);
    printf("Item 3: R$%-5.2f", item3);

    return 0;
}