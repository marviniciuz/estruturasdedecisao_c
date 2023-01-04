#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int contador=0;
    int op;

    do
    {   
        contador++;
        printf("\ndigite 0 para sair do looping\n");
        printf("%i\n",contador);
        scanf("%i",&op);
    } while (op!= 0);
    

    return 0;
}