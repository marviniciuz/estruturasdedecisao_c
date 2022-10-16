#include <stdio.h>

float main(void){

    float num1,num2;
    scanf("%f%f",&num1,&num2);

     if (num1 >= 10 && num2 >= 10){
        printf("Numero invalido\n");
    }  
    else{
        
        if (num1 == 0 && num2 ==0)
        {
           printf("os numeros nao podem ser zero igual 0\n");
        }
       else{
            printf("numeros valido\n");
       }    
    }     
} 