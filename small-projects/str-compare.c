#include <stdio.h>  
#include <string.h>

void main()
{
    char nome_digitado[11];
    char str_comparar[11];
    
    printf("Digite o nome (max 10 letras):\n > ");
    fgets(nome_digitado, sizeof(nome_digitado), stdin);
    nome_digitado[strcspn(nome_digitado, "\n")] = 0;
    
    printf("Digite a string para comparar:\n > ");
    fgets(str_comparar, sizeof(str_comparar), stdin);
    str_comparar[strcspn(str_comparar, "\n")] = 0;
    
    if (strcmp(nome_digitado, str_comparar) == 0)
    {
        printf("As strings são iguais.\n");
    }
    else
    {
        printf("As strings são diferentes.\n");
    }
    
}
