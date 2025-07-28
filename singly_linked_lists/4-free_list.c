#include "lists.h"

/**
 * free_list - frees a list_t type list
 * @head: pointer to the head of list
 * Return: none (void)
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;

		free(temp->str);
		free(temp);
	}

}
