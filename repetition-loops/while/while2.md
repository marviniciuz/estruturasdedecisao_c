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

#include <stdio.h>

```C
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
