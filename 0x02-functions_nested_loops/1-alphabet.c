#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 *
 * return 0, Always success
 */

void print_alphabet(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');

}
