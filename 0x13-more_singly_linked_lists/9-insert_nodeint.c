#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * node of a listint_t linked list.
 * @idx: node to look for.
 * @head: list's begining.
 * @n: data to save on the new node.
 * Return: the length of the list.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *index, *before, *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (*head);
	}
	index = *head;
	for (i = 0; index != NULL; i++)
		index = index->next;
	if (idx > i)
		return (NULL);
	before = *head;
	for (i = 0; i != idx - 1; i++)
		before = before->next;
	index = before->next;
	before->next = new;
	new->next = index;
	return (new);
}
