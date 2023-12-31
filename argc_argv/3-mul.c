#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: array who tell me how much arguments
 * @argv: arguments
 * Description: prints the multiples
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int n1, n2, result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	result = n1 *n2;

	printf("%d\n", result);
	return (0);
}
