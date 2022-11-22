# LAÇO DE REPETIÇÃO WHILE

Os Laços condicionais são aqueles em que o conjunto de comandos em seu interior é executado enquanto uma determinada condição seja satisfeita, ele serve para que um bloco de instrução seja repedita enquanto a condição for verdadeira. 

O comando while permite que um certo trecho de programa seja executado ENQUANTO uma certa condição for verdadeira. A forma do comando while é a seguinte: 

### while = enquanto

```c

while (condição)
{
// comandos a serem repetidos
// comandos a serem repetidos
}
// comandos após o 'while'
```

### O funcionamento é o seguinte:

1) Testa a condição;

2) Se a  condição for falsa então pula todos os comandos do bloco subordinado ao while e passa a executar os comandos após o bloco do while.
    
3) Se  condição for verdadeira então executa cada um dos comandos do 

4) bloco subordinado ao while.Após executar o último comando do bloco do while volta ao passo 1.

### Pseudocódigo

A estrutura Enquanto … Faça equivale a estrutura while em linguagem C.

Sintaxe:
```
 Iniciar a variável de controle
 Enquanto (condição) faça
 Início
    Instruções;
    Atualizar a variável de controle;
 Fim;
```

### Codigo em Linguagem C:

```c
#include <stdio.h>

int main(void)
{
  int contador = 1; //declarando e inicializando a variável de controle
  
  while (contador <= 10) // Testando a condição
  {
    printf("%d ", contador); //Executando um comando dentro do laço
    
    contador++; //atualizando a variável de controle
  }  
  
  return 0;
}
```

### resultado:
```
1 2 3 4 5 6 7 8 9 10 
```

No caso acima o contador inciou com o valor 1, "int contador = 1;" (sempre incializar a variavel antes de tudo) sendo assim nos colocamos a condição de quando o "contador <= 10" 
continua contadndo "contador++" contador mais + mais +, ou seja o contador ja incia com o "valor de 1" e vai ate onde a "condição for menor ou igual a 10" 
ele para no 10 por que a condição e "menor ou igual a 10"

O contador ++ ou contador = (contador +1) funciona de seguinte forma ele imprime o valor de contador +1 ou seja ele adiciona o valor a variavel para que ela consiga prosseguir.

O contador ++ ou contador = (contador +1) e essencial por que se o programa eu coloquei uma condição(contador <= 10) e o valor dele nunca muda enquanto essa condição não for satisfeita que e a condição: enquanto(contador <= 10), para isso e adicionado o contador ++ ou contador = (contador +1)

Caso contrario, o codigo sera infinito o loop sem fim, por que a condição nunca sera satisfeita.

E se no caso do codigo acima não for adiciondo o contador ++?

De certa forma o codigo não funcionara, pelo fato de que contador entrara em loop, por que a variavel sempre sera verdadeira, e pra que ela deixe de ser verdadeira deve-se adicionar o "contador ++" ou  "contador = (contador + 1);"

```C
#include <stdio.h>


int main(void)
{
  int contador = 1; 

  while (contador <= 10) 
  {
    printf("%d\n", contador); 
    contador = (contador + 1);

  }  
  
  return 0;
}
```
### resultado:
```
1
2
3
4
5
6
7
8
9
10
```

O uso do "contador = (contador + 1);" tem o mesmo proposito do "contador ++"

Deve sempre se atentar para o valor atribuido na variavel, por exemplo se o valor a variavel contador fosse 0, por exemplo: "contador = 0;" ele iria contar de 0 a 10, sendo 11 numeros,isso pelo fato da variavel iniciar com o valor 0 (int contador = 1;).

```c
#include <stdio.h>

int main(void)
{
  int contador = 0; 

  while (contador <= 10) 
  {
    printf("%d\n", contador); 
    contador = (contador + 1);

  }  
  
  return 0;
}
```

### resultado:
```
0
1
2
3
4
5
6
7
8
9
10
```

Outra forma de condição:

```c
#include <stdio.h>

int main(void)
{
  int contador = 0; 

  while (contador < 10) 
  {
    printf("%d\n", contador); 
    contador = (contador + 1);

  }  
  
  return 0;
}
```

### resultado:
```
0
1
2
3
4
5
6
7
8
9
```

O valor da variavel e igual a zero,sendo assim o variavel ira contar ate o ultimo numero menos a zero, que nesse caso e o nove, quando chegar no nove ele para, por que a condiçõa proposta e: equanto contador for menor que 10 continua contando a partir do momento que chegar no nove que e o ultimo numero menor que dez ele para.


Outra forma de condição:

E enquanto o contador for diferente de dez, continua contando, nesse caso ele segue o mesmo rumo que o anterior ele chega ate nove e para, por que o proximo numero seria 10, mas a condiçõa e enquanto o contador for diferente de dez,continua contando, chegou no nove para, por que o seguinte o 10.

```c
#include <stdio.h>


int main(void)
{
  int contador = 0; 

  while (contador != 10) 
  {
    printf("%d\n", contador); 
    
    contador++;
  }  
  
  return 0;
}
```
### resultado:
```
0
1
2
3
4
5
6
7
8
9
```

Outra forma de condição:

Essa forma utiliza do mesmo principio da anterior, so que criamos uma variavel com o nome "pare" que recebe o valor "10" sendo assim  "int pare = 10;" e foi feita a condição de enquanto o contador for diferente de pare, continua contando.

```c
#include <stdio.h>

int main(void)
{
  int contador = 0; 
  int pare = 10;

  while (contador != pare) 
  {
    printf("%d\n", contador); 
    
    contador++;
  }  
  
  return 0;
}
```
### resultado:
```
0
1
2
3
4
5
6
7
8
9
``
