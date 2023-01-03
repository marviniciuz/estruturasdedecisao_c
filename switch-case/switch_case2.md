# Exemplo 3:

Da mesma forma que forma que criamos intruções dentro dos laços de repetição, e possivel criar instruções a serem executadas dentre do switch case, sendo assim se caso a condição for atendida a ele ira fazer determinada ação.

```c
#include <stdio.h>

int main()
{

    int dig;
    int somar;

    printf("\nDigite um valor de 1 a 3\n");
    scanf("%d",&dig);

    switch (dig)
    {
    case 1:
        somar = dig + 10; 
        printf("\n%i",somar);
        break;

    case 2:
        somar = dig + 20; 
        printf("\n%i",somar);
        break;

    case 3:
        somar = dig + 30; 
        printf("\n%i",somar);
        break;
    
    default:
        printf("\nvalor \ninvalido");
        break;
    }

}
```

1) Aqui temos duas variavel uma pra armazenar o valor e outra para realizar a soma,
```c
int dig;
int somar;
```
2) Solicitamos um numero de 1 a 3 a ser digitado:
```c
printf("\nDigite um valor de 1 a 3\n");
scanf("%d",&dig);
```
3) Este numero fica armazenado na variavel ```dig```

4) Em seguida esse valor abrimos o bloco de codigo switch e case:
```c
switch (dig)
    {
    case 1:
        somar = dig + 10; 
        printf("\n%i",somar);
        break;

    case 2:
        somar = dig + 20; 
        printf("\n%i",somar);
        break;

    case 3:
        somar = dig + 30; 
        printf("\n%i",somar);
        break;
    
    default:
        printf("\nvalor \ninvalido");
        break;
    }
```
* Neste caso foi usado a propria variavel ```dig``` para iniciar os casos, poderia ser usado outra varivel, vamos ver isso no ```exemplo4.c```.
* Sendo assim, temos 3 casos, sendo eles de 1 a 3 a ser digitado, cada caso tem uma soma diferente.
* Se digitar 1 : ```1 + 10``` , digitar 2 :  ```1 + 20``` , digitar 3 :  ```1 + 30```
* Se for digitado 4, como não a um caso para o numero 4, ele ira para ```default```, qualquer caso digitado diferente de  ```1,2 e 3 ```, sera impresso:
```c
printf("\nvalor \ninvalido");
```
### resultado:

```
Digite um valor de 1 a 3
1

11
```
ou 

### resultado:

```
Digite um valor de 1 a 3
5

valor
invalido
```

# Exemplo 4:

Este codigo funciona basicamente como uma calculadora, onde ha dois valores a serem digitados, cada um sera armezenado, e depois temos mais outro numero que embora a um limite, que e de 1 a 4, onde cada um tem uma operação matematica.

Sendo que essas operações vão acontecer entre os dois numeros digitados antes sendo numero1 e numero2 (num1, num2).

```c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int num1, num2;
    int op,result;
    int i=1;
    

    printf("digite um numero");
    scanf("%i",&num1);

    printf("digite um numero");
    scanf("%i",&num2);

    printf(" \n 1. Soma ");
    printf(" \n 2. Subtraçao ");
    printf(" \n 3. Multiplicaçao ");
    printf(" \n 4. Divisao ");

    printf(" \n Digite o número da opcao desejada: ");
    scanf("%d", &op);
 

    switch (op)
    {
    case 1:
        result = num1 + num2;
        printf("a soma e igual: %i",result);
        break;
    case 2:
        result = num1 - num2;
        printf("a subtracao e igual: %i",result);
        break;
    case 3:
        result = num1 * num2;
        printf("a multiplicacao e igual: %i",result);
        break;
    case 4:
        result = num1 / num2;
        printf("a soma e iguaç: %i",result);
        break; 
    default:
        while (i<=10){
            printf("\nopcao invalida");
            i++;
        }
        break;
    }
}
```
1) Criamos as variaveis ```num1``` e ```num2``` 
```c
int num1, num2;
```
2) Em seguida criamos mais outras duas variaveis, sendo a variavel de opções e a variavel de resultado:
```c
int op,result;
```
* op = opção a ser digitada;
* result = variavel onde vai ficar armazenado o resultado da operação selecioanda.

4) Solicitamos a inserção dos valores paras as variaveis ```num1``` e ```num2``` 

5) Em seguida informamos que cada numero sendo de 1 a 4 tem uma operação matematica diferete
```c 
printf(" \n 1. Soma ");
printf(" \n 2. Subtraçao ");
printf(" \n 3. Multiplicaçao ");
printf(" \n 4. Divisao ");  
```
6) Apos informar as operações matematicas, o usuario digitara qual numero operação matematica deve ser acionada para, esta operação acontecera com os numeros atribuidos as variveis ```num1``` e ```num2```
```c
printf(" \n Digite o número da opcao desejada: ");
scanf("%d", &op);
```
* Cada numero de 1 a 4 tem uma operação diferente, vale ressaltar que são quatro operações diferentes.
* O valor digitado ira ficar armazenado na varivael ```op```
  
7) Em seguida abrimos o bloco de codigo switch-case, e esse bloco de contem 4 cases ou casos, seguindo de 1 a 4, igual foi informado antes,que seriam quatro operações matematicas.

* Para saber qual operação matematica sera executada, foi digitado antes a opção seguindo de ```1``` a ```4```, este numero que contem uma opção ficara armazenado na variavel op.
```c
switch (op)
```
* Apos digitar a operação, ele ira fazer identificar em qual caso ele se encaixa, sendo assim para realizar a operação utilizamos a variavel ```result``` do tipo ```int```, a qual foi declarada junto com a variavel ```op```.
* Esta variavel ira receber o resultado das operações:
```c
result = num1 + num2;

result = num1 - num2;

result = num1 * num2;

result = num1 / num2;
```
* O resultado da operação selecionada fica armazenado na variavel result a qual e printada na linha seguinte:
```c
printf("a soma e igual: %i",result);
printf("a subtracao e igual: %i",result);
printf("a multiplicacao e igual: %i",result);
printf("a soma e iguaç: %i",result);
```
8) Por ultimo, o default, esta função e responsavel por exibir alguma instrução se algum dos casos anteriores não forem verdadeiros ou atendidos.

* E nela contem um ```while```, que imprime uma mensagem de erro:
```c
while (i<=10){
            printf("\nopcao invalida");
            i++;
        }
```
* A variavel i tem o valor de =1, ```int i=1```.
* A condição e enquanto i for menor ou igual a 10, continua imprimindo ```opcao invalida``` que neste caso sera impresso dez vezes, pelo fato da condição ser menor ou igal a dez ```(i<=10)```, quando o i chegar a 10 não imprimira mais a mensagem.

Se for a opção 1:

### resultado:

```
digite um numero
1
digite um numero
10

 1. Soma
 2. Subtracao
 3. Multiplicacao
 4. Divisao
 Digite o numero da opcao desejada: 1
a soma e igual: 11
```

Se for a opção 5, que não existe;

### resultado:

```
digite um numero
1
digite um numero
10
 
 1. Soma  
 2. Subtracao      
 3. Multiplicacao  
 4. Divisao
 Digite o numero da opcao desejada: 5

opcao invalida
opcao invalida
opcao invalida
opcao invalida
opcao invalida
opcao invalida
opcao invalida
opcao invalida
opcao invalida
opcao invalida
```