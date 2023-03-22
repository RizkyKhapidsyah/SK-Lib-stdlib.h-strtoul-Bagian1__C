#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* strtoul */
#include <conio.h>

/*
	Source by CPlusPlus (https://www.cplusplus.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	char buffer[256];
	unsigned long ul;

	printf("Enter an unsigned number: ");
	
	fgets(buffer, 256, stdin);
	ul = strtoul(buffer, NULL, 0);
	
	printf("Value entered: %lu. Its double: %lu\n", ul, ul * 2);
	
	_getch();
	return 0;
}