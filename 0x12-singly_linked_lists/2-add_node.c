#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a node at the beginning (linked list)
 * @head: double pointer
 * @str: new string to add
 *
 * Return: the address or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new; /* new node */
	unsigned int len = 0;

	while (str[len]) /* looping to get length  */
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head); /* created new node at begining  */
}
