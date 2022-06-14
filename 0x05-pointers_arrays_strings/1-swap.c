#include "main.h"

/**
 * main - void swap(int *a, int *b)
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int a;
	int b;

	a = 98;
	b = 42;

	printf("a = %d\n", a);
	printf("b = %d\n", b);

	void swap_int(int *a, int *b);
	int t;

	t = *b;
	*b = *a;
	*a = t;

	printf("a=%d, b=%d\n", a, b);

	return (0);
}
