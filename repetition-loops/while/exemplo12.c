#include <stdio.h>

int main(void)
{
  int contador = 10; //declarando e inicializando a variável de controle
  
  while (contador >= 1) // Testando a condição
  {
    printf("%d ", contador); //Executando um comando dentro do laço
    
    contador--; //atualizando a variável de controle
  }  
  
  return 0;
}