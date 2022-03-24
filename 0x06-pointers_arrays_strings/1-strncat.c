#include <main.h>
#include <string.h>

/**
 * _strncat - function to join two strings at 'n' number of byte's
 *
 * @dest: the string to be appended to
 *
 * @src: the string to be appended
 *
 * @n: tells the no of stng char to be appended in bytes
 *
 * Return: (0) on sucees
 */
char *_strncat(char *dest, char *src, int n)
{

	char *_n_contacanate = strncat(dest, src, n)

	return (_n_contacanate);

}
