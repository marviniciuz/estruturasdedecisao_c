#include <stdio.h>

int main()
{
    int numberc, number;

    printf("escolha um numero para iniciar as operacoes numericas\n");
    scanf("%d",&numberc);

    printf("digite um numero impar para relizar as operações numericas com o numero anterior\n");
    scanf("%d",&number);

    if (number%2==0)
    {
        printf("o numero digitado e par");
    }
    else{
        printf("a soma entres os numeros e = %d\n",number + numberc);
        printf("a subtracao entres os numeros e = %d\n",number - numberc);
        printf("a divisao entres os numero e = %d\n",numberc / number);
        printf("o resto da divisao e = %d\n",numberc % number);
        printf("a multiplicacao entres os numero e = %d\n",number * numberc);
    }
    
    return 0;
}