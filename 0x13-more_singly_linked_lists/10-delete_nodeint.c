#include "lists.h"
/**
 * delete_nodeint_at_index - Delets a node at a given position.
 * node of a listint_t linked list.
 * @index: node to look for.
 * @head: list's begining.
 * Return: the length of the list.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *ind, *before, *after;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		before = *head;
		*head = (**head).next;
		free(before);
		return (1);
	}
	ind = *head;
	for (i = 0; ind != NULL; i++)
		ind = ind->next;
	if (index > i)
		return (-1);
	before = *head;
	for (i = 0; i != index - 1; i++)
		before = before->next;
	ind = before->next;
	after = ind->next;
	before->next = after;
	free(ind);
	return (1);
}
