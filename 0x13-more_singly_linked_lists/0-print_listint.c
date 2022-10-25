#include <stdio.h>
#include "lists.h"

/**
 * print_listint - the program prints all the elements of a list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		++counter;
		h = h->next;
		
	}
	return (counter);
}
