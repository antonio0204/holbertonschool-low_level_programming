#include "lists.h"
/**
 *free_dlistint-function that free a dlistint_t list.
 *
 *@head: head of linked list
 *
 *Return: void
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *node = head;
	while (node != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}

}
