#include "variadic_functions.h"

/**
 * prints_strings - prints the strings given as arguments
 * @separator: separate the strings
 * @n: the number of argument strings to displayed
 *
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list str_arg;
	unsigned int i;
	char *str;

	va_start(str_arg, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(str_arg, char *);
		if (str == NULL)
			printf("(nil)");
		printf("%s", str);
		if (separator == NULL)
			separator = "";
		if (i <  n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str_arg);

}
