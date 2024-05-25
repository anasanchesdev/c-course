#include <stdio.h>
#include <string.h>
/*
.:FUNÇÕES DE STRING:.
Lista de funções de formatação de string com <string.h>
*/
int main(){

    char str1[] = "John";
    char str2[] = "Dee";

    // string lower: tudo minusculo
    strlwr(str1);                             
    
    // // string upper: tudo maiusculo
    // strupr(str1);                                          
    
    // // string concatenation: concatena duas strings; essa função muda apenas o valor de str1
    // strcat(str1, str2);                          
    
    // // string numerated concatenation: concatena n letras de str2 para str1
    // strncat(str1, str2, 1);                      
    
    // // string copy: copia o valor de str2 para str1
    // strcpy(str1, str2);

    // // string numerated copy: copia n letras de str2 para str1; as letras de posição equivalente são substituidas (replace)                        
    // strncpy(str1, str2, 1);                      

    // // string setting: muda todas as letras para outra letra
    // strset(str1, 'x');        

    // // string numerated setting: muda as primeiras n letras para outra letra                   
    // strnset(str1, 'x', 2);

    // // string reversing: reverte a str                       
    // strrev(str1);                                

    // // string length: retorna o nº de letras da str
    // int result = strlen(str1);                   

    // // string comparing: compara duas strs, retorna; se forem iguais -> 0, else -> outro número
    // int result = strcmp(str1, str2);                

    // // string numerated comparing: compara n primeiras letras de duas strs, retorna; se forem iguais -> 0, else -> outro número
    // int result = strncmp(str1, str2, 1);            

    // // compara duas strs ignorando maiusc/minusc, retorna; se forem iguais -> 0, else -> outro número
    // int result = strcmpi(str1, str2);               

    // // compara n primeiras letras de duas strs ignorando maiusc/minusc, retorna; se forem iguais -> 0, else -> outro número
    // int result = strnicmp(str1, str2, 1);              


    printf("%s", str1);
    // printf("\n%d", result);

    // if (result == 0){
    //     printf("\n%s = %s", str1, str2);
    // }
    // else {
    //     printf("\n%s # %s", str1, str2);
    // }
    

    return 0;
}