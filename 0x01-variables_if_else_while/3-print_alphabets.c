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
	char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar(10);
	return (0);
}
