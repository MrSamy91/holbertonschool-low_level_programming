#include <stdio.h>
#include <stdlib.h>
#include "main.h"




void print_rev(char *s)
{
        int i = '\0';

        for ( ; s[i] >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
