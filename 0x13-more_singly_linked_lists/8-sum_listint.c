#include "lists.h"
/**
 * sum_listint - Write a function that returns the sum of all
 * the data (n) of a listint_t linked list.
 * @head: linked list's begining.
 * Return: the adding of the list values.
 */
int sum_listint(listint_t *head)
{
	size_t i = 0;
	listint_t *p;

	p = head;
	if (head == NULL)
		return (0);
	while (p != NULL)
	{
		i += p->n;
		p = p->next;
	}
	return (i);
}
