#include <stdio.h>

/**
 * main - Entry point to the program
 * Description: Print all possible combinations of a single-digit number
 * Return: 0 if successful
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}

	putchar('\n');

	return (0);
}
