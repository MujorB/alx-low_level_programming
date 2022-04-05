#include <stdlib.h>
#include "main.h"

/**
 * create_array - this creates an array and initialize it with a specific
 * character
 *
 * @size: this provides the sizes of the array
 *
 * @c: holds the content of the array
 *
 * Return: ptr_c on success and NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{

	unsigned int i;
	char *ptr_c;

	if (size == 0)
	{
		return (NULL);
	}
	ptr_c = (char *)malloc(size * sizeof(char));

	if (ptr_c == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (i > size)
	{
		*(ptr_c + i) = c;
		i++;
	}
	return (ptr_c);
	free(ptr_c);

}
