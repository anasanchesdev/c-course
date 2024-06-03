#include <stdio.h>
#include <string.h>

/*
WHILE Loop -> executa código enquanto certa condição for verdadeira

Sintaxe:
while(condição)
{
    código a ser executado;
}
*/

int main(){
    char name[25];
    printf("Enter your name:\n > ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0)
    {
        printf("\nYou must type your name!\n");
        printf("Enter your name:\n > ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
        
    }

    printf("Hey %s", name);

    return 0;
}
