#include <stdio.h>

/**
 * main - Entry point for this program
 * Description: Prints the lowercase alphabet in reverse
 * Return: 0 if the program executes successfully
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}

	putchar('\n');

	return (0);
}
