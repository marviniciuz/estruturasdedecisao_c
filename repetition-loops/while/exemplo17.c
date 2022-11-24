#include<stdio.h>
int main()
{
    int n;
    int i = 0;
    int impar = 1;

        printf("Entre com o total de numeros impares a ser impresso: ");
        scanf("%d", &n);

    while( i < n ){
        printf("%d\t", impar);
        i++;

        impar = impar + 2;
    }
    return 0;
}