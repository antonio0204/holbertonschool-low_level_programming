#include "lists.h"
/**
 * get_nodeint_at_index - returns .
 * @head: pointer
 * @index: is the index of the node
 * Return: address memory node or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;
	listint_t *index = head;

	if (!head)
		return (0);
	for (i = 0; index; i++)
	{
		if (i == index)
			return (index);
		index = index->next;
	}
	return (NULL);
}
