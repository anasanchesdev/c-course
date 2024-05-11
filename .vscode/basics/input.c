#include <stdio.h>
#include <string.h>

int main(){

    // int age;
    // printf("How old are you?\n > ");
    // scanf("%d", &age);
    // printf("You are %d years old!", age);

    char name[25]; // bytes
    printf("What is your name?\n > ");
    fgets(name, 25, stdin); // scanf ignora espaços
    name[strlen(name) - 1] = '\0'; // ignora enter ao inserir input
    printf("Hello %s!", name);

    return 0;
}