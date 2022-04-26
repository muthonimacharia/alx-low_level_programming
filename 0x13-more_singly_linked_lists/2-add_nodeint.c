#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of a list.
 * @head: where to add the node.
 * @n: int to add.
 * Return: the adress of new head node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
