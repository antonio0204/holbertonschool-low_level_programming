#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - Adds new node at the end of a list
 * @head: pointer
 * @str: String
 * Return: adress
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len;
	list_t *ne, *buff;

	if (str == NULL)
		return (NULL);
	ne = malloc(sizeof(list_t));
	if (ne == NULL)
		return (NULL);
	ne->str = strdup(str);
	if (ne->str == NULL)
	{
		free(ne);
		return (NULL);
	}
	for (len = 0; ne->str[len]; len++)
		;
	ne->len = len;
	ne->next = NULL;
	if (*head == NULL)
	{
		*head = ne;
		return (ne);
	}
	buff = *head;
	while (buff->next)
		buff = buff->next;
	buff->next = ne;
	return (ne);
}
