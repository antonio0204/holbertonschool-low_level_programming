#include "lists.h"
/**
 *pop_listint - delte head
 *@head: head
 *Return: address.
 */
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *head2 = *head;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	i = (*head)->n;
	head2 = head2->next;
	free(*head);
	*head = head2;
	return (i);
}
