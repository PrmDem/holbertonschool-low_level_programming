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
	hash_node_t *new_node;
	unsigned long int index;
	char *valcopy;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	valcopy = strdup(value);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = (char *)key;
	new_node->value = valcopy;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}
	else
	{
		if (strcmp(ht->array[index]->key, new_node->key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = valcopy;
			free(new_node);
		}
		else
		{
			new_node->next = ht->array[index];
			ht->array[index] = new_node;
		}
		return (1);
	}
}
