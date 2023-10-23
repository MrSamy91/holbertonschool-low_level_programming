#include "main.h"
#include <stdio.h>

/**
  * swap_int - Entry point
  * @a: change value
  * @b: change
  * Description: swap value
  */


void swap_int(int *a, int *b)
{
	int tampon = *a;

	*a = *b;
	*b = tampon;


}
