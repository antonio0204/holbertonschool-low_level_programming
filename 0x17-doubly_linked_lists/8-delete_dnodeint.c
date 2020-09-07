#include "lists.h"
/**
 *delete_dnodeint_at_index-deletes the node at index index of a linked list.
 *
 *@h: pointer to linkedlist
 *@idx: index of the node a delet
 *
 *
 *Return:1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int idx)
{

dlistint_t *tmp = *h;
unsigned int i = 1;
	if (*h == NULL)
		return (-1);

	if (idx == 0)
	{
		if (!tmp->next)
			*h = NULL;
		else
		{
			*h = tmp->next;
			tmp->next->prev = NULL;
		}
		free(tmp);
			return (1);
	}
	while (tmp && i <= idx)
	{
		i++;
		tmp = tmp->next;
	}
	if (i < idx)
	{
		return (-1);
	}
	else
	{
		if (!tmp->next)
		{
			tmp->prev->next = NULL;
			free(tmp);
			return (1);
		}
		tmp->next->prev = tmp->prev;
		tmp->prev->next = tmp->next;
		free(tmp);
	}
return (1);
}
