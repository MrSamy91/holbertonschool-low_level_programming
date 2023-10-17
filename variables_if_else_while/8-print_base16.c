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
	int num;

		for (num = '0'; num <= '9'; num++)
			putchar(num);
		for (num = 'a'; num <= 'f'; num++)
			putchar(num);

		putchar('\n');
return (0);
}
