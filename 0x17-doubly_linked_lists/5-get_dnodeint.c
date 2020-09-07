#include "lists.h"
/**
 *get_dnodeint_at_index-function that returns the nth node
 *
 *@head: head of linked list
 *@index: index of the node add
 *Return: the nth node or NULL if not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *tmp = head;
	if (head == NULL)
		return (NULL);
	while (tmp)
	{

		if (i == index)
			return (tmp);
		tmp = head->next;
		i++;
	}

return (NULL);

}
