#include <stdio.h>
#include "main.h"

/**
 * main - program printing number of arguments passed
 * to it
 *
 * @argc: number of arguments
 * @argv: array of strings, arguments passed
 *
 * Return: 0 - success
 */

int main(int argc, char *argv[])
{
	int count;
	(void)argv;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
		}
		printf("%d\n", argc - 1);
	}
	else if (argc == 1)
	{
		printf("0\n");
	}
	return (0);
}
