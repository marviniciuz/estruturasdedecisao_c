#include <stdio.h>

/*
1) positivo -> 1
2) negativo -> 0
*/

int main()
{

    int num1,num2;
    printf("digite os numeros");
    scanf("%i%i",&num1,&num2);

    if (num1 != num2)
    {
        printf("os numeros %i e %i sao diferentes",num1,num2);
    }
    else{
        printf("os numeros sao iguais");
    }

    return 0;
}