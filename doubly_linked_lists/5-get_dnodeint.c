#include "lists.h"

/**
 * get_dnodeint_at_index - returns node at specific position in list
 * @head: pointer to head of list
 * @index: position in list of node to return
 * Return: pointer to wanted node on success
 * NULL if node doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int parse = 0;
	dlistint_t *bridge = head;

	while (parse < index)
	{
		if (bridge->next == NULL && parse != index)
		{
			return (NULL);
		}

		bridge = bridge->next;
		parse++;
	}

	return (bridge);
}
