#include <stdio.h>

int main()
{

    int num1,num2,num3;
    printf("digite os numeros\n");
    scanf("%i%i%i",&num1,&num2,&num3);

    if (num1 == num2 && num2 == num3) {
        printf("Os numero são iguais\n");
    }
    else if(num1 > num2 && num1 > num3) {
        printf("O maior numero e %d\n",num1);
    }

    else if(num2 > num3) {
        printf("O maior numero e %d\n",num2);
    }
    else{
        printf("O maior numero e %d\n",num3);
    }

    return 0;
}