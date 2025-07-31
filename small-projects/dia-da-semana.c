#include <stdio.h>  

int main() {  
    int dia, mes, ano, k, j, f;  
    printf("Digite a data no formato dd/mm/aaaa: ");  
    scanf("%d/%d/%d", &dia, &mes, &ano);  

    if (mes < 3) {  
        mes += 12;  
        ano--;  
    }  
    
    k = ano % 100;  
    j = ano / 100;  
    
    f = dia + (13 * (mes + 1)) / 5 + k + k / 4 + j / 4 + 5 * j;  
    f = (f % 7) - 1;  

    switch (f) {  
        case 0: printf("Domingo\n"); break;  
        case 1: printf("Segunda-feira\n"); break;  
        case 2: printf("Terça-feira\n"); break;  
        case 3: printf("Quarta-feira\n"); break;  
        case 4: printf("Quinta-feira\n"); break;  
        case 5: printf("Sexta-feira\n"); break;  
        case 6: printf("Sábado\n"); break;  
    }  

    return 0;  
}  
