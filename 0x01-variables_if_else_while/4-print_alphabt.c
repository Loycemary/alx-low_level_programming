#include <stdio.h>

/**
 * main - Excempt characters
 * Description - Print all letters except q and e
 * Return: 0 if program is successful
 */

int main(void)
{
	char lt = 'a';

	while (lt <= 'z')
	{
		if (lt == 'e' || lt == 'q')
			lt++;

		putchar(lt);
		lt++;
	}
	putchar('\n');

	return (0);
}
