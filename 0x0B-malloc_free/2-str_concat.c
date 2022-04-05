#include "main.h"
#include <stdlib.h>

/**
 * str_concat - used to join two strings together
 *
 * @s1: holds the first strings
 *
 * @s2: holds the second strings
 *
 * Return: ptr_s on success while null on failure
 */
char *str_concat(char *s1, char *s2)
{

	int i = 0;
	int j = 0;
	int len1 = 0;
	int len2 = 0;
	char *ptr_s;
	int len_sum = len1 + len2;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	while (i < s1[len1])
		len1++;
	while (j < s2[len2])
		len2++;
	ptr_s = (char *)malloc(sizeof(char) * (len_sum + 1));

	if (ptr_s == NULL)
	{
		return (NULL);
		free(ptr_s);
	}
	while (i < len1)
	{
		*(ptr_s + i) = s1[i];
		i++;
	}
	while (i < (len_sum))
	{
		*(ptr_s + i) = s2[j];
		i++;
		j++;
	}
	return (ptr_s);
	free(ptr_s);

}
