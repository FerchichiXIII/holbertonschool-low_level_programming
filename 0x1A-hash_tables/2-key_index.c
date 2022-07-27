#include "hash_tables.h"
/**
 * key_index - generates the index of the array
 * @key: string used to generate hash value
 * @size: size of the array
 * Return: index of the array
 *
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *key++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash % size);
}
