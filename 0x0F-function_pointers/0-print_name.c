#include "function_pointers.h"

/**
 * print_name - outputs a name.
 * @name: name outputed
 * @f: pointer to name printing function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
