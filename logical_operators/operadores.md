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

## Operador || 

```c
if ((idade > ij) || (idade < ii)){
            printf("a idade informada e de um pessoa meia idade\n");
}
```

Diferente do &&, ele verifica se umas das duas condições ou as duas condições são verdadeiras, e (idade for maior que ij) OU (idade menor que ii), imprima isso.

Entretanto se umas das condições for verdadeira ele ira printar na tela, o trabalho do || e verificar se umas das duas condições são verdadeiras.

## Operador !