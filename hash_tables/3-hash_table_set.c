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
	unsigned long int hashkey, index;
	char *valcopy;

	if (ht == NULL || key == NULL)
		return (0);

	hashkey = hash_djb2((unsigned char *)key);
	index = key_index((unsigned char *)key, ht->size);
	valcopy = strdup(value);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = (char *)hashkey;
	new_node->value = valcopy;

	if (ht->array[index] == NULL)
	{
		new_node->next = NULL;
		ht->array[index] = new_node;
	}

	else
	{
		hash_node_t *temp = ht->array[index];

		while (temp != NULL)
		{
			if (temp->key == new_node->key)
			{
				free(temp->value);
				temp->value = valcopy;
				free(new_node->key);
				free(new_node);
				return (1);
			}
			temp = temp->next;
		}
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
