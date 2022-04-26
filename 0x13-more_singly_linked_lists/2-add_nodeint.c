#include "lists.h"

/**
 * *add_nodeint - function to add node to the start of d list.
 * @head: address of the first node
 * @n: value of node to  be added
 *
 * Return: the address of newNode.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *newNode;

	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);

}
