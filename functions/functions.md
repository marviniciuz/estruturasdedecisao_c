# FUNÇÕES 

Uma função nada mais é do que uma subrotina usada em um programa.Na linguagem C, denominamos função a um conjunto de comandos que realiza uma tarefa específica em um módulo dependente de código.

A função é referenciada pelo programa principal através do nome atribuído a ela,a utilização de funções visa modularizar um programa, o que é muito comum em programação estruturada.

Desta forma podemos dividir um programa em várias partes, no qual cada função realiza uma tarefa bem definida.

```
tipo_de_retorno nome_da_função (listagem de parâmetros)
```
```
{
   instruções;
   retorno_da_função;
}
```

Toda função tem dado de entrada,tipo de saida, dados de saida e um bloco de comando,a ser seguido.

```c
#include <stdio.h>
#include <stdlib.h>

float maior(float num1, float num2){
    if(num1 > num2)
        return num1;
    else 
        return num2;
}

int main()
{
    float x,y,m;
    printf("Insira um valor:\n");
    scanf("%f",&x);
    printf("Insira mais um valor:\n");
    scanf("%f",&y);

    m = maior(x,y);
    printf("Maior numero e : %.2f\n",m);
}
```

1) Vamos criar uma função do tipo float, que recebeu dois paremetros do tipo float.
```c
float maior(float num1, float num2)
```
2) Depois cramos uma condição, para caso essa função for chamada no decorrer do codigo.
* Esta condiçõa e para comparar dois numeros, sendo ```num1``` for maior que ```num2```, usando um if else
* sabemos que temos que comparar ambos mas como esses dados serão retornados, desta forma usamos o return, para retornar qual numero e maior:
```c
if(num1 > num2)
        return num1;
    else 
        return num2;
```
* E finalizamos nossa função cujo o nome e ```maior```, e tem o papel de comparar dois numeros e retornar qual e o maior.

3) Em seguinda abrimos o codigo com um int ```main(){} ```, lembrando que antes so tinhamos o criado a função ```maior```.
4) Criamos 3 varaveis do tipo ```float```:
```c
float x,y,m;
```
5) Depois criamos um bloco de codigo de printf e scanf, para receber os valores atribuidos a x e y:
```c
printf("Insira um valor:\n");
scanf("%f",&x);
printf("Insira mais um valor:\n");
scanf("%f",&y);
```
* Esse valores serão atribuidos a ```num1``` e ```num2```.
6) Em seguinda chamamos a função ```maior```, que sera atribuida a variavel m
```c
m = maior(x,y);
```
* Esses valores serão atribuidos a x => num1, y => num2.
7) Em seguida o resultado:
```c
printf("Maior numero e : %.2f\n",m);
```
* Esses resultado sera adicionada na variavel ```m```.

### resultado:
```
Insira um valor:
10.99
Insira mais um valor:
21.05
Maior numero e : 21.05
```