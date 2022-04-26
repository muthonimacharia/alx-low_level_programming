#include "lists.h"
/**
 * free_listint - is a function that frees a list_t list.
 * @head: linked list to free.
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	p = head;
	while (p != NULL)
	{
		head = head->next;
		free(p);
		p = head;
	}
}
