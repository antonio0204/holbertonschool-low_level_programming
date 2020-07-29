#include "lists.h"
/**
 * sum_listint - returns the syl
 * @head: pointer
 * Return: add
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
