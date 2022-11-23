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

### Outra forma de condição:

```c
#include <stdio.h>

int main( ){

  int total = 0, num;
  
  while( total < 20 ) {
    printf( "Total = %d\n", total );
    
    printf( "Entre com um numero: " );
    scanf( "%d", &num );
    
    total += num;
  }
  
  printf( "Final total = %d\n", total );
}
```

1) cria-se as variaveis ```total e num```, na variavel total e adicionado o valor 0 ```int total = 0```.

2) abrimos o bloco ```while(){}``` e em seguida adicionamos a condição ```while( total < 20 )```, sendo enquanto total for menor que 20 continua rodando o while, a partir do momento que total passar de 20 ai a condição se finaliza.

3)```printf( "Total = %d\n", total );``` aqui um print explicando o valor de total, que se incia com 0, sendo assim o primeiro print sera ```total = 0```.

4) 
```c 
printf( "Entre com um numero: " );
scanf( "%d", &num );
  ```
Essa parte do codigo e muito importante pois aqui sera adicionado o valor de ```num``` que pode ser qualquer numero inteiro, a cada iteração do while ele pedira para o usuario digitar o valor a ser adicionado ao ```num``` que no print aparece asssim: ```Entre com um numero:```.

5)```total += num;``` aqui e a parte mais importante do codigo, que e muito simples por sinal, essa linha de codigo e a parte de controle do codigo, que funciona da seguinte forma: 

  * O valor de total se iniciou com 0 (```total = 0```);
  * Foi adicionado um valor a num (```scanf( "%d", &num );```);
  * Esse valor esta armazenado em num;
  * Esse valor foi somado ```total += num``` (+= funciona como total = total + num);junto com a variavel total, que tinha o valor zero (```int total = 0```)
  * Sendo assim total = total + num(```total += num```), se entrarmos com o valor 3 sera assim: total = total + num ```total = 0 + 3 = 3```;
  * apos essa soma o valor de total sera atulizado;
  * apos essa atualização o ele ira executar essa repetição ate chegar em um numero maior que 20, por que a condição e ```while( total < 20 )``` enquanto 20 total for menor que 20 continua contando,
  * se chegar em um numero maior que 20, por exemplo 21 ai chega ao fim do codigo;

  6) Inicialmente, é dado o valor 0 à variável total, e o teste é verdadeiro (0 < 20). Em cada iteração, o total é impresso e o usuário digita um número que é somado a total. Quanto total for maior ou igual a 20, o teste do while torna-se falso, e a repetição termina. 