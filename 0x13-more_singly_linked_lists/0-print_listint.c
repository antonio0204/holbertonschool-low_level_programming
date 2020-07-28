#include <stdio.h>
#include "lists.h"
/**
 * print_listint -  prints all.
 * @h: list to print
 * Return: number
 */
size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
		a++;
		h = h->next;
	}
	return (a);
}
