#include <stdio.h>

int main()
{

    int num1,num2,num3;
    printf("digite o primeiro numero\n");
    scanf("%i",&num1);

    printf("digite o segundo numero\n");
    scanf("%i",&num2);

    printf("digite o terceiro numero\n");
    scanf("%i",&num3);

    if (num1 == num2 && num2 == num3) {
        printf("Os numero são iguais\n");
    }
    else if(num1 > num2 && num1 > num3) {
        printf("O primeiro numero e o maior");
    }
    else if(num2 > num3) {
        printf("O segundo numero e o maior");
    }
    else{
        printf("O terceiro numero e o maior");
    }

    return 0;
}