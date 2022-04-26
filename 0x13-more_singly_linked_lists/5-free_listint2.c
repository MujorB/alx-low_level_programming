#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *newN;

	if (head != NULL)
	{
		newN = *head;
		while ((temp = newN) != NULL)
		{
			newN = newN->next;
			free(temp);
		}
		*head = NULL;
	}
}
