#include <stdlib.h>
#include <time.h>
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

printf("The number %d is ", n);


	return (0);
}
