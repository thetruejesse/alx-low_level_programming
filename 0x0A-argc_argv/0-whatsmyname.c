#include <stdio.h>
#include "main.h"

/**
 * main - Program prints its own name
 *
 * @argc: Argument count
 * @argv: argument vector, a string of arrays
 *
 * Return: 0 - sucess
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		printf("no need");
	}
	return (0);
}
