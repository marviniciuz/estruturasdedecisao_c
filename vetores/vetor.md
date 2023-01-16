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



```c
#include <stdio.h>

int main()
{
    int v[5] = {10,20,30,40,50};
    float s=0;

    for (int i = 0; i < 5; i++){
        s+= v[i];
       
    }
    
    s = s/5;
    printf("resultado:%.1f",s);
    
    return 0;
}
```
1) Inicializamos o vetor ja com o valores atribuidos a cada posição:
```c
int v[5] = {10,20,30,40,50};
```
* Desta forma o codigo fica menos poluido e mais coeso
* 
2) Depois declaramos mais outras duas variaveis do tipo float:
```c
float s=0;
```
3) Em seguida abrimos o bloco de codigo ```for```:
```c
for (int i = 0; i < 5; i++){
        s+= v[i];
}
```      
* Ja inicializamos o for,e declaramos a variavel i com o valor 0,```int i = 0```.
* Logo depois vem a condição, enquanto i for menor que 5,incrementa o valar de i,```i++```
* E abaixo vem a instrução caso a condição ```i < 5``` for atendida:
* Esta condição e o seguinte, ```s = s + v[i]; ou seja s e igual s + vetor que recebe o valor de i, que representa a posiçõa de vetor```
* 
```c
s+= v[i];
```
Acontece da seguinte forma:

5 = 0;
v[5] tem 5 posições cada posição tem um valor
i = 0;

``Enquanto i for menor que 5, continua o for``

```
na primeira interação do for:
i = 0
s+= v[0]; 
posição 0 = 10
s = 0

0 + 10 = 10
```
i++ =1
```
na segunda interação do for:
i = 1
s+= v[1]; 
posição 1 = 20
s = 10
i++ = 2
10 + 20 = 30
```
```
i = 2
s+= v[2]; 
posição 2 = 30
s = 30

30 + 30 = 60
```
i++=3
```
i = 3
s+= v[3]; 
posição 3 = 40
s = 60

60 + 40 = 100
```
i++=4
```
i = 4
s+= v[4]; 
posição 4 = 50
s = 100

100 + 50 = 150
```
i++=5
Para aqui, a condição e equanto i for menor, 5 não e menor, 5 e igual, então para aqui

4) Depois de fechar o bloco for, s = 150 e dividido por 5,
```c
s = s/5;
```
5) Depois esse valor da divisão e adicionado a s, que e impresso:
```c
printf("resultado:%.1f",s);
```