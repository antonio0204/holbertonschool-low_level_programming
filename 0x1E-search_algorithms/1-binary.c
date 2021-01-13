#include "search_algos.h"

/**
 * binary_search - earches for a value in an array
 * @size: valuen in size_t with size
 * @array: list with numbers
 * @value: value a search
 *
 * Return: integer
 */
int binary_search(int *array, size_t size, int value)
{
	size_t apuntador1 = 0, apuntador2 = size - 1, apuntadorMitad, i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		apuntadorMitad = (apuntador1 + apuntador2) / 2;

		print_array(apuntador1, apuntador2, array);
		if (apuntadorMitad == (size_t)value)
			return (apuntadorMitad);
		else if (value > array[apuntadorMitad])
			apuntador1 = apuntadorMitad + 1;
		else if (value < array[apuntadorMitad])
			apuntador2 = apuntadorMitad - 1;
	}
	return (-1);
}

/**
 * print_array - earches for a value in an array
 * @right: valuen in size_t with size
 * @left: poniter left
 * @array: list with numbers
 *
 * Return: always 0
 */
void print_array(int left, int right, int *array)
{
	if (left <= right)
		printf("Searching in array: ");
	for (; left <= right; left++)
	{
		if (left == right)
			printf("%d\n", array[left]);
		else
			printf("%d, ", array[left]);
	}
}
