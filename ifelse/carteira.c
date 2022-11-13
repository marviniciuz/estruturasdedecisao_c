#include <stdio.h>

int main()
{
    int idade,carteira;

    scanf("%i",&idade);

    if (idade >= 18)
    {
        printf("voce ja pode tirar a carteira de motorista");
    }
    else if (idade == 17)
    {
        printf("falta um ano para tirar a carteira");
    }
    else{
        printf("voce ainda não tem idade pra tirar a carteira");
    }

    return 0;
}