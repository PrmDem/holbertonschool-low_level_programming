#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given position
 * @head: double pointer to head of list
 * @index: position of node to delete
 * Return: 1 on success, -1 on failure.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *bridge;
	unsigned int idx = 0;

	if (*head != NULL)
		bridge = *head;
	else
		return (-1);

	while (idx < index)
	{
		if (bridge->next == NULL && idx != index)
		{
			return (-1);
		}

		bridge = bridge->next;
		idx++;
	}

	if (bridge->prev != NULL)
	{
		bridge->prev->next = bridge->next;
		bridge->next->prev = bridge->prev;
		free(bridge);
	}

	else if (bridge->prev == NULL && bridge->next != NULL)
	{
		bridge->next->prev = NULL;
		*head = bridge->next;
		free(bridge);
	}

	else
	{
		free(bridge);
		*head = NULL;
	}

	return (1);
}
