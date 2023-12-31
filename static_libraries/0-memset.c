#include "main.h"
#include <stdio.h>
/**
 *  * _memset - entry point
 *   * @s: pointer of the memory location
 *    * @n: number of bytes
 *     * @b: constant byte
 *      * Description: function that fills memory with a constant byte.
 *       * Return: a pointer to the memory area s
 *        */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
