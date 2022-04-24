#include "lists.h"
/**
 * list_len - returns the number of elements
 *@h: const
 *
 *Return: f.
 */

size_t list_len(const list_t *h)

{

	unsigned int f;

	const list_t *new = h;

	for (f = 0; h; f++)

	{

		new = new->next;
	}
	return (f);
}
