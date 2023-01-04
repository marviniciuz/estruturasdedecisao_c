#include <stdio.h>

int main(void)
{
        int opcao;

        do
        {
            printf("\t\t\nMenu\n"); 
            printf("0. Sair\n");
            printf("1. Dar Boas vindas\n");
            printf("2. Dar Oi\n");
            printf("3. Repetir o menu\n");
            printf("4. Ler mais uma vez o menu\n");

            printf("Opcao: ");
            scanf("%d", &opcao);

            switch( opcao )
            {
                case 0:
                        printf("Saindo do menu...\n");
                        break;
                case 1:
                        printf(" Bem-vindo ao menu\n");
                        break;
                case 2:
                        printf(" Oi! \n");
                        break;
                case 3:
                case 4:
                        break;
                default:
                        printf("Opcao invalida! Tente novamente.\n");
            }
        } while(opcao);

}