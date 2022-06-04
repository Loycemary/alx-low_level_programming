#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single digit numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 15)
	{
		printf("%x", digit);
		++digit;
	}
	printf("\n");

	return (0);
}
