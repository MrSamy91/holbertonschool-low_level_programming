#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
  * print_alphabet - Entry point
  *
  * Return: always 0 (success)
  */

/* betty style doc for function main goes there */


void print_alphabet(void)
{
	for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
}
