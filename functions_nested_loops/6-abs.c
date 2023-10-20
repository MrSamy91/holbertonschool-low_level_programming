#include <stdio.h>
#include "main.h"

/**
 * _abs - entry point
 * @numero: the number to test
 * Description: absolute value of an integer.
 * Return: 0 if success
 */

int _abs(int numero)
{
	if (numero < 0)
		return (-numero);
	else if (numero > 0)
		return (numero);
	else
		return (0);
}
