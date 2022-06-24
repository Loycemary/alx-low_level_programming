#include "main.h"
#include <stdio.h>

/**
 * main - Program that prints its name
 * @argv:array of pointers to arguments
 * @argc: the numbers of arguments
 *
 * Return: Always 0.
 *
 */
int main(int argc, char *argv[])
{ 
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
