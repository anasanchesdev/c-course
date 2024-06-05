#include <stdio.h>
#include <string.h>

/*
STRUCTS - ESTRUTURAS
- São coleções de "membros", "entidades" que possuem alguma relação
- Podem ser de tipos de dados diferentes
- Cada uma possui uma referência única em um bloco de memória
[!] Similar a classes, porém sem métodos, apenas atributos.

Sintaxe (declaração):
[!] Deve ser declarada fora de main()
[!] Em main(), deve-se criar a instância dessa estrutura:
    - struct Struct inst;

struct Foo
{
    atributos...
};
*/

struct Player
{
    char name[15];
    int score;
};

int main()
{

    struct Player player1;
    struct Player player2;
    
    // acessando e atribuindo valores aos atributos:
    // [!] lembre-se: strings são imutáveis diretamente
    strcpy(player1.name, "John");
    strcpy(player2.name, "Jessica");
    player1.score = 10;
    player2.score = 15;

    printf("NAME: %s\n", player1.name);
    printf("SCORE: %d\n", player1.score);
    printf("NAME: %s\n", player2.name);
    printf("SCORE: %d\n", player2.score);


    return 0;
}
