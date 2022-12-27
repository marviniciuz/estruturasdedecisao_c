#include <stdio.h>
#include <string.h>

int main() {
	char str1[15]; 
	char str2[15]; 

	printf("Seu string: ");
	gets(str1);

	strcpy(str2,str1);

	printf("%s\n",str1);
	printf("%s\n",str2);
}