# Operadores Lógicos e Relacioanais em C

Os operadores lógicos são utilizados quando é necessário usar duas ou mais condições dentro da mesma instrução if para que seja tomada uma única decisão cujo resultado será verdadeiro ou falso.

Os operadores lógicos combinam condições simples em expressões lógicas.

O valor de retorno se uma expressão lógica é verdadeiro ou falso.

## Os Operadores Lógicos são:

* &&  (E)

* ||  (OU)

* !   (NÂO)

## Os Operadores Relacionais são:

* igualdade : ==
* diferença : !=
* maior que : > -
* menor que : < -
* maior ou igual a : >=
* menor ou igual a : <=

## Operador &&

```c
if ((idade > ij) && (idade < ii)){
            printf("a idade informada e de um pessoa meia idade\n");
}
```
No codigo acima esta sendo sendo verificada duas situaçõe, se (idade for maior que ij) E (idade menor que ii), imprima isso.

Ou seja o "&&" E utilzado pra verificar se duas ou mais condições são verdadeiras e contem o mesmo estado.

```
(true) && (true) = true (1)
(false) && (false) = false (0)
(true) && (false) = false (0)
(false) && (true) = false (0)
```

```c
int i = 10;
printf("%i", (i>20)&&(i==10));
```
No caso acima podemos ver que i = 10, e colocamos dua condições sendo, i e maior que 20? e i e igual a 10? nesse caso umas das
condições estava certa mas como utilizamos o operador && as duas devem estar certa portanto apos a compilação sera impresso "0 = negativo"

```c
int condicao = (i>1)&&(i<20);
printf("%i", condicao);
```

Nesse caso as duas condições estão corretas i e maior que 1, e i e menor que 20, portanto apos a compilação sera impresso "1 = positivo"


## Operador || 

```c
if ((idade > ij) || (idade < ii)){
            printf("a idade informada e de um pessoa meia idade\n");
}
```

Diferente do &&, ele verifica se umas das duas condições ou as duas condições são verdadeiras, e (idade for maior que ij) OU (idade menor que ii), imprima isso.

Entretanto se umas das condições for verdadeira ele ira printar na tela, o trabalho do || e verificar se umas das duas condições são verdadeiras.

```c
int i = 10;
printf("%i",(i>20)||(i>5));
```

No caso acima uma das condições e falsa que no caso e a primeira, desta forma sera impresso "1 = positivo", dirente das outras o || so e falso quando as duas condições são falsas por exemplo:

```c
int i = 10;
printf("%i",(i>20)||(i>30));
```
So esse tipo de condição e falsa. ((false) || (false) = false (0))

(true) || (true) = true (1)
(true) || (false) = true (1)
(false) || (true) = true (1)
(false) || (false) = false (0)


## Operador !

```c
if (!(idade > ij) || (idade < ii)){
            printf("a idade informada e de um pessoa meia idade\n");
}
```

O operador de negação e utilizado para negar uma condição tornando ela negada se ele era verdaderia => falsa, falsa => verdadeira.

```c
int i = 10;
printf("%i", !(i>1)&&(i==10));
```

Neste exemplo vemos que as duas condições são verdadeiras sendo i = 10, ou seja ele e maior que 1 e igual a 10, e um caso onde não estivesse o operador ! = negação ou not, apos a compilação seria impresso "1 = positivo", mas como estamos negando as condiçõe, sera impresso "0 = negativo", este exemplo serve para os dois caso 

```c
int i = 10;
printf("%i", !(i>10)&&(i==20));
```
Aqui seria impresso "0 = negativo", mas como estamos negando, sera impresso "1 = positivo".

```c
int i = 20;
printf("%i", !(i>30)&&(i>10));
```
Aqui seria impresso "1 = positivo", mas como estamos negando, sera impresso "0 = negativo".

```
(true) ! (true) = false (0)
(false) ! (false) = true (1)
(true) ! (false) = false (0)
(false) ! (true) = true (1)
```
