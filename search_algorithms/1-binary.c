#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid, i;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);

		if (array[mid] == value)
			return (mid);  /* Value found, return the index */
		else if (array[mid] < value)
			left = mid + 1;  /* Discard the left half */
		else
			right = mid - 1;  /* Discard the right half */
	}

	return (-1);  /* Value not found */
}

