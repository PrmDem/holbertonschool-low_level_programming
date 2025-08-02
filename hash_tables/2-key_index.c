#include "hash_tables.h"

/**
 * key_index - gives index of supplied key
 * @key: key to look for
 * @size: size of the hash table array
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
