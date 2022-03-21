#include "lists.h"
/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: const
 * Return: x.
 *
 */

size_t print_listint(const listint_t *h)

{
	int i;

	for (i = 0; h != NULL; i++)

	{

		printf("%i\n", h->n);
		h = h->next;
	}

	return (i);
}
