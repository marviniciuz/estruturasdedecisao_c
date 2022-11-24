##  BREVE EXPLICAÇÃO DOS EXEMPLOS 17 E 18

### EXEMPLO17.C:

```c
#include<stdio.h>

int main()
{
    int n;
    int i = 0;
    int impar = 1;

        printf("Entre com o total de numeros impares a ser impresso: ");
        scanf("%d", &n);

    while( i < n ){
        printf("%d\t", impar);
        i++;

        impar = impar + 2;
    }
    return 0;
}
```
1) Foi declarado as variaveis n, i = 0 e impar = 1, todas as variaveis do tipo int.

2) Foi criado um tipo ```scanf("%d", &n);``` onde contem a seguinte mensagem encima ```printf("Entre com o total de numeros impares a ser impresso: ");``` como a propria mensagem ja diz, sera armazenado um numero ou seja a quantidade de numero impares que queremos que seja impresso.

3) Em seguida foi-se aberto um bloco de codigo while: ```while( i < n )``` onde se tem a seguinte condição:

    *  enquanto i for menor que n, segue a instrução
    * como i = 0 e n recebera o valor a ser digitado ```printf("Entre com o total de numeros impares a ser impresso: ");```

4)  A instrução contida no codigo e:

```c
printf("%d\t", impar);
        i++;

        impar = impar + 2;
```

Desta forma enquanto i for menor que n sera impresso um valor do tipo ```int``` 

5) Para que seja impresso os numero impares foi criado uma operação metematica simples porem bem importante para o funcioamentoe do codigo ```impar = impar + 2;```
 
    * Como impar recebeu o valor 1 ```int impar = 1```;
    * Ela ja inicia com valor 1.

6) Se o usuario digirtar 1 na parte onde pede para :```"Entre com o total de numeros impares a ser impresso: "``` o ```n``` passara a ter o valor 1, sendo assim ```while( i < n = 1 )```, aparecera um numero impar que no caso e 1, a operação  ```impar = impar + 2;``` so sera executada caso o usuario entre com numero maiores que 1, no caso 2 em diante.

7) Se caso ele entre com 3, o ele passara pela condição ```while( i < n = 3 )``` depois sera adicionado o numero 1 ```printf("%d\t", impar);``` depois ele verifica denovo a condição e dessa vez ele soma ```impar = impar + 2;``` ( impar = 1 + 2 = 3) e adiciona mais uma vez depois ele verifica denovo e faz a mesma operação so que com o valor anterior (3) ```impar = impar + 2;``` ( impar = 3 + 2 = 5). e por fim ele para por que a quantidade de numeros impares a serem impresso e 3.

### resultado:
```
1       3       5
```


### EXEMPLO18.C:

```c
#include <stdio.h>

int main()
{
    int loop = 0;
    int num;
    char nome[30];

        printf("Quantas vezes voce quer imprimir o nome\n");
        scanf("%d", &num);

        printf("digite o nome: ");
        scanf("%s", nome);

    while (loop < num){
        printf("%s\n" , nome);
        loop++;
    }
}
```
O codigo acima segue o mesmo principio do exemplo17.c so que mais simples.

1) Foi declarado as variaveis n, ```loop = 0 e num``` do tipo ```int``` , e a varivel nome do tipo ```char```.

2) Foi criado um tipo ```scanf("%d", &num);``` onde contem a seguinte mensagem encima ```printf("Quantas vezes voce quer imprimir o nome\n");``` como a propria mensagem ja diz, sera armazenado um numero ou seja a quantidade de vezes que a palavra ou nomes sera impresso.

2) Em seguida outra mensagem onde solicita a palavra ou nome a ser impresso:

```c
printf("digite o nome: ");
        scanf("%s", nome); 
```
3) Criamos um bloco de codigo while:

```c
 while (loop < num){
        printf("%s\n" , nome);
        loop++;
    }
```
* A condição ```while (loop < num)``` funciona assim: enquanto loop for menos que num sera repetido o nome digitado acima: ```printf("digite o nome: ");```

* Pra isso acontecer loop tem que ter um valor que no caso e 0 ```int loop = 0;``` e num tambem, no caso de num o valor foi adicionado nesse momento aqui:```printf("Quantas vezes voce quer imprimir o nome\n");```, apos ter os dois valores sera impresso o nome;

* A comparação seguira da seguinte forma, se caso for digitado ```3```, sera compradado:

    ```while (loop < num)```0 < 3? ```sim```, então o codigo roda;
    loop recebe ```1``` ```loop++;```

    ```while (loop < num)```1 < 3? ```sim```, então o codigo roda;
    loop recebe mais um sendo ```1 + 1 = 2``` ```loop++;``

    ```while (loop < num)```2 < 3? ```sim```, então o codigo roda;
    loop recebe mais um sendo ```2 + 1 = 3``` ```loop++;``

    * Aqui o loop para por que so são numeros menores que 3, ou seja não pode ser 3, so abaixo de 2.

### resultado:
```
Quantas vezes voce quer imprimir o nome
3
digite o nome: joao
joao
joao
joao
```