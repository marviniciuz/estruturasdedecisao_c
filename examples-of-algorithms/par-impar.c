#include <stdio.h>

int main(){
    int number1;
    int number2;

        printf("Digite um numero inteiro\n");
        scanf("%d",&number1);

        printf("Digite um segundo numero inteiro\n");
        scanf("%d",&number2);

    if(number1%2==0){
        printf("O numero %d digitado e par\n", number1); 
    }
    else{
        printf("O numero %d digitado e impar\n,",number1);
    }
    
    if(number2%2==0){
        printf("O numero %d digitado e par\n", number2);
    }
    else{
        printf("O numero %d digitado e impar\n,",number2);
   } 

}