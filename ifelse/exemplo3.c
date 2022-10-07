#include <stdio.h>


int main()
{
    int num1,num2;
    scanf("%i%i",&num1,&num2);
    
    if (num1 > num2){
        printf("O numero 1 e maior que o numero 2\n");
    }
    if (num2 > num1){
        printf("O numero 2 e maior que o numero 1\n");
    }
    if (num1 == num2)
    {
        printf("os numeros sao iguais\n");
    }
        printf("Os numeros digitados sao %i e %i\n",num1,num2);
    

    return 0;
} 