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
	size_t i;

	i = 0;

	while (h != NULL)

	{
		printf("%i\n", h->n);

		h = h->next;
		i++;
	}

	return (i);
}
