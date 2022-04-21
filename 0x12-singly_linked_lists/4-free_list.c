#include "lists.h"
/**
 * free_list - is a function that frees a list_t list.
 * @head: linked list to free.
 */
void free_list(list_t *head)
{
	list_t *p0, *p1;

	p0 = head;
	while (p0 != NULL)
	{
		p1 = p0->next;
		free(p0->str);
		free(p0);
		p0 = p1;
		if (p0 != NULL)
			p1 = p1->next;
	}
}
