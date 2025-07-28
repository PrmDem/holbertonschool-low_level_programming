#include "lists.h"

/**
 * _strlen - returns length of a string
 * @s: pointer for first char of string
 *
 * Return: int that is length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}

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

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;

	*head = new;

	return (*head);
}
