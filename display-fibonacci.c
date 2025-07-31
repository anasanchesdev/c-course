#include "io430.h"
#include "math.h"

//                     0 ,  1 ,  2 ,  3 ,  4 ,  5 ,  6 ,  7 ,  8 ,  9    
unsigned char cod[]={0X3F,0X06,0X5B,0X4F,0X66,0X6D,0X7D,0X07,0X7F,0X6F};
unsigned char lista[100];
/*------------------------------------------------------------------------------
NOME:	   Fibonacci
DESCRICAO: Calcula a sequencia de Fibonacci e carrega no vetor LISTA a seuqência
ENTRADA:   unsigned char limite - Limite para o cálculo da sequência
SAIDA:	   unsigned char - Numero de elementos da sequência
-----------------------------------------------------------------------------*/	
unsigned char Fibonacci(unsigned char limite)
{
unsigned char indice=0,penultimo=0,ultimo=1,novo=0;
lista[indice]=penultimo;
indice++;
lista[indice]=ultimo;
while (novo<limite)
	{
	indice++;
	novo=penultimo+ultimo; 
	lista[indice]=novo;
	penultimo=ultimo;
	ultimo=novo;
	}
return(indice);
}
 	
/*------------------------------------------------------------------------------
NOME:	    MostraDisplay
DESCRICAO: 	APRESENTA EM DOIS DISPLAYS DE 7 SEGMENTOS O VALOR DA DEZENA E UNIDADE
			DE QUALQUER NÚMERO DE 2 DÍGITOS DECIMAL
ENTRADA:   	valor	- NÚMERO EM HEXADECIMAL QUE SERÁ MOSTRADO
SAIDA:	    -                
------------------------------------------------------------------------------ */	
void MostraDisplay(unsigned char valor)
{
  
unsigned char unidade=valor,dezena=0;
while (unidade > 9)
	{
  	dezena=dezena+1;
	unidade=unidade-10;
	}
P1OUT=cod[unidade];
P2OUT=cod[dezena];
valor++;

}
		
/*-----------------------------------------------------------------------------
NOME:	    ConfigDisplay
DESCRICAO: CONFIGURA AS PORTAS P1 E P2 DO MSP430 COMO SAIDAS
ENTRADA:   -
SAIDA:	    -               
------------------------------------------------------------------------------*/	
void ConfiguraDisplay(void)
{
P1DIR=0XFF;			//CONFIGURA P1 E P2 COMO SAÍDAS
P2DIR=0XFF;
P2SEL=0;
P1OUT=0;			//APAGA DISPLAYS
P2OUT=0;
#include "io430.h"
#include "math.h"

//                     0 ,  1 ,  2 ,  3 ,  4 ,  5 ,  6 ,  7 ,  8 ,  9    
unsigned char cod[]={0X3F,0X06,0X5B,0X4F,0X66,0X6D,0X7D,0X07,0X7F,0X6F};
unsigned char lista[100];
/*------------------------------------------------------------------------------
NOME:	   Fibonacci
DESCRICAO: Calcula a sequencia de Fibonacci e carrega no vetor LISTA a seuqência
ENTRADA:   unsigned char limite - Limite para o cálculo da sequência
SAIDA:	   unsigned char - Numero de elementos da sequência
-----------------------------------------------------------------------------*/	
unsigned char Fibonacci(unsigned char limite)
{
unsigned char indice=0,penultimo=0,ultimo=1,novo=0;
lista[indice]=penultimo;
indice++;
lista[indice]=ultimo;
while (novo<limite)
	{
	indice++;
	novo=penultimo+ultimo; 
	lista[indice]=novo;
	penultimo=ultimo;
	ultimo=novo;
	}
return(indice);
}
 	
/*------------------------------------------------------------------------------
NOME:	    MostraDisplay
DESCRICAO: 	APRESENTA EM DOIS DISPLAYS DE 7 SEGMENTOS O VALOR DA DEZENA E UNIDADE
			DE QUALQUER NÚMERO DE 2 DÍGITOS DECIMAL
ENTRADA:   	valor	- NÚMERO EM HEXADECIMAL QUE SERÁ MOSTRADO
SAIDA:	    -                
------------------------------------------------------------------------------ */	
void MostraDisplay(unsigned char valor)
{
  
unsigned char unidade=valor,dezena=0;
while (unidade > 9)
	{
  	dezena=dezena+1;
	unidade=unidade-10;
	}
P1OUT=cod[unidade];
P2OUT=cod[dezena];
valor++;

}
		
/*-----------------------------------------------------------------------------
NOME:	    ConfigDisplay
DESCRICAO: CONFIGURA AS PORTAS P1 E P2 DO MSP430 COMO SAIDAS
ENTRADA:   -
SAIDA:	    -               
------------------------------------------------------------------------------*/	
void ConfiguraDisplay(void)
{
P1DIR=0XFF;			//CONFIGURA P1 E P2 COMO SAÍDAS
P2DIR=0XFF;
P2SEL=0;
P1OUT=0;			//APAGA DISPLAYS
P2OUT=0;
}

/*-----------------------------------------------------------------------------
NOME:	   Tempo
DESCRICAO: FAZ UMA CONTAGEM DE 65535.
ENTRADA:   -
SAIDA:	   -               
------------------------------------------------------------------------------*/	
void	Tempo(void)
{
unsigned int cont=0xffff;
while(cont!=0)
	cont=cont-1;
}


void main( void )
{
// Stop watchdog timer to prevent time out reset
WDTCTL = WDTPW + WDTHOLD;

ConfiguraDisplay();
unsigned char indice=0;
unsigned char elementos=Fibonacci(40);
while(1)
	{
 	do
		{
		MostraDisplay(lista[indice]);
		Tempo();
		indice++;
		}
		while (indice < elementos);
	indice=0;
	}
}
