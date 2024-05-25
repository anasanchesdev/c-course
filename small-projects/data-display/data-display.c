#include <stdio.h>
#include <string.h>
// not working
int display_data(char[15], char[15], int);

int main() {

    char name[15];
    char nationality[15];
    int age;

    printf("Enter your name:\n > ");
    fgets(name, 30, stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your nationality\n > ");
    scanf("%s", &nationality);

    printf("Enter your age\n > ");
    scanf("%d", &age);

    int data = display_data(name, nationality, age);
    printf("%s", data);

    return 0;
}

int display_data(char a[15], char b[15], int c) {
    int format = "\nNAME: %s\nAGE: %d y/o\nNATIONALITY: %s", a, c, b;
    return format;
}
