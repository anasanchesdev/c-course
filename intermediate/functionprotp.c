#include <stdio.h>
#include <string.h>

/*
- A maioria dos compiladores C não verifica se o número de argumentos necessário para as funções foi fornecido;
- O código será executado normalmente, porém com comportamentos inesperados;
- Para evitar que ele seja executado e, ao invés disso, mostrar um erro, cria-se um protótipo de função.

::Protótipo de função::
- Declarar uma função depois de main(), depois declará-la antes de main(), vazia;
- Fica melhor para navegar no código
- Header files
*/

void hello_msg(char[30], int); // protótipo de função (especificar tipo dos parâmetros)

int main() {
    
    char name[30];
    int age;

    printf("Enter you name:\n > ");
    fgets(name, 30, stdin);
    name[strlen(name) - 1] = '\0';
    
    printf("Enter your age:\n > ");
    scanf(" %d", &age);

    hello_msg(name, age); 

    return 0;
}


void hello_msg(char name[30], int age) {

    printf("Bom dia, sou %s! Tenho %d anos.", name, age);

}
