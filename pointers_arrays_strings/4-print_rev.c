#include <stdio.h>
#include <stdlib.h>
#include "main.h"




void print_rev(char *s)
{
        int i = '\0';

        for (; s[i]; i--)
		_putchar(s[i]);
	_putchar('\n');
}
