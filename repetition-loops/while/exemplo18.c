#include <stdio.h>

int main()
{
    int loop = 0;
    int num;
    char nome[30];

        printf("Quantas vezes voce quer imprimir o nome\n");
        scanf("%d", &num);

        printf("digite o nome: ");
        scanf("%s", nome);

    while (loop < num){
        printf("%s\n" , nome);
        loop++;
    }
}