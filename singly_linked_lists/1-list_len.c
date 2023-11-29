#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of elements in the list.
 *
 * Description: This function traverses a singly linked list of type list_t
 * and counts the number of elements (nodes) in the list. It returns the total
 * count of elements.
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}

	return (elements);
}

