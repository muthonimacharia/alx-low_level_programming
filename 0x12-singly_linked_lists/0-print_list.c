#include "lists.h"
/**
 * print_list - is a function that prints all the elements of a list_t list.
 * @h: linked list to print.
 * Return: the length of the list.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
