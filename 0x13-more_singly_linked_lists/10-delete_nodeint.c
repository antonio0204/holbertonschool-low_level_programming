#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node
 * @head: double pointer
 * @index: index
 * Return: pointer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *old, *n;

	if (head == NULL || *head == NULL)
		return (-1);
	n = *head;
	if (index == 0)
	{
		n = (*head)->next;
		free(*head);
		*head = n;
		return (1);
	}
	for (a = 0; a < index && n; a++)
	{
		old = n;
		n = n->next;
	}
	if (n)
	{
		old->next = n->next;
		free(n);
		return (1);
	}
	return (-1);
}
