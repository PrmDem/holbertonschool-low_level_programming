#include "hash_tables.h"

/**
 * hash_table_get - retrieves value at given key
 * @ht: hash table to look into
 * @key: key to get value from
 * Return: value found in key
 * or NULL if not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	while (ht->array[index]->next != NULL)
	{
		ht->array[index] = ht->array[index]->next;
	}

	return (ht->array[index]->value);
}
