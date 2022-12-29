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