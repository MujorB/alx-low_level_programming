#include "main.h"

/**
 * factorial - fuction to find the factorial of a given integer
 *
 * @n: given integer
 *
 * Return: answer
 */
int factorial(int n)
{

	if (!n <= 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));

}
