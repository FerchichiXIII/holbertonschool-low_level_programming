#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t.
 *
 * @head: listint_t
 * @index: unsigned int
 * Return: nothing
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{

	struct Node *current = head;

	int count = 0;
	while (current != NULL)
	{
		if (count == index)
			return (current->data);
		count++;
	}
	assert(0);
}
