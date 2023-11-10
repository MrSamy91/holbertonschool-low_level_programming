#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - entry point
 * @size: is the the number of character @c in our array
 * @c: character that will fill our array
 * Description: function that creates an array of chars
 * Return: Null if size is 0, return pointer if success
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *tableau;

	if (size == 0)
		return (NULL);
	tableau = malloc(sizeof(char) * size);
	if (tableau == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		tableau[i] = c;
	return (tableau);
}
