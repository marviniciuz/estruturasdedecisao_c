 ### GETS( )

Esta função tem o papel de pegar o valor digitado pelo usuario em uma variavel do tipo string e armazenar na variavel.

```c
#include <stdio.h>

int main(void)
{
    char x[10];
    char y[10];

    gets(x);

    printf("%s",x);
}
```
Como no exemplo acim, temos duas variveis do tipo string, cada uma com o mesmo tamanho de caracteres disponiveis ```[10]```, logo apos a declaração das variveis criamos uma função do gets() que ira armazenar tudo que for digitado pelo usuario na variavel ```x[10]``` e ira imprimir na tela o que foi digitado: ```printf("%s",x);```


### resultado:

```
ola mundo 
ola mundo
```

Mas a função gets() tem um pequeno problema, que com vimos foi declarada duas variaveis tipo char que ambas tem um limite de 10 caracteres  ```char x[10]```
```char y[10];```, se por acaso digitarmos mais de 10 caracteres?

Então neste caso sera impresso mesmo assim, por que esta função nõa limita a quantidade de caracteres.


### resultado:
a 15x
```
aaaaaaaaaaaaaaa
aaaaaaaaaaaaaaa
```

Note que ele imprimiu os 15 caracteres, isso esta acontecendo ou porque esta consumindo espaço da variavel do ```y```, ou de outra variavel que foi declarada, neste caso so temos duas variveis.