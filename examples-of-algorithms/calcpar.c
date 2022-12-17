#include <stdio.h>

int main()
{
    int numberc, number;

    printf("escolha um numero para iniciar as operacoes numericas\n");
    scanf("%d",&numberc);

    printf("digite um numero par para relizar as operações numericas com o numero anterior\n");
    scanf("%d",&number);

    if (number%2==0)
    {
        printf("a soma entres os numeros e = %d\n",number + numberc);
        printf("a subtracao entres os numeros e = %d\n",numberc - number);
        printf("a divisao entres os numero e = %d\n",numberc / number);
        printf("o resto da divisao e = %d\n",numberc % number);
        printf("a multiplicacao entres os numero e = %d\n",number * numberc);
    }
    else{
        printf("o numero digitado e impar");
    }
    
    return 0;
}