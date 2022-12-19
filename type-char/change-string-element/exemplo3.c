#include <stdio.h>

int main()
{
	char str[12] = "meu string"; /*reserva espaço para 12 caracteres*/
	int pos;                     /*posição do \0*/
	char novo = '!';             /*caracter a ser incluído*/

	/* acho a posição do \0 */
	pos = 0;
	while (str[pos] != '\0') pos++;

	/* coloco o novo caracter nessa posição */
	str[pos] = novo;

	/* coloco o \0 no final do novo string */
	str[pos+1] = '\0';

	printf("%s",str);
}