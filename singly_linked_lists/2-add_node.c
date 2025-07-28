#include "lists.h"

/**
 * add_node - adds a new node as head of a list
 * @head: pointer to pointer of new node
 * @str: data stored in the node
 *
 * Return: address of new node
 * or NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	new->len = length;
	new->next = *head;

	*head = new;

	return (*head);
}
