```c
#include <stdio.h>

int main()
{
	char str[12] = "meu string"; 
	int pos;                     
	char novo = '!';             

	pos = 0;
	while (str[pos] != '\0') pos++;

	str[pos] = novo;

	str[pos+1] = '\0';

	printf("%s",str);
}
```

* Neste codigo adicionaremos um novo caractere a uma string.
* primeiro criamos as variaveis 
  
```c
char str[12] = "meu string"; 
int pos;                     
char novo = '!'; 
```
* Duas do tipo char, e uma do tipo int.
* de inicio ```pos``` não tinha nenhum valor atribuido, logo depois foi adicionado ```0```
  
```c
pos = 0;
```
* Em seguida foi feito um laço de repetição do tipo while, 
 
```c
while (str[pos] != '\0') pos++;
```
* Enquando 0 for diferente de '\0' continua percorrendo

* E o papel deste laço de reptição e avançar os caracteres ate encontrar o nulo ```\0```.
  
* depois disso ele trocou nulo por ```!```,Depois foi adicionado novo ```!``` a ```pos``` que estar na string, como ilustra no codigo abaixo. 
```c
str[pos] = novo;
```

```c
str[pos] = !;
```

### Parte final:

```c
str[pos+1] = '\0';

printf("%s",str);
```
* Na parte final do codigo, ele adicionou mais +1, que no caso e o espaço onde vai ficar ```\0``` antes de ```\0``` vem ```!```, que no cas era o local de ```\0``` que foi alterado em ```while (str[pos] != '\0') pos++;```.
  
* ou seja pos + 1 que e igual a 0, adicionou mais + 1 que e nulo ```\0```

### resultado:

```
meu string!
```

