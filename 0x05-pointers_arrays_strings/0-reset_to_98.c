#include "main.h"
#include <stdio.h>

/**
 * main - void reset_to_98(int *n)
 *
 * Return: void
 */
int main(void)

{
	int *n;

	*n = 402;

	printf("Value of 'n': %d", *n);


	*n = 98;
	printf("Value of 'n': %d", *n);

	return (0);
}
