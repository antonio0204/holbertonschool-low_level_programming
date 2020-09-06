#include "lists.h"
/**
 *dlistint_len-get the number of elements in a linked dlistint_t list.
 *
 *@h: linkedlist
 *
 *Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t i = 0;


if (!h)
return (0);

while (h != NULL)
{

i++;
h = h->next;
}

return (i);

}
