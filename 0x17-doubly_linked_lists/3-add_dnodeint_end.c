#include "lists.h"
/**
 *add_dnodeint_end- adds a new node at the end of a dlistint_t list.
 *@head: head of linked list
 *@n: integer to add to new node
 *
 *Return: the address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));
dlistint_t *tmp = *head;

	if (new_node == NULL)
		return (NULL);

new_node->n = n;
new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = new_node;
		new_node->prev = tmp;
	}

return (new_node);
}
