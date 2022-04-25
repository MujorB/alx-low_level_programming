#include "limits.h"

/**
 * print_listint - A function to print node element.
 * @h: holds the address of the first node
 *
 * Return: the numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{

	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);

}
