#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the table
 * @ht: hash table to add to/update
 * @key: key to add
 * @value: value found at key
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *valcopy;
	hash_node_t *new_node;

	int idx = 0;

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);

	if ((*value) != '\0')
	{
		while (value[idx] != '\0')
		{
			idx++;
		}

		valcopy = malloc(sizeof(char) * idx + 1);

		for (idx = 0; value[idx] != '\0'; idx++)
		{
			valcopy[idx] = value[idx];
			valcopy[idx + 1] = '\0';
		}

		new_node->value = valcopy;
	}

	else
	{
		new_node->value = NULL;
	}

	new_node->key = (char *)key;
	new_node->next = (*ht->array);

	(*ht->array) = new_node;

	return (1);
}
