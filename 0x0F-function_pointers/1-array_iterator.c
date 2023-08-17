#include "function_pointers.h"

/**
 * array_iterator - print the array on a new line
 * each parameter
 * @array: input array.
 * @size: number of array to print.
 * @action: pointer to print in hex.
 *
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
