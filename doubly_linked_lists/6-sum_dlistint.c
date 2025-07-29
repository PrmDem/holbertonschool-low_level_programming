#include "lists.h"

/**
 * sum_dlistint - calculates the sum of the list's data
 * @head: pointer to head of list
 * Return: sum as an int,
 * 0 in case of empty list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *bridge = head;

	while (bridge != NULL)
	{
		sum += bridge->n;
		bridge = bridge->next;
	}

	if (head == NULL)
		return (0);

	return (sum);
}
