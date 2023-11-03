#include <stdio.h>
#include "main.h"

/**
 * _puts - Entry point
 * @str: variable
 * Return: always 0 (success)
 */

void _puts(char *str)
{
	int lettre;

	for (lettre = 0; str[lettre]; lettre++)
	{
		putchar(str[lettre]);
	}
	putchar('\n');
}
