#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - retun pointed name
 * @name: var 1(pointer) to add.
 * @f: var 2 pointer of the function
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
