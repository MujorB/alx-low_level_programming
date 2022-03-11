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
	char alpALP[52] = "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alpALP[i]);
	}

	return (0);
}
