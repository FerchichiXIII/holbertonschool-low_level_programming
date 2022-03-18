#include "lists.h"
/**
 * list_len - returns the number of elements
 *@h: const
 *
 *Return: count.
 */

size_t list_len(const list_t *h)

{

	unsigned int count;

	const list_t *new = h;

	for (count = 0; h; count++)

	{

		new = new->next;
	}
	return (count);
}
