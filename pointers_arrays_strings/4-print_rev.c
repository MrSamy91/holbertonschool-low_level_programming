#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev -  Prints a string in reverse
 * @s : is the string to reverse
 *retunrn doesn't exist
 */



void print_rev(char *s)
{
	int i = strlen(s);

	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
