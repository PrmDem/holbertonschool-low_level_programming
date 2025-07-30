#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at specific position within list
 * @h: double pointer to header
 * @idx: place in the list to insert the new node
 * @n: data to feed new node->n
 * Return: address of the new node on success,
 * NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *insertee;
	dlistint_t *insprev = *h;
	dlistint_t *bridge = *h;
	unsigned int index = 0;
	unsigned int iprev = 0;

	insertee = malloc(sizeof(dlistint_t));
	if (insertee == NULL)
	{
		return (NULL);
	}

	while (index < idx) /* sets bridge to node holding wanted position */
	{
		if (bridge->next == NULL && index != idx)
		{
			return (NULL);
		}

		bridge = bridge->next;
		index++;
	}

	while (iprev < (idx - 1)) /* sets insprev to node before wanted position */
	{
		insprev = insprev->next;
		iprev++;
	}

	insertee->n = n;
	insertee->prev = insprev;
	insertee->next = bridge;
	bridge->prev = insertee;
	insprev->next = insertee;

	return (insertee);
}
