#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t
 * @head: listint_t
 * Return: n
 */

int pop_listint(listint_t **head)

{

	listint_t *t, *p;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	t = *head;
	p = t->next;
	n = t->n;
	free(*head);
	*head = p;

	return (n);
}
