#include <stdio.h>

int main (void)
{
   float min = 5.0 , max = 12.0, temperatura ;

   printf("Informe o valor da temperatura: ");
   scanf("%f", &temperatura); 

   if (temperatura > max || temperatura < min) 
      printf("Alerta: Temperatura fora da faixa permitida!!!\n"); 
   else 
      printf("Temperatura OK \n"); 

   return (0);
}