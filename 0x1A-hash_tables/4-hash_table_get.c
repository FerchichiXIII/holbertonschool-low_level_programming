#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: pointer to the hash table
 * @key: pointer to the key
 * Return: pointer to the value, or NULL if not found or error.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *entry;
	unsigned long int i;

	if (ht == NULL || !key)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	entry = ht->array[i];

	while (entry)
	{
		if (strcmp(key, entry->key) == 0)
			return (entry->value);
		entry = entry->next;
	}
	return (NULL);
}
