#  Estudos basicos de Logica de Progração

### Instruções if e else e ifelse
* if simples
* if e else simples
* ifelse aninhados 

### Operadores Logicos 
* Não (!=)
* E (&&)
* OU ( || )

### Operadores de Comparação 
* igual a (==)
* diferente de (!=)
* Maior que (>)
* Maior ou igual a (>=)
* Menor que (<)
* Menor ou igual a (<=)

## if Simples

~~~~
#include <stdio.h>

int main()
{
    int num;
    scanf("%i",&num);

    if (num <= 1){
        printf("numero invalido\n");
    }
    return 0;
}
~~~~
### if Aninhado
~~~~
#include <stdio.h>

int main()
{
    int num;
    scanf("%i",&num);

    if (num > 10){
        printf("O numero digitado e maior que 10\n");
    }
    if (num < 5){
        printf("O numero digitado e menor que 5\n");
    }
    if (num >= 15){
        printf("numero invalido\n");
    }
        printf("O numero digitado e %i\n",num);

    return 0;
}
~~~~

### ifelse
~~~~
#include <stdio.h>


int main()
{
    int num;
    scanf("%i",&num);
    
    if (num < 5){
        printf("O numero digitado e menor que 5\n");
    }
    else{
        printf("numero valido\n");
    }

        printf("O numero digitado e %i\n",num);

    return 0;
} 
~~~~
### if...elseif...else 
~~~~
#include <stdio.h>

int main()
{

    int num1,num2,num3;
    printf("digite os numeros\n");
    scanf("%i%i%i",&num1,&num2,&num3);

    if (num1 == num2 && num2 == num3) {
        printf("Os numero são iguais\n");
    }
    else if(num1 > num2 && num1 > num3) {
        printf("O maior numero e %d\n",num1);
    }

    else if(num2 > num3) {
        printf("O maior numero e %d\n",num2);
    }
    else{
        printf("O maior numero e %d\n",num3);
    }

    return 0;
}
~~~~
