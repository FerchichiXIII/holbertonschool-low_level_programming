#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index.
 * @head: pointer to the head of the list
 * @index: the index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p1, *res_mem = *head;
	unsigned int counter = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = res_mem->next;
		if (res_mem->next == NULL)
			return (-1);
		res_mem->next->prev = NULL;
		free(res_mem);
		return (1);
	}

	while (counter < index)
	{
		if (res_mem->next == NULL)
			return (-1);
		res_mem = res_mem->next;
		counter++;
	}
	res_mem->prev->next = res_mem->next;
	if (res_mem->next)
		res_mem->next->prev = res_mem->prev;
	if (res_mem->next == NULL)
	{
		p1 = res_mem->prev;
		p1->next = NULL;
		free(res_mem);
		return (1);
	}
	free(res_mem);
	return (1);
}
