#include "main.h"

/**
 * rev_string - Entry point
 * @s : string to update
 * Description: function that prints a string, in reverse
 * Return: Always nothing
 */

void rev_string(char *s)
{
	int nbLettre = 0;
	int index = 0;
	char tmp;

	while (s[index++])
	nbLettre++;

	for (index = 0; index < nbLettre / 2; index++)
	{
		tmp = s[index];
		s[index] = s[nbLettre - index - 1];
		s[nbLettre - index - 1] = tmp;
	}
}
