#include "main.h"
#include <stdio.h>
#include <time.h>
/**
 * print_last_digit - check if c is print_last_digit*
 * @lastD : is je sais pas quoi
 * Return: 1 if print_sign or 0 if uppercase
 */
int print_last_digit(int lastD)
{
	lastD = lastD % 10;
		if (lastD < 0)
		{
			lastD = lastD * (-1);
			_putchar(lastD + '0');
		}
		else
		{
			_putchar(lastD + '0');
		}
		return (lastD);
}
