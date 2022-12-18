#include<stdio.h>

void main(){
    int j=1,number=0;

    printf("Digite um numero inteiro acima de 10\n");
    scanf("%d",&number);

    if (number <=10)
    {
        printf("numero invalido");
    }
    else{

        while(j<=5){
        number = number - j;
        printf("%d\t",number);
        j++;
    }
} 
}