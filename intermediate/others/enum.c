#include <stdio.h>

/*
ENUMS - Enumeradores
- São constantes de números inteiros definidas pelo usuário, qual cada número possui uma palavra-chave identificadora.
- Torna o programa mais fácil de ser compreendido.
- Útil para se referir a dados sequenciais que possuem alguma relação.
[!] Esta palavra-chave não é uma string, é um identificador único.
[!] São declarados e inicializados fora de main().
*/

// É possivel definir o começo da contagem atribuindo algum valor ao primeiro item do enum. (0 por padrão)
enum Week {Sun = 1, Mon, Tue, Wed, Thu, Fri, Sat};

int main()
{

    // Acessando valores de enums
    enum Week day;

    while (1)
    {
        printf("\nDia da semana (1 a 7): ");
        scanf("%d", &day);
        
        if (day == Sun || day == Sat)
        {
            printf("\nNa verdade, trata-se de uma igualdade e de uma liberdade instituidas pelo poder estranho, fetichista, que o conjunto da sociedade gerou e que faz todos sentirem, pelo menos em algum momento, quando e possivel refletir, que algo da vida lhes escapa.\n");
        }
        else if (day > Sun && day < Sat)
        {
            printf("\nProletarios de todos os paises, uni-vos!\n");
        }
        else if (day == 0)
        {
            break;
        }
        else
        {
            printf("\nDigite um número entre 1 e 7.");
        }
    }

    return 0;
}
