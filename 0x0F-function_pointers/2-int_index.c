#include "function_pointers.h"

/**
 * int_index - searching for an integer with certain conditions
 * @array: contains the interger
 * @size: contains the array size
 * @cmp: pointer to a function that makes the comparison
 *
 * Return: returns cmp on success 
 */
int int_index(int *array, int size, int (*cmp)(int))
{

	int i;

	if (array == 0 || size == 0 || cmp == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]);)
			return (i);
	}
	return (-1);

}
