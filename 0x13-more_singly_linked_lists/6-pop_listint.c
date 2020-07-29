#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: Doble pointer
 * Return: value poped.
 */
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *nodo_next = NULL;

	if (*head == NULL)
	{
		return (0);
	}
	nodo_next = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = nodo_next;
	return (i);
}
