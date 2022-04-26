#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int headNodeData;
	listint_t *temp;
	listint_t *nodeToDel;

	if (*head == NULL)
		return (NULL);

	nodeToDel = *head;
	headNodeData = nodeToDel->n;
	temp = nodeToDel->next;

	free(nodeToDel);

	*head = temp;

	return (headNodeData);
}
