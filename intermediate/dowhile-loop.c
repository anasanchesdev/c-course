#include <stdio.h>
/*
DO WHILE LOOP -> executa código uma vez e depois checa se certa condição é verdadeira para continuar o loop

*/
int main()
{

    int number = 0;
    int sum = 0;

    do
    {
        printf("\n\n- Enter a number greater than 0 to sum\n- Enter a number lesser than 0 to end the code\n > ");
        scanf("%d", &number);
        int previous_sum = sum;
        if (number > 0)
        {
            sum += number ;
            printf("%d + %d = %d", previous_sum, number, sum);
        }
        
    } while (number > 0);

    return 0;
}
