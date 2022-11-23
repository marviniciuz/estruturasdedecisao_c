#include <stdio.h>

int main()
{
    int ano;

    printf("digite o ano que você nasceu");
    scanf("%d", &ano);

    ano -= 2022; //equivale a ano = ano - 2000

    printf("voce tem %d anos",ano);

    return 0;
}