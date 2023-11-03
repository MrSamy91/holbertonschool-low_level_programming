#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - entry point
 * @s: pointer to a string
 * Description: function that returns the length of a string
 * Return: (int) if success
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		int i = _strlen_recursion(s + 1);
		i++;
		return (i);
	}
}
