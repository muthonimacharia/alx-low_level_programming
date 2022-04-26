#include "lists.h"
/**
 * reverse_listint - Reverse a list.
 * @head: list's begining.
 * Return: the addres of the head.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p0 = NULL, *p1 = *head;


	if (head == NULL || *head == NULL)
		return (*head);
	while (p1 != NULL)
	{
		p1 = (**head).next;
		(**head).next = p0;
		p0 = *head;
		*head = p1;
	}
	*head = p0;
	return (*head);
}
