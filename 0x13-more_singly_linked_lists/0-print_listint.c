#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all the element of a listint_t list
 * @h: head data type
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
