#include "lists.h"

/**
 * print_dlistint - prints all data from a list
 * @h: poinnter to first node
 * Return: number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		nodes++;
	}

	return (nodes);
}
