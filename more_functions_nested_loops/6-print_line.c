#include <stdio.h>
#include "main.h"
/**
 * print_line - check that draws straight line in the terminal
 * @n: the character to be checked.
 * Return: print \n if n is zero or less, _ otherwise.
 */
void print_line(int n)
{
	int i;

	i = 1;
	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
