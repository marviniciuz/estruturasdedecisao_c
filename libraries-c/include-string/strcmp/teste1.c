#include <stdio.h>
#include <string.h>

int main()
{

    char str1[5]="abc";
    char str2[5]="abd";
    int ret; //retorno


    ret = strcmp(str1,str2);

    printf("%d\n",ret);

    return 0;
}