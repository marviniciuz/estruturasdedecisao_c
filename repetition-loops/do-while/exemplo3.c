#include <stdio.h>
#include <ctype.h>


int main()
{

int contador;
char continua[3];

contador = 0;

do
{

   printf("Repentindo....\n");

   contador = contador + 1;

   printf("Tecle 's' se deseja continuar\n");
   scanf("%c",&continua);
} while (continua != "s");

printf("O bloco foi repetido %d vezes", contador);
}