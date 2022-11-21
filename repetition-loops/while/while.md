# LAÇO DE REPETIÇÃO WHILE

O comando while permite que um certo trecho de programa seja executado ENQUANTO uma certa condição for verdadeira. A forma do comando while é a seguinte: 

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

No caso acima o contador inciou com o valor 1, "int contador = 1;" sendo assim nos colocamos a condição de quando o "contador <= 10" 
continua contadndo "contador++" contador mais + mais +, ou seja o contador ja incia com o "valor de 1" e vai ate onde a "condição for menor ou igual a 10" 
ele para no 10 por que a condição e "menor ou igual a 10"  