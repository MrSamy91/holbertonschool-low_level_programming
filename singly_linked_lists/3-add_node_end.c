#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *  * add_node_end - Adds a new node at the end of a list_t list.
 *   * @head: A pointer to a pointer to the head of the list_t list.
 *    * @str: The string to be duplicated and stored in the new node.
 *     *
 *      * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t)); /* Check for invalid input */

	if (head == NULL || str == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL); /* Memory allocation failed */

	new_node->str = NULL;
	new_node->len = 0;
	new_node->next = NULL;

	new_node->str = strdup(str); /* Duplicate the provided string using strdup */
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL); } /* String duplication failed */

	new_node->len = strlen(str); /* Calculate the length of the string */

	if (*head == NULL)
		*head = new_node;
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
			current = current->next; /* Traverse the list to find the last node */

		current->next = new_node; /* Append the new node to the end of the list */
	}

	return (new_node); /* Return the address of the new node */
}

