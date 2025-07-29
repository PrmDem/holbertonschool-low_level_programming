#include "lists.h"

/**
 * dlistint_len - checks the number of elements in the list
 * @h: pointer to header of the list
 * Return: number of elements in list
 * in size_t format.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		nodes++;
		current = current->next;
	}

	return (nodes);
}
