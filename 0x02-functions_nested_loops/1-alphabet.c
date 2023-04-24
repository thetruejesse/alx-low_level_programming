#include <stdio.h>

/**
 * print_alphabet- prints alphabet in lowercase
 *
 */
void print_alphabet(void)
{
       int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar('\n');
}
