#include <stdio.h>


int main()
{
    int num;
    scanf("%i",&num);
    
    if (num > 5){
        printf("O numero digitado e maior que 10\n");
    }
    if (num == 10){
        printf("numero invalido\n");
    }
    else{
        printf("numero valido\n");
    }

        printf("O numero digitado e %i\n",num);

    return 0;
} 