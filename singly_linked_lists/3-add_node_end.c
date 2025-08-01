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
	list_t *new_end;
	list_t *last;
	unsigned int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	new_end = malloc(sizeof(list_t));
	if (new_end == NULL)
	{
		return (NULL);
	}

	new_end->str = strdup(str);
	new_end->len = length;
	new_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_end;
		return (new_end);
	}

	if (*head != NULL)
	{
		last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}

		last->next = new_end;
	}

	return (new_end);
}
