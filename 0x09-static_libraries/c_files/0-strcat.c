#include "main.h"
#include <string.h>

/**
 * _strcat - To print two diff strings together
 *
 * @dest: the string to be added to
 *
 * @src: the string to be added
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{

	char *contacat = strcat(dest, src);

	return (contacat);
}
