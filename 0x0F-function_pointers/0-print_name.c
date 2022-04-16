#include "function_pointers.h"

/**
 * print_name - is a function that prints a name
 * @name: holds the string being formatted
 * Returns: void
 */
void print_name(char *name, void (*f)(char *))
{

	if (f != NULL)
		f(name);

}
