#include "main.h"

/**
 * print_alphabet_x10 - function prints alphabets a-z x10
 *
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}
		putchar('\n');
	}
}
