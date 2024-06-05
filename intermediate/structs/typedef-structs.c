#include <stdio.h>
#include <string.h>

/*
TYPE DEF
- Palavra-chave que atribui uma "chave" a um tipo de dado existente;
- Dinamismo, código mais compreensível

Sintaxe:
[!] Fora de main()

typedef tipo key;

- "typedef" pode ser usado juntamente com structs de maneira que, ao declará-los, possa-se omitir "struct".


*/

// "user" é a palavra-chave para entidades char[25]
typedef char user[25];

/*
OMITINDO "struct" COM TYPEDEF:
structs são tipos de dado e, consequentemente, também podem ter palavras-chaves atribuídas por typedef
-> digitar typedef antes de struct 
-> digitar o nome do struct entre {} e ; (palavra-chave)
*/
typedef struct
{
    char name[25];
    int age;
} User;

int main ()
{
    // TYPEDEF
    // Ao invés de:
    // char name1[25] = "John";
    // Usa-se:
    // user user1 = "John";

    // outra forma de atribuir valores a structs na inicialização
    // struct User user1 = {"John", 18}; 
    // struct User user2 = {"Jessica", 19};

    // OMITINDO "struct" COM TYPEDEF
    User user1 = {"John", 18}; 
    User user2 = {"Jessica", 19};
    
    printf("NAME: %s\n", user1.name);
    printf("AGE: %d y/o\n", user1.age);
    printf("NAME: %s\n", user2.name);
    printf("AGE: %d y/o\n", user2.age);

    return 0;
}