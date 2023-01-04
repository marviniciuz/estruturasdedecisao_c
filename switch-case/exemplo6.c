#include <stdio.h>

int main(void)
{
    int op;

    scanf("%i",&op);

    switch (op)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("\nvoce digitou um numero entre 1 e 5");
        break;
    case 6:
        printf("\nvoce digitou um numero seis");
    break;
    case 7:
        printf("\nvoce digitou um numero sete");
    break;
    case 8:
        printf("\nvoce digitou um numero oito");
    break;
    case 9:
        printf("\nvoce digitou um numero nove");
    break;
    case 10:
        printf("\nvoce digitou um numero dez");
    break;
    default:
        printf("\nnumero invalido");
        break;
    }
}