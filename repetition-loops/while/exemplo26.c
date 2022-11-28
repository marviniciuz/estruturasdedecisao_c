#include <stdio.h>

int main()
{
    int valdigitado = 0;
    int x = 0;

    scanf("%d", &valdigitado);

    while (x < valdigitado){   
        printf("%d\n",x * 10);
        x++;
    }
}