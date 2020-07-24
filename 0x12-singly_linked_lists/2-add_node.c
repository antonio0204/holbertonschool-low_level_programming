#include "lists.h"
/**
 * add_node - Return pointer of new element
 * @head: head pointer to list
 * @str: string
 * Return: N
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len;
	list_t *ne;

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
	ne->next = *head;
	*head = ne;
	return (ne);
}
