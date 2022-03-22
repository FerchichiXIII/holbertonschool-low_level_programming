#include "lists.h"

/**
 * @brief
 *
 *
 *
 *
 *
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new;
	listint_t *current;

	current = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}

	return (new);
}
