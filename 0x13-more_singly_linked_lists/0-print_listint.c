#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_listint - print all the element of a listint_t list
 * @h: head data type
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	while (h)
		printf("linked list is empty");

	listint_t *next = NULL;

	while (next != NULL)
	{
		printf("elements %d\n", next->n);
		h = h->next;
	}
}
