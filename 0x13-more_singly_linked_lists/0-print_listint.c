#include "lists.h"

/**
 * print_listint - prints elements of a linked list.
 * @h: head.
 * Return: Always 0 (Success).
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t counter = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		counter += 1;
		cursor = cursor->next;
	}
	return (counter);
}

