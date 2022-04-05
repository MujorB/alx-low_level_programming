#include "main.h"
#include <stdlib.h>

/**
 * _strdup - used to duplicate a string
 *
 * @str: holds the string to be duplicated
 *
 * Return: pointer to string on success and NULL if fails
 */
char *_strdup(char *str)
{
	char *pstr;
	int i;
	int len = 0;

	while (str[len])
	{
		len++;
	}
	if (str == NULL)
		return (NULL);

	pstr = (char *)malloc(len * (sizeof(char)));

	if (pstr == NULL)
	return (NULL);

	i = 0;

	while (i <= len)
	{
		*(pstr + i) = str[i];
		i++;
	}
	return (pstr);
	free(pstr);

}
