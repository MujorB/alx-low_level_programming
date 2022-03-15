#include "main.h"

/**
 * _islower - checks for lowercase or uppercase
 *
 * @c: c is an ascii character
 *
 * Return: 1 if lowercase or uppercase
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
