#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Description: Prints lowerCase and upperCase english alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (char alphABETs = 'a'; alphABETs <= 'z'; alphABETs++)
	{
		putchar(alphABETs);
	}
	for (char alphABETs = 'A'; alphABETs <= 'Z'; alphABETs++)
	{
		putchar(alphABETs);
	}
	putchar('\n');

	return (0);
}
