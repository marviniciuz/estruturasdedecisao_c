#include <stdio.h>


int main()
{
    int num;
    scanf("%i",&num);

    if (num > 10){
        printf("O numero digitado e maior que 10\n");
    }
    if (num < 5){
        printf("O numero digitado e menor que 5\n");
    }
    if (num >= 15){
        printf("numero invalido\n");
    }
        printf("O numero digitado e %i\n",num);

    return 0;

}