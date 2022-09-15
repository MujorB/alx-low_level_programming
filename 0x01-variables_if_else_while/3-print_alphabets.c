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
	char alphABETs;

	for (alphABETs = 'a'; alphABETs <= 'z'; alphABETs++)
	{
		putchar(alphABETs);
	}
	for (alphABETs = 'A'; alphABETs <= 'Z'; alphABETs++)
	{
		putchar(alphABETs);
	}
	putchar('\n');

	return (0);
}
