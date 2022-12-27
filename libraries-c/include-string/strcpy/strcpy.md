A função strcpy faz com que copiamos o valor de uma string para outra string sem precisar utilizar digitar o nome duas vezes

## Exemplo

```c
#include <stdio.h>
#include <string.h>

int main() {
	char str1[15]; 
	char str2[15]; 

	printf("Seu string: ");
	gets(str1);

	strcpy(str2,str1);

	printf("%s\n",str1);
	printf("%s\n",str2);
}
```

* Primeiro, temos duas variaveis ambas do tipo char, contendo 15 caracteres:
```c
char str1[15]; 
char str2[15]; 
```
* Depois solicitamos que o usuario digite um nome, respeitando a quantidade de caractes:
```c
printf("Seu string: ");
```
* Este valor a principio fica armazenado na variavel ```str1```:
```c
gets(str1);
```
* Depois declaramos a função ```strcpy```:
```c
strcpy(str2,str1);
```
* Esta função faz com que o valor que foi digitado str1 e armazenado em str2, ou seja (str2 <= str1), string2 recebe string1.

### resultado:

```
Seu string: ola mundo
ola mundo
ola mundo
```
## Outro Exemplo:

```c
#include <stdio.h>
#include <string.h>

int main ()
{
	char str1[100];
    char str2[100];
    char str3[100];

	printf ("Entre com uma string: ");
	gets (str1);

	strcpy (str2,str1);	
	strcpy (str3,"Voce digitou a string ");

	printf ("\n\n%s%s",str3,str2);
	return(0);
}
```

* Primeiro, temos tres variaveis ambas do tipo char, contendo 100 caracteres:
```c
char str1[100]; 
char str2[100]; 
char str3[100];
```
* Depois solicitamos que o usuario digite um nome, respeitando a quantidade de caractes:
```c
printf ("Entre com uma string: ");
gets (str1);
```
* Este valor a principio fica armazenado na variavel ```str1```:
```c
gets(str1);
```
* Este valor depois e passado para str2 (str2 <= str1):
```c
strcpy (str2,str1);	
```
* Depois atribuimos um valor ou texto na variavel str3:
```c
strcpy (str3,"Voce digitou a string ");
```
* E por final, juntamos o valor de str2 + str3: 
```c
printf ("\n\n%s%s",str3,str2);
```

### resultado:

```
Entre com uma string: ola mundo


Voce digitou a string ola mundo
```