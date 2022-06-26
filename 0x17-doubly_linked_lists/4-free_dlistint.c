#include "lists.h"
/**
 * free_dlistint - frees a list of dlistint_t nodes
 * head: pointer to the head of the list
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
