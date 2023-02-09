#include <stdio.h>

int main()
{
    int peso;
    float altura,imc;

    printf("\n\nVamos Calcular o IMC\n");
    
    printf("\ndigite seu peso\n");
    scanf("%d",&peso);

    printf("\ndigite sua altura\n");
    scanf("%f",&altura);
    
    altura = altura * altura;
    imc = peso/altura;
    
    if (imc < 17){
        printf("\nMUITO ABIXO DO PESO");
    }
    else if ((imc == 17) && (imc < 18,5)){
        printf("\nABAIXO DO PESO");
    }
    else if ((imc >= 18,5) && (imc <=24,9)){
        printf("\nPESO NORMAL");
    }
    else if ((imc >= 25) && (imc <=29,9)){
        printf("\nACIMA DO PESO");
    }
    else if ((imc >= 30) && (imc <=34,9)){
        printf("\nOBESIDADE 1");
    }
    else if ((imc >= 35) && (imc <=39,9)){
        printf("\nOBESIDADE 2 (SEVERA)");
    }
    else{
        printf("\nOBESIDADE 3 (MORBIDA)");
    }
}