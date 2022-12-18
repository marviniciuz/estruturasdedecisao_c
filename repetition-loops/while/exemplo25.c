#include<stdio.h>

void main(){
    int i=2,j=1,number=0;   

    printf("Digite um numero inteiro\n");
    scanf("%d",&number);

    while((i<=10)&&(j<=10)){
    number = number + (i + j);// o numero digitado abaixo sera somado com o valor de (i+j)
    printf("%d\t",number);
        i++;
        j++;
    }
    if (number>100){
        printf("\nvalor final acima de 100");
    }
    else{
        printf("\nnumero abaixo de 100");
    }
}