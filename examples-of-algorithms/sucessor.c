#include <stdio.h>

int main(){

    int number;

    printf("digite um numero acima de zero\n");
    scanf("%d",&number);

    int nextnumber = number + 1;
    int beforenumber = number - 1;

    printf("o sucessor a %d e %d\n",number,nextnumber);
    printf("o anterior a %d e %d\n",number,beforenumber);

    int optionnext = nextnumber + number;
    int optionbefore = beforenumber + number;

    printf("a soma entre o numero e seu sucessor e %d\n",optionnext);
    printf("a soma entre o numero e seu antecessor e %d\n",optionbefore);

    return 0;    
}
