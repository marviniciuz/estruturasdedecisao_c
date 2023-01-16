# BREAK E CONTINUE?

o ```BREAK``` serve para para uma verificação caso o loop ou if ja foi atendido, e mais utilizado em laços condicionais sendo a quebra de um loop fazendo com que o codigo seja interrompido.

o ```CONTINUE``` tem o papel de pular a condição e continua depois.

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 0; i < 10; i++){
        
        if (i == 2){
            continue;
        }
        
        if (i == 8){
            break;
        }
        

        printf("%i\n",i);
    }
    
    return 0;
}
```
Neste codigo ira ficar bem mais explicito o uso de ```break``` e ```continue```.

1) Abrimos o bloco de codigo for
  
   * declaramos a variavel i de valor inteiro dentro do for ```int i```
   * que recebeu o valor 0 ```int i = 0```
   * depois colocamos a seguinte condição ```i < 10```
   * e por fim o incremento ```i++```

2) Dentro do for abrimos um bloco de codigo ```if```
```c
if (i == 2){
    continue;
}
```
A condição aplicada foi enquando i for igual a 2, pule o 2 e continue o for

3) Depois vem o outro bloco de codigo if:
```c
if (i == 8){
    break;
}
```
A condição aplicada foi enquando i for igual a 8, pare o for, ou seja ele ira chegar no 8 e parar sendo assim, ele não imprimirar o 8.

4) Por ultimo o ```printf("%i\n",i);``` que ira imprimir os valores de i na tela 

### resultado:
```
0
1
3
4
5
6
7
```
Primeiro atendeu o ```continue```, contando 0,1,3,assim como foi passado na instrução if ```i == 2```, ele ignorou ou pulou o valor e seguiu com o laço.

Depois vemos o trabalho do ```break``` que foi atendido, assim como foi passado na instrução if, quando i chegar ao valor de 8,pare ```i == 8``` sendo assim ele não conta nem com o valor 8.