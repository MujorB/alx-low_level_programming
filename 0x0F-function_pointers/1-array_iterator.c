#include "function_pointers.h"

/**
 * array_iterator - functions that iterate an array to print to stdout
 * its index value(note that this is also callback functions)
 * @array: contains the value to be formatted
 * @size: contains the attay size
 * @action: a function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action && array != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
