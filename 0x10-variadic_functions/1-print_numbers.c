#include "variadic_functions.h"

/**
 * print_numbers - prints numbers passed as argument followed
 * by a separator
 * @separator: used to separate the numbers
 * @n: holds the fixed n0 of aguments to be passed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list(arg_index);
	unsigned int i;
	int nums;

	va_start(arg_index, n);

	for (i = 0; i < n; i++)
	{
		nums = va_arg(arg_index, int);
		printf("%d", nums);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg_index);

}
