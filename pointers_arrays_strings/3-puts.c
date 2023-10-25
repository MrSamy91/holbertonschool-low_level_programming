#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _puts - Entry point
  * @str: variable
  * Return: always 0 (success)
  */

void _puts(char *str)
{
	int i = 0;

	for (; str[i]; i++)

	_putchar(str[i]);
	_putchar('\n');
}
