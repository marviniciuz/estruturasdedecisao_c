#include <stdio.h>

int main()
{
int num1,num2;
int x,aux;

printf("\nDigite os dois numeros para fazer as operações");
scanf("%i",&num1);

printf("\nDigite os dois numeros para fazer as operações");
scanf("%i",&num2);

for (x = 1; x <= 2; x++){

aux = num1 + num2; 

printf("\n%i",aux);

}
return 0;

}