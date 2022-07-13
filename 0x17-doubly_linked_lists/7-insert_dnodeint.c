#include "lists.h"
/**
 *
 *
 *
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;
	dlistint_t *new;
	unsigned int i;

	tmp = *h;
	i = 0;
	if (idx == 0)
		return (add_dnodeint_end(h, n));
	while (tmp != NULL)
	{
		if (i == idx - 1)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = tmp->next;
			new->prev = tmp;
			tmp->next = new;
			if (new->next != NULL)
				new->next->prev = new;
			return (new);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
