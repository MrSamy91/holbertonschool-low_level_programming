#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
  * print_alphabet_x10 - Entry point
  *
  * Return: always 0 (success)
  */

/* betty style doc for function main goes there */


void print_alphabet_x10(void)
{
	int num;
	char letter = 'a';


	for (num = 0; num <= 9; num++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
	_putchar('\n');
	}
}

