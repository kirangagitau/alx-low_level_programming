#include <stdio.h>
#include "lists.h"

/**
 * print_list - print elements (linked list)
 * @h: pointer
 *
 * Return: #no nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h) /* value is provided  */
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s); /* nodes printed to screen */
}
