#include "lists.h"
/**
 * listint_len - is a function that prints all the elements of a list_t list.
 * @h: linked list to count elements.
 * Return: the length of the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
