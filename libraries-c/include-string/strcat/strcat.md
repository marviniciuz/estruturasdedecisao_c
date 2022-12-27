# COMO CONCATENAR STRINGS?

Para isso deve-se usar a função strcat, onde juntamos strings.

```
strcat(string1,string2); = strcat(string1 + string2);

string1 = string1 + string2
```

```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[100];
    char str2[100];

    strcpy(str1,"ola");
    strcpy(str2,"mundo");

    strcat(str1,str2);

    printf("%s",str1);

    return 0;
}
```

* Este codigo contem duas variaveis do tipo ```char```:
```c
char str1[100];
char str2[100];
```
* Onde stribuimos os valores para as strings:
```c
strcpy(str1,"ola");
strcpy(str2,"mundo");
```
* Ou seja as variaveis receberam esses valores, onde não podem passar de 100 caracteres.

* Depois utilizamos a função  ```strcat``` onde concatenamos ```str1 + str2``` onde esse valor sera atribuido a ```str1```:
```c
strcat(str1,str2);
```
* E printamos str1, que no caso contem o valor final da concatenação:
```c
printf("%s",str1);
```
### resultado:

```
olamundo
```