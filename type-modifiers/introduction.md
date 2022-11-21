# MODIFICARES DE TIPOS O QUE SÃO?

A linguagem C permite que os tipos de dados sejam utilizados com modificadores precedendo-os. Por exemplo, uma variável int pode ser especificada como signed ou unsigned. 

Já estudamos os tipos primitivos em C, agora, vamos estudar os modificadores de tipo, ou seja, instruções que desempenham alguma função nos tipos que a linguagem C disponibiliza. Os modificadores que iremos estudar poderão aumentar a capacidade de armazenamento, diminuir, definir que a faixa numérica será a positiva ou então negativa.

Inicialmente, vamos rever os 5 tipos primitivos da linguagem C:

1) char 
2) int 
3) float 
4) double 
5) void

Nós temos os 4 modificadores de tipo disponíveis:

1) signed - números com sinal (positivos e negativos) 
2) unsigned - números sem sinais 
3) long - aumentar a capacidade de armazenamento 
4) short - diminuir a capacidade de armazenamento

Abaixo veremos um exmplo de codigo:

```c
#include <stdio.h>

int main()
{
    int i=10;
    unsigned short int u;
    printf("%i -> variavel i\n", sizeof(i));
    printf("%i -> variavel u\n", sizeof(u));
}
```
### resultado:

```
4 -> variavel i
2 -> variavel u
```
No codigo acima esta dizendo que a variavel i esta utilizando 4bytes, ja variavel u esta utilizando 2bytes.

utilizamos o "unsigned" para informar ao compilador que e um numero sem sinais, e utilizamos o "short" para infomar o compilador para diminuir a capacidade de uso de memoria da variavel.

E se utilizarmos o "unsigned short int" para ambas variaveis?

### Por Exemplo:

```c
#include <stdio.h>

int main()
{
    unsigned short int u;
    unsigned short int i;
    printf("%i -> variavel i\n", sizeof(i));
    printf("%i -> variavel u\n", sizeof(u));

}
```

### resultado:
```
2 -> variavel i
2 -> variavel u
```

Foi-se informado para o compilador que deve-se diminuido o uso de cada varivael, sendo assim o i que no codigo anterior tinha 4bytes, passou a utilizar 2bytes.

E se almentamos o uso de memoria de uma varivel?
```c
#include <stdio.h>

int main()
{
    long double i;
    double u;
    printf("%i -> variavel i\n", sizeof(i));
    printf("%i -> variavel u\n", sizeof(u));
}
```
### resultado:
```
12 -> variavel i
8 -> variavel u
```

O uso de memoria incial de uma variavel do tipo "double" e de 8bytes com o uso do atributo long, foi de 8bytes para 12bytes.


### sizeof:
O "sizeof" Ele gera o tamanho de armazenamento de uma expressão ou um tipo de dados, medido no número de unidades de tamanho de caractere. Conseqüentemente, a construção sizeof é garantida como 1.

```c
#include <stdio.h>
#include <conio.h>

int main(void)
{
  float vteste;
  printf(" --- TIPO ---|--- BYTES ---\n");
  printf(" char .......: %d bytes\n", sizeof(char));
  printf(" short.......: %d bytes\n", sizeof(short));
  printf(" int.........: %d bytes\n", sizeof(int));
  printf(" long........: %d bytes\n", sizeof(long));
  printf(" float ......: %d bytes\n", sizeof(float));
  printf(" double......: %d bytes\n", sizeof(double));
  
  getch();
  return 0;
}
```
no codigo acima o compilador ira ler o tamanho de cada variavel de tipo primitivo e emitir a quantidade que cada uma esta ocupando no codigo acima.

### resultado:
```
 --- TIPO ---|--- BYTES ---
 char .......: 1 bytes
 short.......: 2 bytes
 int.........: 4 bytes
 long........: 4 bytes
 float ......: 4 bytes
 double......: 8 bytes
 ```

