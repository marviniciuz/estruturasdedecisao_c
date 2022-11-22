# + LAÇO DE REPETIÇÃO WHILE ++

Recapitulando, os Laços condicionais são aqueles em que o conjunto de comandos em seu interior é executado enquanto uma determinada condição seja satisfeita, ele serve para que um bloco de instrução seja repedita enquanto a condição for verdadeira. 

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
```C
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

O contador ++ ou contador = (contador +1) funciona de seguinte forma ele imprime o valor de contador +1 ou seja ele adiciona o valor a variavel para que ela consiga prosseguir.

Outra forma de condição:

Desta forma o contador ira contar ao contrario de 10 ate 1, sendo assim a condição "contador <= 10" sera "contador >= 1", por que enquanto contador for maior ou igual a 1 continua contando chegou em 1 para, por que ai contador e igual a 1.

so que nesse caso deve se utilizar o contador--; para diminuir o valor de "contador -1".

```C
#include <stdio.h>

int main(void)
{
  int contador = 10; //declarando e inicializando a variável de controle
  
  while (contador >= 1) // Testando a condição
  {
    printf("%d ", contador); //Executando um comando dentro do laço
    
    contador--; //atualizando a variável de controle
  }  
  
  return 0;
}
```

### resultado:
```
10 9 8 7 6 5 4 3 2 1
```
O valor da variavel se inicia com 10 (int contador = 10;), depois e atribuido a condição (enquanto(contador >= 1)) continua contando, so que nesse caso e continua diminuindo (contador--;) o valor de contador, ate contador chegar a 1 que e igual a 1.

Outra forma de condição:

```C
#include <stdio.h>

int main()
{
    int i=0;

    while(i < 10){
        printf("%d\n", i+1);
        i++;
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
Dessa forma printf("%d\n", i+1) ele adiciona i + 1 a cada condição condebida, sendo que i = 0 , ou seja "i = 0 + 1 = 1" ou  "0 + 1 = 1" tanto que no resultado ele incia com 1, não com o zero, isso acontece por que na execuação do codigo esta sendo adiciondo +1 a cada execução do loop.


```c
#include <stdio.h>

int main ()
{
    char nome[30];
    int i ;

    printf("\ndigite o seu nome\n");
    scanf("%s", nome);

    i = 0;
    while (i != 10){
    printf("\n%d %s",i,nome);
    i++;

    }

return (0);
}
```

No codigo acima vemos o uso do while para repetir um nome, esse condigo fucionada da seguinte forma:

1) Declaração das variaveis ```int i``` e ```char nome[30];``` sendo ```int i``` a variavel de controle que ainda estar sem valor.

2) Uso do ```printf``` e ```scanf``` para printar uma mensagem e outro para armazenar um nome.

3) Atribuiçõa de um valor a variavel de nome ```i``` sendo ``i = 0;`` que poderia ser atribuido antes, no mesmo momento que foi atribuido a varaivale de tipo char. sendo assim poderia ser feito desta forma:

```c
char nome[30];
    int i = 0;
```

4) Foi aberto o bloco de codigo ```while (){} ``` e foi criado uma condição : ```while (i != 10)``` ```enquanto i for diferente de 10``` continua repetindo ate chegar no 9 que e o ultimo numero diferente de 10 por que o proximo numero e 10 que no caso "10 = 10" ai o while para. mas ```enquanto i for diferente de 10``` sera exibido a instrução: ```printf("\n%d %s",i,nome);``` que armazenara a variavel ```int i``` e ```char nome[30];``` que na varaivel do tipo ```char``` tera um nome ```printf("\ndigite o seu nome\n")``` que esse nome sera repetido de 0 a 9, seguindo do nome e numero por exemplo :

```
0 eu
1 eu
2 eu
3 eu
4 eu
5 eu
6 eu
7 eu
8 eu
9 eu
```
Por que na instrução foi atribuidos os dois tipos ```printf("\n%d %s",i,nome);``` a serem executados dentro do ``while (i != 10)```

5) E por ultimo a variavel de controle, que ira controlar o loop ate que a condição ```while (i != 10)```  seja satisfeita ou falsa, que no caso foi satisfeita.

### resultado:
```
0 - marcus
1 - marcus
2 - marcus
3 - marcus
4 - marcus
5 - marcus
6 - marcus
7 - marcus
8 - marcus
9 - marcus
```

Se no caso do codigo acima na instrução  ```printf("\n%d %s",i,nome);``` so tiver o tipo ```char``` assim:  ```printf("\n%s",nome);```?

### resultado:
```
marcus
marcus
marcus
marcus
marcus
marcus
marcus
marcus
marcus
marcus
```

### codigo:

```c
#include <stdio.h>

int main ()
{
    char nome[30];
    int i ;

    printf("\ndigite o seu nome\n");
    scanf("%s", nome);

    i = 0;
    while (i != 10){
    printf("\n%s",nome);
    i++;

    }

return (0);
}
```