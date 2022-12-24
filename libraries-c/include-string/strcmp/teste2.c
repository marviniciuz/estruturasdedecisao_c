#include <stdio.h>
#include <string.h>

int main()
{

    char str1[5]="xyz";
    char str2[5]="zyx";
    int ret;

    ret = strcmp(str1,str2);

    printf("%d\n",ret);

    return 0;
}