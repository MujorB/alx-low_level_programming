#include "main.h"

/**
 * _puts_recursion - Fuction to print a sting followed by a new line
 *
 * @s: holds the strings to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{

	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		++i;
		_puts_recursion(s + i);
	}

	_putchar ("\n");
}
