#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at end of list
 * @head: double pointer to head of list
 * @n: data to add in node
 * Return: address of new element on success,
 * NULL on failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *bridge;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	if (*head != NULL)
	{
		bridge = *head;

		while (bridge->next != NULL)
		{
			bridge = bridge->next;
		}

		bridge->next = new;
		new->prev = bridge;
	}

	return (new);
}
