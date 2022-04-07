#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - functions that allocate memory using malloc
 * @b: contain the number of unsigned int in bytes
 * Return: A pointer on success, while on fails return 98
*/
void *malloc_checked(unsigned int b)
{

	void *ptr_malloc;

	ptr_malloc = malloc(b);

	if (ptr_malloc == NULL)
		exit(98);
	return (ptr_malloc);

}
