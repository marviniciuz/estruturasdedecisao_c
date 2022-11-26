#include<stdio.h>

void main(){
    int j=1,number=0;

    printf("digite o numero\n");
    scanf("%d", &number);

    while(j<=10){
    number += j;  
    printf("%d\t",number);
    j++;
    }
}