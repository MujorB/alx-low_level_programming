#include "variadic_functions.h"

/**
 * prints_strings - prints the strings given as arguments
 * @separator: separate the strings
 * @n: the number of argument strings to displayed
 *
 * Return: void.
 */
void prints_strings(const char *separator, const unsigned int n, ...)
{

	va_list str_arg;
	unsigned int i;
	char *str;

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			separator = "";
		if (va_arg(str_arg, char*) == NULL)
			str = "nil";
		else
			str = va_arg(str_arg, char *);
		printf("%s", str);
		if (i <  n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str_arg);

}
