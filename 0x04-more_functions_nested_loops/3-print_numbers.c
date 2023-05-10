#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers 0 to 9
 *
 * Return: Nothing
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}

	putchar('\n');
}
