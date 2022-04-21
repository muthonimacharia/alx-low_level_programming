#include "lists.h"
/**
 * add_node_end - is  a function that adds a new node at the end of a list.
 * @head: where to add the node.
 * @str: char to add.
 * Return: the adress of new head node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *aux;
	size_t i;

	aux = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	for (i = 0; str[i] != 0; i++)
		;
	new->str = strdup(str);
	new->len = i;
	if (aux == NULL)
		*head = new;
	else
	{
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = new;
	}
	return (*head);
}
