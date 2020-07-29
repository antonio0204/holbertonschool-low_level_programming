#include "lists.h"
/**
 * *add_nodeint_end - put new head
 * @head: head
 * @n: param.
 * Return: address.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_tail = malloc(sizeof(listint_t));
	listint_t *head2 = *head;

	if (new_tail == NULL)
	{
		free(new_tail);
		return (0);
	}
	new_tail->n = n;
	new_tail->next = NULL;
	if (*head == NULL)
	{
	*head = new_tail;
	return (*head);
	}
	while (head2->next != NULL)
	{
	head2 = head2->next;
	}
	head2->next = new_tail;
	return (*head);
}
