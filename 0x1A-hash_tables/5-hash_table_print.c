#include "hash_tables.h"

/**
 * hash_table_print - print tables
 * @ht: pointr table
 * Return: always
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0, size = 0, count = 0;

	if (ht != NULL)
	{
		size = ht->size;
		printf("{");
		while (i < size)
		{
			while (ht->array[i] != NULL)
			{
				if (count > 0)
					printf(", ");
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				count++;
				ht->array[i] = ht->array[i]->next;
			}
			i++;
		}
		printf("}\n");
	}
}
