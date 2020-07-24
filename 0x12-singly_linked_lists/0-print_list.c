#include "lists.h"
#include <stdio.h>
/**
 * print_list - Print all the elements of a list
 * @h: head pointer to list
 * Return: i
 */
size_t print_list(const list_t *h)
{
	const list_t *buff;
	unsigned int i;

	buff = h;
	for (i = 0; buff; i++)
	{
		if (buff->str)
			printf("[%u] %s\n", buff->len, buff->str);
		else
			printf("[%u] %s\n", 0, "(nil)");
		buff = buff->next;
	}
	return (i);
}
