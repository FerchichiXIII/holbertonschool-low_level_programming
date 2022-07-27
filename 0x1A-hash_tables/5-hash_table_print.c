#include "hash_tables.h"
/**
 * hash_table_print - prints the hash table
 * @ht: pointer to the hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, flag = 0;
	hash_node_t *entry;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		entry = ht->array[i];
		if (entry != NULL)
		{
			while (entry != NULL)
			{
				if (flag == 1)
				{
					printf(", ");
				}
				printf("%s: %s", entry->key, entry->value);
				flag = 1;
				entry = entry->next;
			}
		}
	}
	putchar('}');
	putchar('\n');
}
