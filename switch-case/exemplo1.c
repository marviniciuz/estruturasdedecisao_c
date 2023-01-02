#include <stdio.h>

int main()
{

    int dig;

    printf("\nDigite um valor de 1 a 3\n");
    scanf("%d",&dig);

    switch (dig)
    {
    case 1:
        printf("\nvoce e lindo");
        break;

    case 2:
        printf("\nesta tudo certo");
        break;

    case 3:
        printf("\nufa foi");
        break;
    
    default:
        printf("\nvalor \ninvalido");
        break;
    }

}