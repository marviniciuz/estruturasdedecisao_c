#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int option,i=1;

    printf("Digite um numero de entre 1 e 7\n");
    scanf("%i",&option);

    switch (option)
    {
    case 1:
        printf("\no numero: %i representa o domingo",option);
        break;
    case 2:
        printf("\no numero: %i representa a segunda-feira",option);
        break;
    case 3:
        printf("\no numero: %i representa o terça-feira",option);
        break;
    case 4:
        printf("\no numero: %i representa o quarta--feira",option);
        break;
    case 5:
        printf("\no numero: %i representa o quinta-feira",option);
        break;
    case 6:
        printf("\no numero: %i representa o sexta-feira",option);
        break;
    case 7:
        printf("\no numero: %i representa o sabado-feira",option);
        break;
    default:
       while (i<=10){
            printf("\nNumero invalido");
            i++;
        }
        break;
    }
}