#include "variadic_functions.h"

/**
 * sum_them_all - function to add n numbers of its arguments
 * @n: amount of the arguments.
 *
 * Return: summation of all arguments.
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list arg_index;
	int sum, nums;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(arg_index, n);

	for (i = 0; i < n; i++)
	{
		nums = va_arg(arg_index, int);
		sum = sum + nums;
	}
	va_end(arg_index);

	return (sum);

}
