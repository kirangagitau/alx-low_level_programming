#include "list.h"

/**
 * print_list - dealing with printing of the entire elemets of linked list
 * @var: variable of linked list to print
 *
 * Return: nodes of the linked list
 */

size_t print_listint(const listint_t *var)
{
	size_t num = 0;

	while (var)
	{
		printf("%d\n", var->n);
		num++;
		var=var->next;
	}

	return (num);
}
