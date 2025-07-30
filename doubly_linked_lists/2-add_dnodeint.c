#include "lists.h"

/**
 * add_dnodeint - adds a new node at the start of the list
 * @head: double pointer to head of list
 * @n: data to include in new node
 * Return: address of new node on success,
 * NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	*head = new;

	return (new);
}
