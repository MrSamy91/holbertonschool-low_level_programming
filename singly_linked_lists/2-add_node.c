#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to a pointer to the head of the list_t list.
 * @str: The string to be duplicated and stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	/* Check for invalid input */
	if (head == NULL || str == NULL)
		return (NULL);

	/* Declare and initialize the new_node variable */
	/*list_t *new_node = NULL;*/
	/*new_node = malloc(sizeof(list_t));*/
	if (new_node == NULL)
		return (NULL); /* Memory allocation failed */

	/* Duplicate the provided string using strdup */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node); /* String duplication failed */
		return (NULL);
	}

	/* Calculate the length of the string */
	new_node->len = strlen(str);

	/* Add the new node to the beginning of the list */
	new_node->next = *head;
	*head = new_node;

	/* Return the address of the new node */
	return (new_node);
}

