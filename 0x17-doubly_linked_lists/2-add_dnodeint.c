#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: p
 * @n: int
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *f;

	f = malloc(sizeof(dlistint_t));

	if (f == NULL)
	{
		return (NULL);
	}
	f->n = n;
	f->next = *head;
	f->prev = NULL;
	if (*head)
	{
		(*head)->prev = f;
	}
	*head = f;
	return (f);
}
