#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This function initializes a random number generator,
 * generates a random number, and prints whether the number is positive,
 * zero, or negative.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */


    if (n > 0)
printf("%d is positive\n", n);
    else if (n == 0) 
printf("%d is equal to zero\n", n);
    else
printf("%d is negative\n", n);
return (0);
}
