#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - entry point
 * @num: the number to test
 * Description: absolute value of an integer.
 * Return: lidit if success
 */

int print_last_digit(int num)
{
	int m = num % 10;
	if (m < 0)
		m= -1;
	_putchar(m + '0');

return (m);
}
