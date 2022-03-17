#include "lists.h"
/**
 * list_len - returns the number of elements
 *@h: const
 *
 *Return: count.
 */

size_t list_len(const list_t *h)

{
	const list_t *new = h;
	unsigned int count;

	for (count = 0; h; count++)

	{

		new = new->next;
		count++;
	}
	return (count);
}
