#include "main.h"
#include <stdio.h>

/**
 * _strlen - entry point
 * @s: char variable
 * Description: function that returns the length of a string.
 * Return: i if success
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++);

	return (i);
}
