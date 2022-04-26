#include "lists.h"
/**
 * get_nodeint_at_index - Write a function that returns the nth
 * node of a listint_t linked list.
 * @index: node to look for.
 * @head: list's begining.
 * Return: the length of the list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *p;

	p = head;
	for (i = 0; p != NULL; i++)
		p = p->next;
	if (index > i)
		return (NULL);
	p = head;
	for (i = 0; i != index; i++)
		p = p->next;
	return (p);
}
