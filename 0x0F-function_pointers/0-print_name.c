#include "function_pointers.h"
#include <stdlib.h>


/**
 * print_name - prints a name give a function
 *
 * @name: name to print
 * @f: function to print
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))

{
if (name != NULL && f != NULL)

f(name);
}
