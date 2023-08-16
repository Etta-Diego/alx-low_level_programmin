#include "function_pointers.h"
#include <stdlib.h>
/*
 * print_name - Function that prints a name
 * @name: String pointer
 * @f: Function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	while (f != NULL)
{

	f(name);

	f = NULL;
}

}
