#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: pointer to first node
 *
 * Return: size_t number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%i] %s\n", current->len, current->str);
		}

		current = current->next;
		nodes++;
	}

	return (nodes);
}
