#include <stdio.h>

int main()
{
    int num;

    printf("digite um numero: ");
    scanf("%d", &num);

    num /= 2; //equivale a num = num / 2;

    printf("o novo valor de num e %d", num);

    return 0;
}