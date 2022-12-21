#include <stdio.h>

int main() {
	char str[20];
    char str2[20]; /*reserva espaço para 12 caracteres*/

	printf("Seu nome: ");
	scanf("%s",str);

    printf("digite seu sobrenome ");
    scanf("%s",str2);

	printf("%s %s\n",str,str2);
}