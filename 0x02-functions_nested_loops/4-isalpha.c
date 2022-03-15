#include "main.h"

/**
 * _isalpha - checks for lowercase or uppercase
 *
 * @c: c is an ascii character
 *
 * Description: checks for lower/uppercase letters
 *
 * Return: 1 if lowercase or uppercase
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
