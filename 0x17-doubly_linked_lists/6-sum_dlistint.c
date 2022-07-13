#include "lists.h"
/**
 * sum_dlistint - sums the values of all the nodes in a dlistint_t linked list
 * @head: pointer to the head of the list
 * Return: the sum of all the values in the list
 */


int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum;

	tmp = head;
	sum = 0;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
