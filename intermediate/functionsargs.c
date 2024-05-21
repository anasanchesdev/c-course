#include <stdio.h>
#include <string.h>
/*
ARGUMENTOS EM FUNÇÕES
É preciso explicitar o tipo do parâmetro (int, char, float, etc).
- Parâmetros: o que a função precisa
- Argumentos: dados fornecidos para a função.
*/

// ::NOT WORKING::
// char display_data(char name[30], int age, char nationality[30])
// {
//     char data[100] = "\n|NAME: %s\n|AGE: %d y/o\n|NATIONALITY: %s\n", name[30], age, nationality[30];
//     return data;
// }

// int main(){

//     char name[30];
//     int age;
//     char nationality[30];

//     printf("Enter your name:\n > ");
//     fgets(name, 30, stdin);
//     name[strlen(name) - 1] = '\0';

//     printf("Enter your age:\n > ");
//     scanf("%d", &age);

//     printf("Enter your nationality:\n > ");
//     scanf("%s", &nationality);

//     data = display_data(name, age, nationality); 

//     return 0;
// }

double square(int a){

    double square = a * a;
    return square;
}


int main(){

    double num;
    double result;
    printf("Enter a number\n > ");
    scanf("%lf", &num);
    result = square(num);
    printf("%.2lf x %.2lf = %.2lf", num, num, result);

}