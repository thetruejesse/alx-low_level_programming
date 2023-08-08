#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it recieves
 *
 * @argc: number of arguments
 * @argv: string of arguments passed
 *
 * Return: 0 - Success
 */

int main(int argc, char *argv[])
{
	int count;

	if (argc > 1)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	else
	{
		printf("Dont count\n");
	}

	return (0);
}
