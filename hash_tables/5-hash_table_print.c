#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 * Return: none (void)
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, count, ncount;

	index = count = ncount = 0;

	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
			count++, index++;
		else
			index++;
	}
	if (count != 0)
	{
		printf("{");
		for (index = 0; index < ht->size; index++)
		{
			if (ht->array[index] != NULL)
			{
				printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
				ncount++;
				if (ncount < count)
					printf(", ");

				while (ht->array[index]->next != NULL)
				{
					ht->array[index] = ht->array[index]->next;
					count++;
					printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
					ncount++;
					if (ncount < count)
						printf(", ");
				}
			}
		}
		printf("}\n");
	}
	else
	{
		printf("{}\n");
	}
}
