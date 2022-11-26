#include<stdio.h>

int main()
{
    int i=1,number=0;

    printf("Entre com um numero:");
    scanf("%d",&number);// adicionei o numero a ser multiplicado por i

    while(i<=10){
    number = number * i;
    printf("%d\n",number); 
    // Aqui i ira de (1 a 10) e esse numeros serão multiplicados (number = number * 1;) pelo numero digitado acima ate chegar a 10
    i++;
}
return 0;
}