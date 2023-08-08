#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that multiplies 2 numbers
 *
 * @argc: number of arguments
 * @argv: string of arguments
 *
 * Return: 0 - Success
 */

int main(int argc, char *argv[])
{
	if (argc >= 3)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);

		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
