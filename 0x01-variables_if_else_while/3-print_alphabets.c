#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */

int main(void)
{
char lowalpha;
char upalpha;

for (lowalpha = 'a'; lowalpha <= 'z'; lowalpha++)
{
putchar(lowalpha);
}
for (upalpha = 'A'; upalpha <= 'Z'; upalpha++)
{
putchar(upalpha);
}
putchar('\n');

return (0);
}
