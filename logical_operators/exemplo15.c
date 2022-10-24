#include <stdio.h>

int main ()
{

    int ij,ii,idade;
    ij = 17;
    ii = 60;
    idade = 0;

    printf("digite a idade de uma pessoa\n");
    scanf("%i",&idade);

    if (idade <= ij)
    {
        printf("a idade informada e de um jovem\n");
    }else{
        if (idade >= ii)
        {
            printf("a idade informada e de um pessoa idosa\n");
        }else{
           if ((idade > ij) && (idade < ii))
           {
            printf("a idade informada e de um pessoa meia idade\n");
           }
            
        }
        
    }

    return 0;

}
