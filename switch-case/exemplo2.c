#include <stdio.h>

int main()
{
    int i;
    printf("\nDigite um valor entre 0 e 9\n");
    scanf("%i",&i);

    switch (i)
    {
    case 1:
        printf("A numero digitado e foi: %i",i);
        break;
    case 2:
        printf("A numero digitado e foi: %i",i);
        break;
    case 3:
        printf("A numero digitado e foi: %i",i);
        break;
    case 4:
        printf("A numero digitado e foi: %i",i);
        break;
    case 5:
        printf("A numero digitado e foi: %i",i);
        break;
    case 6:
        printf("A numero digitado e foi: %i",i);
        break;
    case 7:
        printf("A numero digitado e foi: %i",i);
        break;
    case 8:
        printf("A numero digitado e foi: %i",i);
        break;
    case 9:
        printf("A numero digitado e foi: %i",i);
        break;

    default:
      printf("A numero digitado e foi: %i e invalido",i);  
    }
}