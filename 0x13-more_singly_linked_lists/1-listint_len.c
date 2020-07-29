#include "lists.h"
/**
 * listint_len -  the number of elements.
 * @h: header
 * Return: n
 */
size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		a++;
		h = h->next;
	}
	return (a);
}
