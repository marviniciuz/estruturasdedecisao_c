# CHAR EM C (CARACTERES E STRING)

O tipo ```char``` é usado para armazenar o valor inteiro de um membro do conjunto de caracteres representável. Esse valor inteiro é o código ASCII que corresponde ao caractere especificado.

Uma variável do tipo ```char``` ocupa 1 byte (8 bits) e pode ser usada para armazenar um valor inteiro sem sinal (```unsigned char```) entre 0 e 255 ou um valor com sinal (char) entre –128 a 127. Pode ser usada tanto como um número ou como caractere.

* Declaração:

```c
char a, b;
char x = ‘a’;
char y[12];
char z[26] = {“abcdefghijklmnopqrstuvwxyz”};
char w[5] = {‘a’, ‘e’, ‘i’, ‘o’, ‘u’}
```
```c
#include <stdio.h>

void main()
{
    char letra = 'm';

    printf("%c\n",letra);
}
```

No codigo acima foi se criado uma varive com nome ```letra``` onde recebe o caractere ```m```

### resultado:

```
m
```

O que sinaliza um caractere, neste caso são as aspas simples ``` 'm' ```