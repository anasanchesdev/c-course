#include <stdio.h>
#include <stdbool.h>

/*
    VARIÁVEIS
    Em C, é preciso declarar explicitamente o tipo de dado da variável
    1- Declarar o nome e tipo de dado (alocar espaço na memória)
    2- Inicializar (armazenar algum valor)
*/

int main(){

    int x; // declaração
    x = 10; // inicialização

    int y = 10; // declaração + inicialização
    float height = 160.5; // n decimal
    char grade = 'A'; // letra única

    char name[] = "Nix"; // lista de letras (para simular uma string)
    int age = 18;
    // printf("%s is %d years old", name, age);
    bool a = true; 
    char f = 'A';
    unsigned char t = 100;

    printf("%c\n", t);

    printf("%d\n", f); // conversão de char para decimal

    return 0;
}
