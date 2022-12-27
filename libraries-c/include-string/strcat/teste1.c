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