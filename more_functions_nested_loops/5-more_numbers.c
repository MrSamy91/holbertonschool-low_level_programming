#include "main.h"
/**
 * more_numbers - check the function that prints 10 times the numbers.
 * Return: the numbers from 0 to 14, 10 times.
 */
void more_numbers(void)
{
	int n;
	int i = 0;

	while (i < 10)
	{

		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		{
			_putchar('\n');
		}
		i++;
	}
}
