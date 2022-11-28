#include <stdio.h>

int main(void){
    int mod = 10 % 5; 

    printf("O resto da divisao 10 / 5 = %d\n", mod);

    int num1 = 10; 
    int num2 = 5; 

    int mod2 = num1 % num2; 

    printf("O resto da divisao %d %% %d = %d\n", num1, num2, mod2);

}