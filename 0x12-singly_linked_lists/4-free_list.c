#include <stdlib.h>
#include "lists.h"
/**
 * free_list - Free list
 * @head: Pointer
 */
void free_list(list_t *head)
{
	list_t *buff;

	while (head)
	{
		buff = head;
		head = head->next;
		free(buff->str);
		free(buff);
	}
}
