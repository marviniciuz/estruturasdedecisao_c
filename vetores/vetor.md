# VETOR

Como em outras linguagens de programação, C permite declarar e utilizar vetores. Um vetor é uma sequência de variáveis de mesmo tipo e referenciadas por um nome único.

Declaração:

<tipo_base> nome_do_vetor [<tamanho_do_vetor>] ;

```C
Alguns exemplos:

int   valor[5];         // vetor de 5 inteiros, índices em 0..4
float temperatura[24];  // vetor de 24 temperaturas
char  digito[10];       // vetor de 10 caracteres
```
```c
#include <stdio.h>

int main()
{

int valor[5];
int x;

valor[0] = 10;
valor[1] = 20;
valor[2] = 30;
valor[3] = 40;
valor[4] = 50;

x = valor[3];          
printf("%i",x);      

return 0;
}
```
1) Neste codigo foi criado o vetor do tipo int, ```int valor[5];``` com cinco posições, e tambem a variavel x do tipo int,```int x;```.

2) Depois foi adicionado os valores para as posições.
```c
valor[0] = 10;
valor[1] = 20;
valor[2] = 30;
valor[3] = 40;
valor[4] = 50;
```
3) Logo depois adicionamos um valor a x, mas para isso nos so infomamos em qual posição esse valor esta
```c
x = valor[3];
```
* Neste caso nos queremos que imprima o valor que esta na posição 3, neste caso o 40.

4) Por ultimo o printf, ```printf("%i",x);```

### resultado:
```
40
```
O resultado foi o numero 40 que esta na posição 3, lembrando que o vetor e contado de  0 em diante, neste caso o vetor tinha 5 posições ou seja de 0 a 4;