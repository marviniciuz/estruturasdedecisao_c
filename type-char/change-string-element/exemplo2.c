#include <stdio.h>

int main() {
	char str[] = "meu string";   /*reserva espaço para 11 caracteres*/

	/* mudo o 6o caracter */
	str[5] = 'd';

	str[2] = 't';

	printf("%s",str);
}