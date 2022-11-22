#include <stdio.h>

int main ()
{
    char nome[30];
    int i ;

    printf("\ndigite o seu nome\n");
    scanf("%s", nome);

    i = 0;
    while (i != 10){
    printf("\n%s",nome);
    i++;

    }

return (0);
}