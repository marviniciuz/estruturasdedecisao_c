# SWITCH CASE

Tradução das palavras:

* switch (troca) 
* case   (caso)

O uso do switch case faz com que seja diminuido o uso de if e else encadeados, deixando menos complexo.

O conteudo da varivel switch e comparado com os valores das clausula case, e caso uma das comparações seja verdadeira, a instrução associada sera executada. caso nenhuma comparação for verdadeira, a estrutura executará a cláusula default.

O conteúdo de uma variável é comparado com um valor constante, e caso a comparação seja verdadeira, um determinado comando é executado.

É muito utilizado, principalmente para uso em estruturas de menu.

Pseudocódigo:

```
Escolha (Variável)
Inicio
   Caso (Valor1): 
      Instruções;
   
   Caso (Valor2): 
     Instruções;
   
   Caso (ValorN): 
     Instruções;
Fim;
```
Em Linguagem C:

```c
switch (variável)
{
   case constante1:
     Instruções;
   break;

   case constante2:
     Instruções;
   break;

   default
     Instruções;
}
```
ou

```c
switch (variável)
{
   case constante1:
     comandosA;
   break;

   case constante2:
     comandosB;
   break;

   default:
     comandosC;
}
```

1) Adicionamos a variavel ou uma exepressão dentro do switch:

```c  
   switch (variável)
```
2) Depois adicionamos caso (case), cada caso tem uma expressão ou constante diferente a ser atendida:
   
```c   
  case constante1:
```
3) Dentro desses case ou casos, tem uma instrução que ira ser acionada caso a expressão for atendida, pode ser um printf e etc...
   
```c
comandosC;
```
4) Recapitulando, para cada caso ha uma instrução, mas cada caso contem sua expressão que pode ou não ser atendida:
   
```c
case constante1:
     comandosC;
   break;
```
5) O break e usado para controlar o fluxo do codigo, pulando de uma linha para a proxima, quebrando o codigo para seguir o fluxo inteiro, se não estiver o ```break``` ele roda todas as instruções, o break faz com que o codigo pare de ser executado, quando a expressão for atendida. 
   
6) Caso nenhuma das expressões tenha sido verdadeira ele acionar o default, isso se encaixa tambem para se caso todas forem verdadeiras:
```c
default:
     comandosC ou codigo C;
```


```break:``` faz com que tudo que estiver antes do break sera executado, chegando no break a instrução terminada, a outras formas de usar essa instrução:

1) Forçar a saída de um switch…case
2) Forçar a saída de um laço de repetição.

```defalt:``` e utilizado para caso nenhuma das instruções anteriores forem atendidas, neste caso sera impresso algum comando:

```c
default:
     comandosC ou codigo C;
```




```c
#include <stdio.h>

int main()
{
    int i;
    printf("\nDigite um valor entre 0 e 9\n");
    scanf("%i",&i);

    switch (i)
    {
    case 1:
        printf("A numero digitado e foi: %i",i);
        break;
    case 2:
        printf("A numero digitado e foi: %i",i);
        break;
    case 3:
        printf("A numero digitado e foi: %i",i);
        break;
    case 4:
        printf("A numero digitado e foi: %i",i);
        break;
    case 5:
        printf("A numero digitado e foi: %i",i);
        break;
    case 6:
        printf("A numero digitado e foi: %i",i);
        break;
    case 7:
        printf("A numero digitado e foi: %i",i);
        break;
    case 8:
        printf("A numero digitado e foi: %i",i);
        break;
    case 9:
        printf("A numero digitado e foi: %i",i);
        break;

    default:
      printf("A numero digitado e foi: %i e invalido",i);  
    }
}
```

1) Foi criado a varivel ```i``` do tipo ```int```.
```c
  int i;
```

2) Em seguida criamos uma mensagem onde sugere que o usuario digite um valor, esse valor sera armazenado em na variavel ```i```:
```c
    printf("\nDigite um valor entre 0 e 9\n");
    scanf("%i",&i);
```
3) Depois abrimos o bloco de codigo ```switch() case:```, e dentro a função switch contem a variavel ```i```switch (i):
```c
switch (i){
    case 1:
        printf("A numero digitado e foi: %i",i);
        break;
  }
```
* i a principio não tem valor, esse valor sera atribuido a i ```scanf("%i",&i);```, este valor tem uma  condição, que ele so pode de ir de 0 a 9, e cada caso ou numero digitado sera acionada uma instrução, que neste codigo e o ```printf```, onde sera impresso o numero digitado:
```c
    printf("A numero digitado e foi: %i",i);
```
* O numero pode ir de 0 a nove e cada caso tem sua instrução, se for 
verdadeiro o caso:

```c
    case 1:
        printf("A numero digitado e foi: %i",i);
        break;
    case 2:
        printf("A numero digitado e foi: %i",i);
        break;
    case 3:
        printf("A numero digitado e foi: %i",i);
        break;
    case 4:
        printf("A numero digitado e foi: %i",i);
        break;
    case 5:
        printf("A numero digitado e foi: %i",i);
        break;
    case 6:
        printf("A numero digitado e foi: %i",i);
        break;
    case 7:
        printf("A numero digitado e foi: %i",i);
        break;
    case 8:
        printf("A numero digitado e foi: %i",i);
        break;
    case 9:
        printf("A numero digitado e foi: %i",i);
        break;
```
4) Se nenhuma das intruções forem verdadeiras ou seja, se for digitado o valor ```10```, sera atendido a intrução que esta dentro de ```default```:
```c 
   default:
      printf("A numero digitado e foi: %i e invalido",i);  
```
5) Tudo isso parece um if e else, mais estruturado, seguindo um fluxo mais aberto.

