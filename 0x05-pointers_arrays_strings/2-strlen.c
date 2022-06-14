#include "main.h"
#include <stdio.h>

/**
 * main - function that returns length of string
 *
 * Return: Always 0.
 */
int main(void)
{
	char a[] = "This is a string";
	int i = 0;

	while (a[i] != '\0')
	i++;

	printf("length of string: %d\n", i);

	return (0);
}
