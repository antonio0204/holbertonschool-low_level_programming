#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a
 * listint_t list.
 * @n: head list.
 * @head: Doble pointer
 *
 * Return: number of node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodon;

	if (head == NULL)
		return (NULL);
	nodon = malloc(sizeof(listint_t));
	if (nodon == NULL)
	{
		free(nodon);
		return (NULL);
	}
	nodon->n = n;
	nodon->next = *head;
	*head = nodon;
	return (*head);
}
