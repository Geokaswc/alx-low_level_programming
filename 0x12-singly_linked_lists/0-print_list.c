#include <stdio.h>
#include "lists.h"

/**
 * print_list - to print all elements of the linked list
 * @h: the pointer to list_t list to print
 *
 * Return: No of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}

