#include <stdio.h>
#include "main.h"

/**
 * puts2 - entry point*
 * @str: pointer to an string
 * Description: function that prints every other character of a string.
 * Return: nothing
 */

void puts_half(char *str)
{
	for (int i = 0; str[i] <= 9; i++)

	putchar(str[i]);
}
