#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
	    char str[20];
        char str2[20]; 
        int i = 1;
        char sbn[20]="vinicius";

	    printf("Seu primeiro nome\n");
	    scanf("%s",str);

        printf("digite seu segundo nome\n");
        scanf("%s",str2);

   if(strcmp(str2,sbn) ==0)
   {
       printf("seu nome e:\n %s %s",str,str2);
    }

    else
    {
       while(i<10){
        printf("%s e um nome invalido\n",str2);
        i++;
        }
    }
}

  