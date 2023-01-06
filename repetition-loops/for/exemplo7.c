#include <stdio.h>

int main()
{
int a;
int b;

for (a = 0,b=10; a <= 10;++a,--b){
printf("%i", a);
printf("-");
printf("%i\n", b);
}
return 0;

}