#include <stdio.h>

int main(){

    char grade;

    printf("Enter your grade:\n > ");
    scanf("%c", &grade);

    grade = toupper(grade); // transforma em maiusculo

    // menos redundante que usar vários if/else if/else
    switch (grade) {
        case 'A':
            printf("Omggg queeenn!!");
            break;
        default:  // como se fosse else
            printf("I know you can do better than that!!!");
    }

    return 0;
}