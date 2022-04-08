#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - used to join two string with n bytes.
 * @s1: this holds the destination strings
 * @s2: this holds the source strings
 * @n: n number of s2 string bytes
 * Return: pointer on sucess and NULL on fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len_1 = 0;
	unsigned int len_2 = 0;
	char *ptr_nConcat;
	unsigned int len_sum;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	while (s1[len_1])
		len_1++;
	while (s2[len_2])
		len_2++;
	if (n > len_2)
		n = len_2;
	else
		len_2 = n;
	len_sum = (len_1 + len_2);
	ptr_nConcat = malloc(sizeof(char *) * len_sum + 1);

	if (ptr_nConcat == NULL)
		return (NULL);
	while (i < len_1)
	{
		*(ptr_nConcat + i) = s1[i];
		i++;
	}
	while (i < len_sum)
	{
		*(ptr_nConcat + i) = s2[j];
		i++;
		j++;
	}
	return (ptr_nConcat);

}
