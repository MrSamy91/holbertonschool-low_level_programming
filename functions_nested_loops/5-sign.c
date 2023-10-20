#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * print_sign - check if c is lowercase*
 * @n : The ASCII value of the character to be checked.
 * Description: check if c is lowercase
 * Return: 1 if lowercase or 0 if uppercase
 */


int print_sign(int n)
{

	if (n > 0)
		_putchar('+');
			return (1);
	if else (n < 0)
		_putchar('-');
			return (-1);
	else
		_putchar('0');
			return (0);


}
