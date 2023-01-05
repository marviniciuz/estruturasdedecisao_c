# LAÇO DE REPETIÇÃO FOR

```for``` e o laço de repetição, assim como o ```while```,a escrita e diferente mas o intuito e basicamente o mesmo, contendo uma varivel de controle, uma condição e uma instrução

```
para i = valor_inicial até valor_final faça
Comando;
fim-para
```
ou 

```
para i = valor_inicial até valor_final faça
Comando1;
Comando2;
```
```c
for (inicialização; teste; incremento)
instrução;
```

```c
for(i=1;i<=10;i++){
    printf("Hello World");
}
```

No caso do for,não e necessario iniciar a variavel com valor sua declaração por exemplo:
```c
int i=0;
```
```c
#include <stdio.h>

int main()
{
    int i;

    for(i=1;i<=10;i++){
    printf("\nHello World");
    }
}
```

### Resultado:
```
Hello World
Hello World
Hello World
Hello World
Hello World
Hello World
Hello World
Hello World
```
A variavel ```i``` não iniciou com um valor, o valor foi adicionado a ```i``` dentro do ```for```:
```c
                        for(i=1;i<=10;i++)
```

```c
#include <stdio.h>

int main()
{
    int i;

    for(i=0;i<=10;i++){
    printf("\n%i",i);
    }
}
```
### Resultado:
```
0 
1 
2 
3 
4 
5 
6 
7 
8 
9 
10
```

Da mesma forma que adicionamos podemos ir diminuindo o valor de ```i``` dentro do ```for```:
```c
#include <stdio.h>

int main()
{
    int i;

    for(i=10;i>=1;i--){
    printf("\n%i",i);
    }
}
```
### Resultado:
```
10
9
8
7
6
5
4
3
2
1
```
1) Neste caso i recebeu 10;
2) Depois o veio a condição, enquanto i for maio ou igual a 1 ```i>=1```;
3) Depois veio o i-- que diminui o valor de ```i```, da mesma forma que o ```i++``` adiciona +1 no ```i```;
4) Depois o valor de ```i``` diminuito -1, ```i=10```, -1 ate chegar na condição correta;
5) Quando ```i``` chegar a 1, o ```for``` para, a condição e enquanto i for maio ou igual a 1;