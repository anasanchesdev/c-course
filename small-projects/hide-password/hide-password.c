#include <stdio.h>
#include <string.h>
#include <conio.h>

// techaeron video
int main() {

    char ch; 
    char password[20];
    int i = 0;

    ch = getch(); // retorna letra digitada no terminal em tempo real
    printf("Enter you password\n > ");
    for(;;)
    {
        if(ch=13) // 13H = Enter -> fim do código
        {   
            password[i] = '\0'; // determina o fim da string senha
            break;
        } 
        else 
        {
            password[i++] = ch; // incrementa o character digitado à senha
            printf("*");
        }
    }

    printf("Your password is: %s\n", password);

    return 0;
}

