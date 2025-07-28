#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to pointer of new node
 * @str: data stored in the node
 *
 * Return: address of new node
 * or NULL on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_at_end;
	list_t *last = *head;

	new_at_end = malloc(sizeof(list_t));
	if (new_at_end == NULL)
	{
		free(new_at_end);
		return (NULL);
	}

	new_at_end->str = strdup(str);
	new_at_end->len = strlen(str);
	new_at_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_at_end;
	}

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new_at_end;

	return (new_at_end);
}
