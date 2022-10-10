#include <stdio.h>

int main()
{
    int num = 10;

    printf("Digite um numero != de 5: \n") ;
    scanf( "%i", &num );

    if(num != 5)
    {
        printf("TRUE\n");
    }else{
        printf("FALSE\n");
    }
} 