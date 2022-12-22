# COMPARAÇÃO DE STRINGS COM strcmp

A função strcmp realiza uma comparação ordinal de string1 e string2 e retorna um valor que indica a relação entre eles. 

Para isso deve-se importar a <string.h> (```#include <string.h>```) onde contem a função strcmp.

[strcmp](https://learn.microsoft.com/pt-br/cpp/c-runtime-library/reference/strcmp-wcscmp-mbscmp?view=msvc-170)


```
0: conteúdo das strings são iguais

< 0: conteúdo da string1 é menor do que string2

> 0: conteúdo da string1 é maior do que string2
```
```c
#include <stdio.h>
#include <string.h>

int main()
{

    char str1[5]="abc";
    char str2[5]="abd";
    int ret; //retorno

    ret = strcmp(str1,str2);

    printf("%d\n",ret);

    return 0;
}
```
Neste codigo foi utilizado tres variaveis com, sendo duas do mesmo tipo char e uma do tipo int

  1) Criação das variveis do tipo char sendo:
```c  
char str1[5]="abc";
char str2[5]="abd"; 
```
2) Criação da variavel de retorno;
```c
int ret; //retorno
```
3) Em seguida foi chamada a função ```strcmp```:
```c
ret = strcmp(str1,str2);
```

* ret e igual a comparação entre str1 e str2,sendo que sera retornado um valor sendo 
* 
```
0: conteúdo das strings são iguais

< 0: conteúdo da string1 é menor do que string2

> 0: conteúdo da string1 é maior do que string2
```

* Como o coteudo das string1 = abc (```char str1[5]="abc";```) e do string2 = abd(```char str2[5]="abd";```)
* de acordo com a tabela ASCII e o alfabeto c < d (c e menor que d) sendo assim o valor a ser retornado e ```menor que 0 (< 0)```

### resultado:

```
-1
```

como no codigo abaixo:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
	    char str[20];
        char str2[20]; 
        int i = 1;
        char sbn[20]="vinicius";

	    printf("Seu primeiro nome\n");
	    scanf("%s",str);

        printf("digite seu segundo nome\n");
        scanf("%s",str2);

   if(strcmp(str2,sbn) ==0)
   {
       printf("seu nome e:\n %s %s",str,str2);
    }

    else
    {
       while(i<10){
        printf("%s e um nome invalido\n",str2);
        i++;
        }
    }
}
```

Neste codigo o usuario vai digitar dois nomes sendo:

```c
char str[20];
char str2[20];

printf("Seu primeiro nome\n");
scanf("%s",str);

printf("digite seu segundo nome\n");
scanf("%s",str2);
```

```c
if(strcmp(str2,sbn) ==0){
       printf("seu nome e:\n %s %s",str,str2);
    }
```

* Se str2 e sbn forem igual ele ira imprimir os dois nomes digitados:

```c
printf("seu nome e:\n %s %s",str,str2);
```
* Caso contrario ele ira fazer um loop e imprimir  ``printf("%s e um nome invalido\n",str2);`` 10 vezes de acordo com a instrução implementada.
  
```c
else
    {
       while(i<10){
        printf("%s e um nome invalido\n",str2);
        i++;
        }
    }
```

### resultado 1:
* Se for digitado na primeiro nome marcus e no segundo vinicius 
```
Seu primeiro nome
marcus
digite seu segundo nome
vinicius
seu nome e:
marcus vinicius
```
### resultado 1:
* Se caso for digitado no primeiro nome marcus e no segundo nome paulo ou qualquer nome que não seja vinicius.
```
Seu primeiro nome
marcus
digite seu segundo nome
paulo
paulo e um nome invalido
paulo e um nome invalido
paulo e um nome invalido
paulo e um nome invalido
paulo e um nome invalido
paulo e um nome invalido
paulo e um nome invalido
paulo e um nome invalido
paulo e um nome invalido
```