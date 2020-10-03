#include "hash_tables.h"

/**
 * hash_table_set - get y set data in c
 * @key:  cons char
 * @value:  cons char
 * @ht:  cons char
 * Return: integer
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *tmp = NULL;
	hash_node_t *temp_nodo = NULL;

	if (ht == NULL || ht->array == NULL || strlen(key) == 0)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	temp_nodo = malloc(sizeof(hash_node_t));
	if (temp_nodo == NULL)
		return (0);
	temp_nodo->key = strdup(key);
	if (temp_nodo->key == NULL)
	{
		free(temp_nodo);
		return (0);
	}
	temp_nodo->value = strdup(value);
	if (temp_nodo->value == NULL)
	{
		free(temp_nodo);
		return (0);
	}
	temp_nodo->next = ht->array[idx];
	ht->array[idx] = temp_nodo;
	return (1);
}
