#include <stdio.h>
#include <string.h>

int main()
{

    char str1[5]="xyz";
    char str2[7]="zyxw";
    int ret;

    ret = strcmp(str2,str1);

    printf("%d\n",ret);

    return 0;
}