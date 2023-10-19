#include "main.h"
#include <stdio.h>


/**
 * _isalpha - check if c is alpha*
 * @c: The ASCII value of the character to be checked.
 * Description: check if c is alpha
 * Return: 1 if lowercase or 0 if uppercase
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);


}
