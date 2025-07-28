#include "lists.h"

/**
 * list_len - returns nb of elements in a list
 * @h: pointer to the first node of the list
 *
 * Return: size_t number of elements
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		nodes++;
		current = current->next;
	}

	return (nodes);
}
