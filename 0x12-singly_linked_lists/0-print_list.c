#include "lists.h"

/**
 * print_list - prints a linked lists
 * @h: pointer
 *
 * Return: size of list
*/


size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
