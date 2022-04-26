#include "lists.h"
/**
 * free_listint2 - is a function that frees a list_t list.
 * @head: linked list to free.
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
		return;
	p = *head;
	while (p != NULL)
	{
		*head = (**head).next;
		free(p);
		p = *head;
	}
	*head = NULL;
}
