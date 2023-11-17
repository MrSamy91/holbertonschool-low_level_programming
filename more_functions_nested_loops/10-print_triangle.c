#include <stdio.h>
#include "main.h"
/**
 * print_triangle - check the code
 * @size: the character to be checked
 * Return: If size is 0 or less, the function should print only a new line
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < size - i - 1)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
