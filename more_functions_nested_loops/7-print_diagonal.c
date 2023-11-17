#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - check that draws a diagonal line
 * @n: character to be checked
 * Return: print \n if n is 0 or less, \ otherwise.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
