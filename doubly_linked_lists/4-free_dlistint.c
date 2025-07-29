#include "lists.h"

/**
 * free_dlistint - frees the list
 * @head: pointer to head of list
 * Return: none (void)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *bridge;

	while (head != NULL)
	{
		bridge = head;
		head = head->next;

		free(bridge);
	}
}
