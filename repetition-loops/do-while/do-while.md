# DO WHILE 

O laço de repetição do-while, e um pouco parecido com o laço while, a declaração e um pouco direfente e separada.

Se a condição fo uma variavel ou comparação, por exemplo, devemos empre nos certificar que, inicialmete, essa condição vai ser verdadeira.

No laço while, solicitamos antes que o usuario entre com algum valor, isso para termos certeza que o programa vai entrar no while, as vezes não e tão eficiente assim.

O que o laço DO WHILE faz é executar, ```pelo menos uma vez```, o que está dentro dele e só ao final da execução é que ele faz o teste, usando o velho e conhecido laço ```while```.ou seja temos a garantia que o laço vai ser executado uma vez, sempre precisar inicializar variável ou pedir dados ao usuário antes do ```while``` (pois fazer isso pode bagunçar o sistema).

A forma de declaração e diferente, seguindo do DO (faça) e WHILE(enquanto)

Ou seja, "faça isso" => ```intruções``` => "equanto essa condição for verdadeira".

```Resumindo, ele sempre executa seu código ao menos uma vez, o que é uma mão na roda em certas ocasiões.```

Qual a diferença entre laço ```DO WHILE``` para o ```WHILE``` ?

Bom, para o ```while``` rodar é necessário que a condição seja sempre ```verdadeira```.
Logo, se ela for inicialmente ```FALSE```, o looping ```while``` nunca irá rodar.

Já o ```DO WHILE``` vai rodar sempre, ao menos uma vez, mesmo que a condição existente no ```WHILE``` seja falsa ```(se for falsa, vai rodar só uma vez e termina).```

```Note sempre executa seu código ao menos uma vez, o que é uma mão na roda em certas ocasiões```

```
faça
{
   //código que
   //será repetido
   //aqui

} enquanto (condição);
```

```c
do
{
   //código que
   //será repetido
   //aqui

} while (condição);
```

O funcionamento é o seguinte:

1) Executa os comando dentro do bloco do-while;
2) Testa a condição;
3) Se a  condição for falsa então executa o comando que está logo após o bloco subordinado ao do-while .
4) Se  condição for verdadeira então volta ao passo 1.

```c
#include <stdio.h>

int main(void)
{
    int i=1;
    do
    {   
        i++;
        printf("\nhello world");
    } while (i<=10);
    
}
``` 

1) Acima um laço simples onde primeiro foi declarado onde ele foi declarado a varivel ```i```, que recebeu 1,```int i=1;``` 

2) Logo depois veio o bloco de codigo do-while;

3) No do{} foi adicionado o variavel de incremento i++, logo depois o valor a ser a instrução a ser apresentada, independente ser for verdadeiro ou não.
```c
printf("\nhello world");
```
4) Em seguida o while(), onde contem a condição, que e simples enquanto i for menor ou igual a 10 continua repetindo a instrução: ```printf("\nhello world");```
```c
while (i<=10);
```

### resultado:

```
hello world
hello world
hello world
hello world
hello world
hello world
hello world
hello world
hello world
hello world
```


```c
int main(void)
{
    int contador=0;
    int op;

    do
    {   
        contador++;
        printf("\ndigite 0 para sair do looping\n");
        printf("%i\n",contador);
        scanf("%i",&op);
    } while (op!= 0);
    

    return 0;
}
```

1) Criamos as varivaie do tipo ```int```:
```c
int contador=0;
int op;
```
2) Depois abrimos o bloco de codigo do{}, onde contem no inicio a variavel de controle ```contador++;``` que de foi declarada recebendo 0 int ```contador=0;```

* Um ```printf```, contendo uma mensagem: 
```c
printf("\ndigite 0 para sair do looping\n");
```
* Outro ```printf``` onde contem a contagem da variavel, que sera impressa mesmo sendo ```verdadeiro ou falso```  
```c
printf("%i\n",contador);
```
* Variavel que ira receber valores, vale ressaltar que o ```0``` para o ```do-while```, este valor sera armazenado na variavel ```op```
```c
scanf("%i",&op);
```

3) Por ultimo o bloco a condição, que no caso fica no while():
```c
while (op!= 0)
```

* Enquanto op for diferente ```(!=)``` de 0, continua o looping.
* Se caso for digitado o 0 ele para. 


### resultado:

```
digite 0 para sair do looping
1
10

digite 0 para sair do looping
2
0
``` 

```Como ja informado, mesmo ainda não digitado ele ja incia com o valor 1, ou sej ele conta no minimo uma vez, sendo falso ou verdadeiro```

```No resultado deste codigo, da pra ver que ele ja contou o 1.```