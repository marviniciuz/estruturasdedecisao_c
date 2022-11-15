#include <stdio.h>

int main(){

int x = 10;
int cond = 0;

cond = (x==10)||(x<1);
printf("%i", cond);

cond = (x==0)||(x!=100);
printf("%i", cond);

cond = (x==10)||(x!=0);
printf("%i", cond);

cond = (x!=10)||(x==0);
printf("%i", cond);

}




