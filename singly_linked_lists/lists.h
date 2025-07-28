#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * print_list - prints all elements of a list
 * @h: pointer to first node
 *
 * Return: size_t number of nodes.
 */
size_t print_list(const list_t *h);

/**
 * list_len - returns nb of elements in a list
 * @h: pointer to the first node of the list
 *
 * Return: size_t number of elements
 */
size_t list_len(const list_t *h);

#endif
