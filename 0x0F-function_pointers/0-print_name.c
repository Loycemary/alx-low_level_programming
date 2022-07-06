#include "function_pointers.h"
#include "stdlib.h"
#include <stdio.h>

/**
 * print_name_as_is - prints name
 * @name: pointer to char
 * @f: pointer to function that returns nothing
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
	f(name);
}
