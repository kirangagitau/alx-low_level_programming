#include "lists.h"

/**
 * get_nodeint_at_index - return node at given index
 * @head: 1st element
 * @index: index of node to return
 *
 * Return: pointe to node || null
 **/
list_t *get_nodeint_at_index(list_t *head, unsigned int index)
{
	unsigned int j = 0;
	list_t *tem = head;

	while (temp && j < index)
	{
		temp = temp->next;
		j++;
	}
	return (temp ? temp : NULL);
}
