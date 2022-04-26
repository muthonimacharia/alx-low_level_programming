#include "lists.h"
/**
 * pop_listint - Write a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: begin of linked list.
 * Return: Head node's data.
*/
int pop_listint(listint_t **head)
{
	listint_t *p;
	int i;

	if (*head == NULL || head == NULL)
		return (0);
	p = *head;
	i = p->n;
	*head = (**head).next;
	free(p);
	return (i);
}
