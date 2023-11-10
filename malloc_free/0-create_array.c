#include "main.h"
#include <stdio.h>
#include <stdlib.h>


char *create_array(unsigned int size, char c)
{

	unsigned int i;
	char *tableau;

	if(size == 0)
		return (NULL);

tableau = malloc(sizeof(char) * size);
	if (tableau == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		tableau[i] = c;

	return (tableau);

}
