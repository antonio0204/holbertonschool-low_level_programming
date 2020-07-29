#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: douuble pointer to the beginning of a listint_t list
 * @n: integer to add to the list
 *
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nel;

	if (head == NULL)
		return (NULL);
	nel = malloc(sizeof(listint_t));
	if (nel == NULL)
		return (NULL);
	nel->n = n;
	nel->next = *head;
	*head = nel;
	return (nel);
}
