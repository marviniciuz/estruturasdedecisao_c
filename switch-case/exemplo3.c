#include <stdio.h>

int main()
{

    int dig;
    int somar;

    printf("\nDigite um valor de 1 a 3\n");
    scanf("%d",&dig);

    switch (dig)
    {
    case 1:
        somar = dig + 10; 
        printf("\n%i",somar);
        break;

    case 2:
        somar = dig + 20; 
        printf("\n%i",somar);
        break;

    case 3:
        somar = dig + 30; 
        printf("\n%i",somar);
        break;
    
    default:
        printf("\nvalor \ninvalido");
        break;
    }

}