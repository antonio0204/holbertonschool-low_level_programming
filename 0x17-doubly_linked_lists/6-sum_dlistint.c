#include "lists.h"
/**
 *sum_dlistint-function that get the sum of all the data (n) of linked list
 *
 *@head: linked list
 *
 *Return: sum of data(n)
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *current = head;
	while (current)
	{
		current = head->next;
		sum += head->n;
		head = current;
	}

return (sum);

}
