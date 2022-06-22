#include "main.h"
#include <string.h>


/**
 * _memset - ironnou
 * @s: pointer to char params
 * @b: data to change
 * @n: index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char c;

	for (c = 0; c < n; c++)
	{
		s[c] = b;
	}
	return (s);
}
