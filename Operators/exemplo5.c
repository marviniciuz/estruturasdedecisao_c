#include<stdio.h>


int main(void)  
{ 
  int num;
  
  num = 10; //atribuindo 10 na variável num
  printf("Valor inicial de num = %d \n",num);
  printf("\n");

  num += 5; //equivale a num = num + 5
  printf("Somando 5 ao valor inicial temos num = %d \n",num);
  printf("\n");

  num -= 1; // equivale a num = num - 1
  printf("Sutraindo 1 temos num = %d \n",num);
  printf("\n");

  num *= 2; // equivale a num = num * 2
  printf("Multiplicando por 2 temos num = %d \n",num);
  printf("\n");

  num /= 2;// equivale a num = num / 2
  printf("Dividindo por 2 temos num = %d \n",num);
  printf("\n");
  
  return 0; 
  
} 