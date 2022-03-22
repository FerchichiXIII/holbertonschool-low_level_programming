#include "lists.h"
/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: const
 *
 * Return: x.
 *
 */

size_t print_listint(const listint_t *h)

{
	int c = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			c++;
		}
	}

	return (c);
}
