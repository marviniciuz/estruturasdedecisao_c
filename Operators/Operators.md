# Operadores compostos de atribuição

Os operadores compostos de atribuição: +=, -=, *=, /=, são muito utilizados em expressões matemáticas como 
atalhos para as operações aritméticas mais comuns.

Por exemplo: ao invés de escrever: num = num + 5 ;
pode-se utilizar a seguinte expressão: num += 5;

### De forma geral temos:

Operando1 += Operando2;

Também podemos usar -=, *= ou /= respectivamente para subtração, multiplicação ou divisão.

Exemplo de utilização:

```
num += 1; // equivale a num = num + 1;

num -= 2; // equivale a num = num – 2;

num *= 3; // equivale a num = num * 3;

num /= 4; // equivale a num = num / 4;
```

### Exemplos:

```c
#include <stdio.h>

int main()
{
    int num;

    printf("digite um numero: ");
    scanf("%d", &num);

    num += 10; //equivale a num = num + 10;

    printf("o novo valor de num e %d", num);

    return 0;
}
```
### resultado:
```
digite um numero: 1
o novo valor de num e 11
```
* foi feita a soma do valor digitado pelo usuario + 10  ```num += 10;``` equivale a num = num + 10.


```c
#include <stdio.h>

int main()
{
    int num;

    printf("digite um numero: ");
    scanf("%d", &num);

    num -= 2; //equivale a num = num - 2;

    printf("o novo valor de num e %d", num);

    return 0;
}
```
### resultado:
```
digite um numero: 10
o novo valor de num e 8
```
* foi feita a subtração do valor digitado pelo usuario - 2  ```num -= 2;``` equivale a num = num - 2.


```c
#include <stdio.h>

int main()
{
    int num;

    printf("digite um numero: ");
    scanf("%d", &num);

    num *= 2; //equivale a num = num * 2;

    printf("o novo valor de num e %d", num);

    return 0;
}
```
### resultado:
```
digite um numero: 4
o novo valor de num e 8
```
* Foi feita a multiplicação do valor digitado pelo usuario * 2  ```num *= 2;``` equivale a num = num * 2.


```c
#include <stdio.h>

int main()
{
    int num;

    printf("digite um numero: ");
    scanf("%d", &num);

    num /= 2; //equivale a num = num / 2;

    printf("o novo valor de num e %d", num);

    return 0;
}
```
### resultado:
```
digite um numero: 20
o novo valor de num e 10
```
* Foi feita a divisão do valor digitado pelo usuario / 2  ```num /= 2;``` equivale a num = num / 2.

```c
#include<stdio.h>


int main(void)  
{ 
  int num;
  
  num = 10; //atribuindo 10 na variável num
  printf("Valor inicial de num = %d \n",num);
  
  num += 5; //equivale a num = num + 5
  printf("Somando 5 ao valor inicial temos num = %d \n",num);

  num -= 1; // equivale a num = num - 1
  printf("Sutraindo 1 temos num = %d \n",num);
  
  num *= 2; // equivale a num = num * 2
  printf("Multiplicando por 2 temos num = %d \n",num);
  
  num /= 2;// equivale a num = num / 2
  printf("Dividindo por 2 temos num = %d \n",num);
  return 0; 
} 
```
### resultado:
```
Valor inicial de num = 10 
Somando 5 ao valor inicial temos num = 15 
Sutraindo 1 temos num = 14 
Multiplicando por 2 temos num = 28        
Dividindo por 2 temos num = 14
```

* O valor de num inciou por 10, foi somado com 5, e foi para 15, demois foi subtraido com 1, foi para 14, depois foi multiplicado por 2, foi para 28, depois dividido por 2, e foi para 14, fim.

## Resto da divisão em C:

```c
#include <stdio.h>

int main(void){

    int num1 = 10; 
    int num2 = 3; 

    int mod2 = num1 % num2; 

    printf("O resto da divisao %d %% %d = %d\n", num1, num2, mod2);

}
```

### resultado:
```
O resto da divisao 10 % 3 = 1
```
* O sinal de mod = ```%``` representa o resto de divisão.

```c
#include <stdio.h>

int main()
{
    printf( "%i\n", 3 % 2 );
    printf( "%i\n", 4 % 2 );
    printf( "%i\n", 5 % 2 );
    printf( "%i\n", 6 % 2 );
    printf( "%i\n", 11 % 3 );

    return 0;

}

```
### resultado:
```
1
0
1
0
2
```