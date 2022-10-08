#include <stdio.h>
#include <stdlib.h>

/**
 *
 */

typedef struct listint_s
{
    int n;
    struct listint_s *next;
}listint_t;

listint_t *add_nodeint(listint_t **head, const int n);
size_t listint_len(const listint_t *h);
size_t print_listint(const listint_t *h);
void free_listint2(listint_t **head);
void free_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int pop_listint(listint_t **head);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);listint_t *add_nodeint(listint_t **head, const int n);

int main(void)
{

    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = print_listint(head);
    printf("-> %lu elements\n", n);
    free(new);

	return(0);

}
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
