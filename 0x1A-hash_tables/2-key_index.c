#include "hash_tables.h"
/**
 * key_index - return index
 * @key: const char
 * @size: size of tables
 * Return: unsigned int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
