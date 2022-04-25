#include "lists.h"

/**
 * listint_len - function to print the num of node
 * elements in a linked list
 * @h: pointer to the first node element
 *
 * Return: the numbers of node.
 */
size_t listint_len(const listint_t *h)
{
	size_t counter;

	counter = 0;
	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);

}
