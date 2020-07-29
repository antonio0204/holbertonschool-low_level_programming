#include "lists.h"
/**
*get_nodeint_at_index - gets the number of the index.
*@head: the list
*@index: the number of the node I will get
*Return: the node in the index given.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *pt;
	unsigned int cont = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	pt = head;
	while (pt != NULL)
	{
		if (cont == index)
		{
			return (ptr);
		}
		pt = pt->next;
		cont++;
	}
	return (NULL);
}
