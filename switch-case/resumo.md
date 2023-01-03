# RESUMO SWITCH CASE

Em resumo essas função pode substituir o if else, sendo um pouco diferente pelo fato de ter que escolher os casos e determinar cada caso mesmo que no if e else seja da mesma forma, a escrita e a logica varia um pouco.

```c
#include <stdio.h>
#include <conio.h>
int main (void )
{
  int option;
  
  printf("Digite um numero de entre 1 e 7\n");
    scanf("%i",&option);;
  
  if (option == 1)
    printf ("Domingo\n");
  else
  if (option == 2)
    printf ("segunda-feira\n");
  else
  if (option == 3)
    printf ("Terça-feira\n");
  else
  if (option == 4)
  printf ("Quarta-feira\n");
  else
  if (option == 5)
    printf ("Quinta-feira\n");
  else
  if (option == 6)
    printf ("Sexta-feira\n");
  else
  if (option == 7)
    printf ("Sabado-feira\n");
  else
    printf ("Valor invalido!\n");
  
  getch();
  return 0;
}
```
Se for digitado 1:
### resultado:

```
Digite um numero de entre 1 e 7
1
Domingo
```

Se for digitado 8:
### resultado:

```
Digite um numero de entre 1 e 7
8
Valor invalido!
```


```c
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
```
Se for digitado 1:
### resultado:

```
Digite um numero de entre 1 e 7
1

o numero: 1 representa o domingo
```

Se for digitado 8:
### resultado:

```
Digite um numero de entre 1 e 7
8

Numero invalido
Numero invalido
Numero invalido
Numero invalido
Numero invalido
Numero invalido
Numero invalido
Numero invalido
Numero invalido
Numero invalido
```

Ambos codigos se comportaram da mesma forma, talvez um seja mais pratico e bonito que o outro, no final os dois irão entregar o mesmo resultado,tudo depende da situação embora o switch case seja mais parecido com um menu de escolhas, diferente o if else que parece mais um seria de situações ou condições.

Em suma, a estrutura de controlo ```switch``` é um um ```if``` para operar sobre a mesma variável ou expressão de entrada,Não existe propriamente uma comparação entre os dois para apurar a sua performance dado o objetivo de cada um ser distinto.

```c
#include <stdio.h>

int main()
{
    int a;

    scanf("%i",&a);

    switch($) {
    case 1: 
       printf("Variável A é igual a 1");
        break;
    case 2:
        printf("Variável A é igual a 1");
        break;
    default:
        printf("A Variável A não é igual a 1 nem igual a 2");
    }
}
```
A variavel ```a``` esta sendo comparada com a diferentes valores.

O if deve ser utilizado para compararmos verificações distintas.
```c
#include <stdio.h>


int main()
{
    int num;
    scanf("%i",&num);
    
    if (num > 5){
        printf("O numero digitado e maior que 10\n");
    }
    if (num == 10){
        printf("numero invalido\n");
    }
    else{
        printf("numero valido\n");
    }

        printf("O numero digitado e %i\n",num);

    return 0;
} 
``` 