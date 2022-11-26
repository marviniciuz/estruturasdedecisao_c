# EXEMPLOS DE WHILE EM C 20,21 E 22

### EXEMPLO20.C:

```c
#include<stdio.h>

int main()
{
    int i=1,number=0;

    printf("Entre com um numero:");
    scanf("%d",&number);// adicionei o numero a ser multiplicado por i

    while(i<=10){
    number = number * 1;
    printf("%d\n",number*i);
    // Aqui i ira de (1 a 10) e esse numeros serão multiplicados (number = number * 1;) pelo numero digitado acima ate chegar a 10
    i++;
}
return 0;
}

```

1) Foi declarado as variaveis i=1 e number=0, todas do tipo int

2) Foi criado o parametro abaixo, onde armazena um valor inteiro na variavel number.

```c
printf("Entre com um numero:");
    scanf("%d",&number);
```

3) criamos o bloco de codigo while(){} citado abaixo, 

```c
while(i<=10){
    number = number * 1;
    printf("%d\n",number)
```

 * Essa ```while(i<=10)``` parte do codigo informa enquanto i for menor ou igual a 10, sendo assim ira iniciar com o valor 1 ```int i=1``` e adiciona +1 a i ate chegar a 10, por que a condição e se i for menor ou igual a 10.

 * A operação numerica  ```number = number * 1;```, multiplica o valor adicionado a varivale number ```printf("Entre com um numero:");``` e esse valor e multiplicado a variavel i, que se inicia com 1 e finaliza com 10, e esse numero digitado ira se multiplicar de 1 a 10, se por acaso for digitado 2 ele se multiplicara:
```
 2 x 1
 2 x 2
 2 x 3
 2 x 4
 2 x 5
 2 x 6
 2 x 7
 2 x 8
 2 x 9
 2 x 10
```
5) E por final a variavel de controle ```i++``` que controla as iterações do while.

### resultado:
```
Entre com um numero:2
2
4
12
48
240
1440
10080
80640
725760
7257600
```


### EXEMPLO21.C:

```c
#include<stdio.h>

void main(){
    int j=1;

    while(j+=2,j<=10){
    printf("%d",j);
    }
}
```

1) Criamos uma variavel do tipo int, com o nome j que recebe o valor 1 ```int j=1;```

2) abrimos o bloco de codigo while ```while(j+=2,j<=10)``` que funciona da seguinte forma:

* Primeiro ele contem uma operação matematica de adição: j+=2 e o mesmo que j=j+2;
* Sendo assim a cada iteração do while ele ira somar j=1 + 2, e j passara a ter esse valor ate chegar no final da condição;
* A condição e ```j<=10``` enquanto j for menor ou igual a 10, continua somando;
* So que a soma para em 10, passou de 10 o codigo para
* Quando o codigo rodar sera assim: 1+2 = 3 , 3+2=5, 5+2=7, 7+2=9; para no nove por causa da condição que e equanto j for menor ou igual a 10; 9 e menor,
  mas a proxima operação seria 9+2=11;

### resultado:
```
3579
```


### EXEMPLO22.C:

```c
#include<stdio.h>

void main(){
    int j=1;

    while(j+=2,j<=10){
    printf("%d",j);
    }
    printf("%d",j);
}
```

1) Criamos uma variavel do tipo int, com o nome j que recebe o valor 1 ```int j=1;```

2) abrimos o bloco de codigo while ```while(j+=2,j<=10)``` que funciona da seguinte forma:

* Primeiro ele contem uma operação matematica de adição: j+=2 e o mesmo que j=j+2;
* Sendo assim a cada iteração do while ele ira somar j=1 + 2, e j passara a ter esse valor ate chegar no final da condição;
* A condição e ```j<=10``` enquanto j for menor ou igual a 10, continua somando;
* So que a soma para em 10, passou de 10 o codigo para
* Quando o codigo rodar sera assim: 1+2 = 3 , 3+2=5, 5+2=7, 7+2=9; para no nove por causa da condição que e equanto j for menor ou igual a 10; 9 e menor,
  mas a proxima operação seria 9+2=11;

3) Neste parte do codigo ```printf("%d",j);``` sera adicionado a proxima operação  j=9+2=11;

### resultado:
```
357911
```