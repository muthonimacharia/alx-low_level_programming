#include "lists.h"
/**
 * print_listint - is a function that prints all the elements of a list_t list.
 * @h: linked list to print.
 * Return: the length of the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
