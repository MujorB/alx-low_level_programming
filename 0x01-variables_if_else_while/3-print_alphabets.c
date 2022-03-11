#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Description: Prints the lower case of the english alphabets aswell as upper case too
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char alpALP[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alpALP[i]);
	}

	return (0);
}
