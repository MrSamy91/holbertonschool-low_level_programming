#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - Entry point
  *
  * Return: always 0 (success)
  */

int main(void)
{
	char letter = 'a';

		for (letter = 'a'; letter <= 'z'; letter++)
			putchar(letter);
		putchar('\n');
return (0);
}
